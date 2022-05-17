#pragma once 
#include <string> 
#include <iostream>
#include "Resevation.h"
using namespace std;

//creating class 
class Package {
private:
    string pkgId;
    string pkgType;
    double pkgPrice;
    Reservation* res;
public:
    //setting default values 
    Package()
    {
        pkgId = "p000";
        pkgType = "abcd";
        pkgPrice = 0000.00;
        res = new Reservation();
    }
    // overloading constructor 
    Package(string pId, string pType, double pPrice)
    {
        pkgId = pId;
        pkgType = pType;
        pkgPrice = pPrice;
    }
    void displayDtails()
    {
        cout << "===============================" << endl;
        cout << "pkgId:" << pkgId << endl;
        cout << "pkgType:" << pkgType << endl;
        cout << "pkgPrice:" << pkgPrice << endl;
        cout << "===============================" << endl;
    }
    string getPackageType()
    {
        return pkgType;
    }
    ~Package()
    {
        cout << "Delete Package" << endl;
    }
};
