#include <iostream>
#include <vector>
#include "pet.h"
#include "file.h"

using namespace std;

void viewPets(vector<Pet> &pets) {
    if (pets.empty()) {
        cout << "\nNo pets found!\n";
        return;
    }
    for (auto &p : pets)
        p.displayPet();
}

void searchPet(vector<Pet> &pets) {
    string name;
    cout << "\nEnter pet name: ";
    cin >> name;

    for (auto &p : pets) {
        if (p.name == name) {
            p.displayPet();
            return;
        }
    }
    cout << "\nPet not found!\n";
}

int main() {
    vector<Pet> pets;
    int choice;

    loadFromFile(pets);

    do {
        cout << "\n===== Digital Pet Care System =====\n";
        cout << "1. Add Pet\n";
        cout << "2. View Pets\n";
        cout << "3. Search Pet\n";
        cout << "4. Delete Pet\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Pet p;
                p.addPet();
                pets.push_back(p);
                saveToFile(pets);
                break;
            }

            case 2:
                viewPets(pets);
                break;

            case 3:
                searchPet(pets);
                break;

            case 4:
                deletePet(pets);
                saveToFile(pets);
                break;

            case 5:
                cout << "\nExiting...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}