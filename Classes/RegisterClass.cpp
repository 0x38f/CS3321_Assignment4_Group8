//
//  register.cpp
//  RegisterClass
//
//  Created by Phillip Sanders on 4/3/21.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//This class is resposible for registering new accounts.
class Register {
    
private:
    
    string key;
    
    //generates unique id for user
    void generateUserID() {
      
        userID = rand() % 50000;
        
    };
    
    //generates a random key to encrypt password
    string generateKey() {
        char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
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
            
            encPass[i*3] = value[i] + (key.length()/9);
            
        }
        
        return encPass;
        
    };
    
    //returns key for encryption
    string getKey() {
        
        key = generateKey();
        return key;
        
    };
    
    //checks if account exist in database
    bool accountExists(string value) {
        
        Database data;
        
        if (email == data.getUserData() && userID == data.getUserData()) {
        
            return true;
        
        } else {
            
            return false;
            
        }
    }
    
    
public:
    
    float userID;
    string userName;
    string password;
    string email;
    
    //runs method to generate userID
    void setUserID() {
        
        generateUserID();
        
    };
    
    //returns userID
    float getUserID() {
      
        return userID;
        
    };
    
    // sets username
    void setUsername(string value) {
      
        userName = value;
        
    };
    
    //returns username
    string getUserName() {
        
        return userName;
        
    }
    
    //sets email
    void setEmail(string value) {
        
        if (!accountExists(value)) {
            
            email = value;
            
        } else {
            
            cout << "Account already exists.";
            
        }
        
    };
    
    //returns email
    string getEmail() {
        
        return email;
        
    };
    
    //takes enter password and encrypts it with key
    void setPassword(string value) {
        
        getKey();
        password = encryptPassword(value, key);
        
    };
    
    //returns password
    string getPassword() {
        
        return password;
        
    }
    
    //Inserts regeistered user into database
    void registerAccount() {
        UserData newUser;
        ofstream newAccountFile;
        
        
        newAccountFile.open("newAccount.txt", ios_base::app);
        newAccountFile << "sID = " << getUserID() << "username = " << getUserName() << "email = " << getEmail()
                       << "password = " << getPassword();
        
        newUser.userData(newAccountFile);
    }
    
};
