#include "Workout.hpp"
#include <iostream>

Workout::Workout(){ // regular constructor
    current = true;
}
Workout::Workout(bool curr){ // constructor for previous workouts
    current = curr;
}
void Workout::getWorkoutData(){
    int nTemp;
    std::cout << "Enter the number of exercises: ";
    std::cin >> nTemp;
    numExercises = nTemp;
    Exercises.resize(numExercises);
    for (int i = 0; i < numExercises; i++){
        Exercises[i] = Exercise();
        Exercises[i].dataFill();
    }
}

void Workout::write(std::ofstream &stringstream) {
    stringstream << "/" << numExercises << "[";
    for (int i = 0; i < numExercises; i++){
        Exercises[i].write(stringstream);
    }
    stringstream << "]";
}