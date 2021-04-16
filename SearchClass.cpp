//
//  Search.cpp
//  RegisterClass
//
//  Created by Phillip Sanders on 4/5/21.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//handles searching the database
class Search {

private:
    Database searchDatabase;
    
    //takes the search item deposition name and each line with the name located
    void findDeposition(string depositionName) {
        
        ifstream searchDepoFile;
        string line;
        
        searchDepoFile = searchDatabase.getUpdateSchedule;
        
        searchDepoFile.open("searchDepo.txt", ios_base::app);
        
        if (searchDepoFile.is_open()) {
            
            getline(searchDepoFile,line);
            
            while(!searchDepoFile.eof()){
                if(depositionName.compare(line)==0) {
                    cout << line;
                }
            }
            
        }

    };
    
    //Searches database for depositions with roomname
    void findRoom(string roomName) {
        
        ifstream searchRoomFile;
        string line;
        
        searchRoomFile = searchDatabase.getUpdateSchedule;
        
        searchRoomFile.open("searchRoom.txt", ios_base::app);
        
        if (searchRoomFile.is_open()) {
            
            getline(searchRoomFile,line);
            
            while(!searchRoomFile.eof()){
                if(roomName.compare(line)==0) {
                    cout << line;
                }
            }
            
        }
    };
    
    //searches staff by name in database
    void findStaff(string staffName) {
        
        ifstream searchStaffFile;
        string line;
        
        searchStaffFile = searchDatabase.getUpdateSchedule;
        
        searchStaffFile.open("searchRoom.txt", ios_base::app);
        
        if (searchStaffFile.is_open()) {
            
            getline(searchStaffFile,line);
            
            while(!searchStaffFile.eof()){
                if(staffName.compare(line)==0) {
                    cout << line;
                }
            }
            
        }
        
    };
    
    
    
public:
    
    //returns search results for deposition name
    void getDeposition(string depositionName) {
        
        findDeposition(depositionName);
    
    };
    
    //returns search results for room name
    void getRoom(string roomName) {
        
        findRoom(roomName);
        
    };
    
    //returns search results for staff name
    void getUserData(string staffName) {
        
        findStaff(staffName);
        
    };
    
};
