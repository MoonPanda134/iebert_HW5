/*************************************************************************
Author : Isaiah Ebert
Program : HW5, Q1
Date Created : December 8, 2021
Date Last Modified : 
Usage : No command line arguments

Problem:
Create a template class called MyList which is friend of the Node class
defined previously. Create a struct called Profile and insert values from
a text file into a Profile template of MyList class object: 'pMyList'.
*************************************************************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>

#include "MyClasses.h"

using namespace std;

struct Profile{
    string fullname;
    string state;
    bool operator==( Profile rhs)
    {if (fullname==rhs.fullname) return true; return false;}

    bool operator!=(Profile rhs)
    {if (fullname!=rhs.fullname) return true; return false;}
};

ostream& operator<< (ostream &out, Profile &user){
    out << user.fullname<<"--" <<user.state;
    return out;
}
