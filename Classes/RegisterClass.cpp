
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iterator>
#include <iomanip>
#include "UserDataClass.cpp"

using namespace std;

class Registration {

private:
    string key;
    //generates unique id for user
    void generateUserID() {
        userID = rand() % 50000;
    };
    //generates a random key to encrypt password
    string generateKey() {
        char alpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
        int keyLength = rand() % 30;
        string key;
        for (int i = 0; i < keyLength; i++) {
            key[i] = alpha[rand() % 26];
        }
        return key;
    };

    //uses key to to encrypt password entered
    string encryptPassword(string value, string key) {
        string encPass;
        for (int i = 0; i < key.length(); i++) {
            encPass[i * 3] = value[i] + (key.length() / 9);
        }
        return encPass;
    }

public:
    //returns key for encryption
    string getKey() {
        key = generateKey();
        return key;
    }
    float userID;
    string userName;
    string password;
    string email;
    //runs method to generate userID
    void setUserID() {
        generateUserID();
    }
    //returns userID
    float getUserID() {
        return userID;
    }
    // sets username
    void setUsername(string value) {
        userName = value;
    }
    //returns username
    string getUserName() {
        return userName;
    }
    //sets email
    void setEmail(string value) {
        if (!accountExists(value)) {
            email = value;
        }
        else {
            cout << "Account already exists.";
        }
    }
    //returns email
    string getEmail() {
        return email;
    }
    //takes enter password and encrypts it with key
    void setPassword(string value) {
        getKey();
        password = encryptPassword(value, key);
    }
    //returns password
    string getPassword() {
        return password;
    }
    //Inserts regeistered user into database
    void getRegisterAccount() {

        ofstream newAccountFile;
        newAccountFile.open("newAccount.txt", ios_base::app);
        newAccountFile << "sID = " << getUserID() << "username = " << getUserName() << "email = " << getEmail()
            << "password = " << getPassword();
    }
    //checks if account exist in database
    bool accountExists(string value) {
        UserData user;
        string email, userName;
        if (email == user.getUserData() && userName == user.getUserData()) {
            return true;
        }
        else {
            return false;
        }
    }
};
