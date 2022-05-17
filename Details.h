#pragma once 
#include <string>
#include <iostream>
using namespace std;

//creating class 

class Details
{
protected:
    string name;
    int registerNo;
    string email;
public:
    //default constructor 
    Details()
    {
        cout << "setting default values" << endl;
        name = "xxxxxx";
        registerNo = 0;
        email = "abc@gmail.com";
    }
    //display fucntion 
    virtual void displayDetails()
    {
        cout << name << "" << registerNo << email << "" << endl;
    }

    ~Details()
    {
        cout << "**" << endl;
        cout << "deleting details" << endl;
        cout << "**" << endl;
    }

};
