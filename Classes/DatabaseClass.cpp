/* The Database class is responsible for communicating, updating, and reading from the different tables in the database.	*/
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <fstream>
#include <variant>
#include <ranges>
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream
using namespace std;



class Database {

private:

	void readFile(string filename, vector<pair<string, vector<int>>> dataset) {
		// Make a CSV file with one or more columns of integer values
		// Each column of data is represented by the pair <column name, column data>
		//   as pair<string, std::vector<int>>
		// The dataset is represented as a vector of these columns

		// Create an output filestream object
		ofstream myFile(filename);

		// Send column names to the stream
		for (int j = 0; j < dataset.size(); j++)
		{
			myFile << dataset.at(j).first;
			if (j != dataset.size() - 1) myFile << ",";
		}
		myFile << "\n";

		// Send data to the stream
		for (int i = 0; i < dataset.at(0).second.size(); i++)
		{
			for (int j = 0; j < dataset.size(); ++j)
			{
				myFile << dataset.at(j).second.at(i);
				if (j != dataset.size() - 1) myFile << ",";
			}
			myFile << "\n";
		}
	};

	void confRm() {
		string filename;

		filename = ofstream myfile("ConferenceRoom.txt");

		// Make 5 vectors
		vector<int> vec1;
		vector<string> vec2;
		vector<int> vec3;
		vector<int> vec4;
		vector<int> vec5;

		// Wrap into a vector
		vector<pair<string, vector<int>>> vals = { {"idConfrm", vec1}, {"Name", vec2}, {"Capacity", vec3}, {"Video", vec4}, {"idOffice", vec5} };

		// Write the vector to CSV
		write_csv("confrm.csv", vals);
	};

	void write_csv() {

		vector<pair<string, vector<int>>> read_csv(string filename);
		// Reads a CSV file into a vector of <string, vector<int>> pairs where
		// each pair represents <column name, column values>

		// Create a vector of <string, int vector> pairs to store the result
		vector<pair<string, vector<int>>> result;

		// Create an input filestream
		ofstream myFile(filename);

		// Make sure the file is open
		if (!myFile.is_open()) throw runtime_error("Could not open file");

		// Helper vars
		string line, colname;
		int val;

		// Read the column names
		if (myFile.good()) {
			// Extract the first line in the file
			getline(myFile, line);

			// Create a stringstream from line
			stringstream ss(line);

			// Extract each column name
			while (getline(ss, colname, ',')) {

				// Initialize and add <colname, int vector> pairs to result
				result.push_back({ colname, vector<int> {} });
			}
		}

		// Read data, line by line
		while (getline(myFile, line))
		{
			// Create a stringstream of the current line
			stringstream ss(line);

			// Keep track of the current column index
			int colIdx = 0;

			// Extract each integer
			while (ss >> val) {

				// Add the current integer to the 'colIdx' column's values vector
				result.at(colIdx).second.push_back(val);

				// If the next token is a comma, ignore it and move on
				if (ss.peek() == ',') ss.ignore();

				// Increment the column index
				colIdx++;
			}
		}
	}

	void write() {
		// Read files
		vector<pair<string, vector<int>>> confRm = write_csv("confrm.csv");

		vector<pair<string, vector<int>>> firm = write_csv("Firm.csv");

		vector<pair<string, vector<int>>> depo = write_csv("Deposition.csv");

		vector<pair<string, vector<int>>> offices = write_csv("Offices.csv");

		vector<pair<string, vector<int>>> schedDepo = write_csv("ScheduledDepo.csv");

		vector<pair<string, vector<int>>> staff = write_csv("Staff.csv");

	}
};
