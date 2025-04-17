// athlete.h
#pragma once

#include <string>
#include "country.h"
#include "sport.h"

class Athlete {
private:
    std::string name;
    int age;
    // Country country;
    // Sport sport;
    
public:
    Athlete(std::string name, int age);
    std::string get_name() const { return name; }
    ~Athlete() = default;
    void show_details();
};