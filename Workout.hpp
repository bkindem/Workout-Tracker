#include <iostream>
#include <vector>
#include "Exercise.cpp"

class Workout {
    std::vector<Exercise> Exercises;
    int numExercises;
public:
    bool current; // allows to tell if the workout is active or not
    Workout();
    Workout(bool curr);
    void getWorkoutData();
    void write(std::ofstream &stringstream);
};
