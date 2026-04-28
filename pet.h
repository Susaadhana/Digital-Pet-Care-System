#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class Pet {
public:
    string name, type, breed;
    int age;
    string vaccination;
    string feedingTime;

    void addPet();
    void displayPet();
};

#endif