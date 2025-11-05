#include "Exercise.hpp"

Exercise::Exercise() {
    sets = 0;
}

Exercise::~Exercise() = default;

int Exercise::findNum(std::string name){
    // functionality to find which workout ur doing to correspond to a number
}

void Exercise::dataFill(){
    activity = findNum(get name);
    sets = get sets
    Weight.resize(sets);
    reps.resize(sets);
    for (int i = 0; i < sets; i++) {
        Weight[i] = get weight;
        reps[i] = get reps;
    }
}

void Exercise::write(stringstream){
    stringstream << activity << "-" << sets << "{";
    for (int i = 0; i < sets; i++) {
        stringstream << reps[i] << "(" << weight[i] << ")";
    }
    stringstream << "}";
}