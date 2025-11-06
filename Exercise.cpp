#include "Exercise.hpp"
#include <iostream>
#include <vector>
#include <fstream>

Exercise::Exercise() {
    sets = 0;
}

//Exercise::~Exercise() = default;

int Exercise::findNum(std::string name){
    return 1;
}

void Exercise::dataFill(){
    std::string nameTemp;
    std::cin.ignore();
    std::cout << "enter the name of the exercise: ";
    std::getline(std::cin, nameTemp);
    activity = findNum(nameTemp);
    int setTemp;
    std::cout << "How many sets: ";
    std::cin >> setTemp;
    sets = setTemp;
    Weight.resize(sets);
    reps.resize(sets);
    for (int i = 0; i < sets; i++) {
        double tempWeight;
        int tempReps;
        std::cout << "Enter the number of reps: "; std::cin >> tempReps;
        std::cout << "Enter the weight: "; std::cin >> tempWeight;
        Weight[i] = tempWeight;
        reps[i] = tempReps;
    }
    // breakpoint
}

void Exercise::write(std::ofstream &stringstream){
    stringstream << activity << "-" << sets << "{";
    for (int i = 0; i < sets; i++) {
        stringstream << reps[i] << "(" << Weight[i] << ")";
    }
    stringstream << "}";
}