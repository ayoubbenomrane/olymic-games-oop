#include "../headers/athlete.h"
#include "../headers/country.h"
#include "../headers/sport.h"
#include <iostream>

// Constructor implementation
Athlete::Athlete(std::string name, int age ) : name(name), age(age){}

// Member function implementation
void Athlete::show_details() {
    std::cout << "Name: " << name << "\n"
              << "Age: " << age << "\n";
            //   << "Country: " << country.get_name() << "\n"
            //   << "Sport: " << sport << "\n";
};