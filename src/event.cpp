#include "../headers/event.h"
#include <iostream>

Event::Event(std::string name, std::string venue, std::string date) 
    : name(name), venue(venue), date(date) {
    std::cout << "Event added: " << name << std::endl;
}

Event::~Event() {
    std::cout << "Event deleted: " << name << std::endl;
}

void Event::display_info() {
    std::cout << name << " | Venue: " << venue << " | Date: " << date << std::endl;
}