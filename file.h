#ifndef FILE_H
#define FILE_H

#include <vector>
#include "pet.h"
using namespace std;

void saveToFile(vector<Pet> &pets);
void loadFromFile(vector<Pet> &pets);
void deletePet(vector<Pet> &pets);

#endif