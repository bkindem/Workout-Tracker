#include "Workout.cpp"
#include <fstream>

void write(Workout& workout){
    std::ofstream writer;
    writer.open("workoutData", std::ios::app);
    writer << "!11-05-2025";//will eventually make more acurate
    workout.write(writer);
}

void work(Workout& test){
    test.getWorkoutData();
}

int main() {
    Workout test;
    work(test);
    write(test);
};
