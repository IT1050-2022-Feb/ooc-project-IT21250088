#pragma once 
#include<iostream> 
#include<string> 
#include "Package.h"
#include "Payment.h" 
using namespace std;
//creating class
class Cart
{
private:
    string pkgNo;
    int noOfItems;

    Package* pkg;
    Payment* pay;
    string pkgtype;

public:
    Cart() {}
    void displayPackageDetails(Package* pkg)
    {

        pkg->displayDtails();
    }
    void setNoOfItems(int nItems)
    {
        noOfItems = nItems;
    }
    void checkoutPaymentType(Payment* pay)
    {
        pkgtype = pay->getPayType();
    }
};

