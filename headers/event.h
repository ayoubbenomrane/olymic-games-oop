#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "country.h"
#include "sport.h"
using namespace std; 

class Event
{
private:
    string name;
    string venue;
    string date;
public:
    virtual void simulate_event()=0 ;
    void display_info();
   
    Event(string name,string venue,string date);

    ~Event()
    {
        cout<<"event deleted"<<endl;
    }


};