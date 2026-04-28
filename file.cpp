#include "file.h"
#include <fstream>

void saveToFile(vector<Pet> &pets) {
    ofstream file("pets.txt");
    for (auto &p : pets) {
        file << p.name << " "
             << p.type << " "
             << p.breed << " "
             << p.age << " "
             << p.vaccination << " "
             << p.feedingTime << endl;
    }
    file.close();
}

void loadFromFile(vector<Pet> &pets) {
    ifstream file("pets.txt");
    Pet p;
    while (file >> p.name >> p.type >> p.breed >> p.age >> p.vaccination >> p.feedingTime) {
        pets.push_back(p);
    }
    file.close();
}

void deletePet(vector<Pet> &pets) {
    string name;
    cout << "\nEnter pet name to delete: ";
    cin >> name;

    for (auto it = pets.begin(); it != pets.end(); it++) {
        if (it->name == name) {
            pets.erase(it);
            cout << "\nPet deleted successfully!\n";
            return;
        }
    }
    cout << "\nPet not found!\n";
}