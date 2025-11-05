#include "workout.hpp"

Workout::Workout(){
    current = true;
}
Workout::Workout(bool curr){
    current = curr;
}
void Workout::getWorkoutData(){
    numExercises = get num exercises
    Exercises.resize(numExercises);
    for (int i = 0; i < numExercises; i++){
        Exercises[i] = Exercise();
        Exercises[i].dataFill();
    }
}

void Workout::write(stringstream) {
    stringstream << "/" << numExercises<< "[";
    for (int i = 0; i < numExercises; i++){
        Exercises[i].write(stringstream);
    }
    stringstream << "]";
}