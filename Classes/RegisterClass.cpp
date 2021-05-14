//
//  RegisterClass.cpp
//  FinalAssignment_Testing
//
//  Created by Phillip Sanders on 5/13/21.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "RegisterClass.hpp"
#include "DatabaseClass.hpp"

using namespace std;

//generates unique id for user
void Registration::generateUserID() {
    
    userID = rand() % 50000;
    
};

//generates a random key to encrypt password
string Registration::generateKey() {
    char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    int keyLength = rand() % 30;
    string key;
    
    for (int i = 0; i < keyLength; i++) {
        
        key[i] = alpha[rand() % 26];
        
    }
    
    return key;
    
};

//uses key to to encrypt password entered
string Registration::encryptPassword(string value, string key) {
    
    string encPass;
    
    for (int i = 0; i < key.length(); i++) {
        
        encPass[i*3] = value[i] + (key.length()/9);
        
    }
    
    return encPass;
    
};

//returns key for encryption
string Registration::getKey() {
    
    key = generateKey();
    return key;
    
};

//runs method to generate userID
void Registration::setUserID() {
    
    generateUserID();
    
};

//returns userID
float Registration::getUserID() {
    
    return userID;
    
};

// sets username
void Registration::setUsername(string value) {
    
    userName = value;
    
};

//returns username
string Registration::getUserName() {
    
    return userName;
    
}

//sets email
void Registration::setEmail(vector<string> value) {
    
    if (!accountExists(value)) {
        
        email = value;
        
    } else {
        
        cout << "Account already exists.";
        
    }
    
};

//returns email
vector<string> Registration::getEmail() {
    
    return email;
    
};

//takes enter password and encrypts it with key
void Registration::setPassword(string value) {
    
    getKey();
    password = encryptPassword(value, key);
    
};

//returns password
string Registration::getPassword() {
    
    return password;
    
}

//Inserts regeistered user into database
void Registration::registerAccount() {
    //UserData newUser;
    ofstream newAccountFile;
    
    
    newAccountFile.open("newAccount.txt", ios_base::app);
    newAccountFile << "sID = " << getUserID() << "username = " << getUserName()
    << "password = " << getPassword();
    
    //newUser.userData(newAccountFile);
}

//checks if account exist in database
bool Registration::accountExists(vector<string> value) {
    
    Database data;
    
    
    if(value == data.getUsersPrint()) {
        
        return true;
        
    } else {
        
        return false;
        
    }
}


