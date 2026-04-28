#include "pet.h"

void Pet::addPet() {
    cout << "\nEnter Pet Name: ";
    cin >> name;
    cout << "Enter Type: ";
    cin >> type;
    cout << "Enter Breed: ";
    cin >> breed;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Vaccination Date: ";
    cin >> vaccination;
    cout << "Enter Feeding Time: ";
    cin >> feedingTime;
}

void Pet::displayPet() {
    cout << "\n----------------------";
    cout << "\nName: " << name;
    cout << "\nType: " << type;
    cout << "\nBreed: " << breed;
    cout << "\nAge: " << age;
    cout << "\nVaccination: " << vaccination;
    cout << "\nFeeding Time: " << feedingTime;
    cout << "\n----------------------\n";
}