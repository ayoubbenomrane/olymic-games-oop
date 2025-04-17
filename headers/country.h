#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;


class Country
{
private:
    string name;
    int golds=0,bronzes=0,silvers=0;
public:
    Country (string name) :name(name){};
    void show_medals(){};
    string get_name() const { return name; };
};

