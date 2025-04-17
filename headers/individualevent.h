#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include "athlete.h"
#include "country.h"
#include "event.h"
#include "sport.h"
using namespace std; 

class IndividualEvent: public Event{
private:
    vector<Athlete> participants;
public:
    void simulate_event();
    using Event::Event; // Inherit constructors

};