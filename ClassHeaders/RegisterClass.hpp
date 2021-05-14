//
//  RegisterClass.hpp
//  FinalAssignment_Testing
//
//  Created by Phillip Sanders on 5/13/21.
//

#ifndef RegisterClass_hpp
#define RegisterClass_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

//This class is resposible for registering new accounts.
class Registration {

private:

    string key;

    //generates unique id for user
    void generateUserID();

    //generates a random key to encrypt password
    string generateKey();

    //uses key to to encrypt password entered
    string encryptPassword(string value, string key);

    //returns key for encryption
    string getKey();


public:

    float userID;
    string userName;
    string password;
    vector<string> email;

    //runs method to generate userID
    void setUserID();

    //returns userID
    float getUserID();

    // sets username
    void setUsername(string value);

    //returns username
    string getUserName();

    //sets email
    void setEmail(vector<string> value);

    //returns email
    vector<string> getEmail();

    //takes enter password and encrypts it with key
    void setPassword(string value);

    //returns password
    string getPassword();

    //Inserts regeistered user into database
    void registerAccount();

    //checks if account exist in database
    bool accountExists(vector<string> value);

};

#endif /* RegisterClass_hpp */
