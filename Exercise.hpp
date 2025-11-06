#include <vector>
#include <string>
#include <fstream>

class Exercise {
    std::vector<double> Weight;
    std::vector<int> reps;
    int sets;
    int activity;
public:
    Exercise();
    //~Exercise();
    int findNum(std::string name);
    void dataFill();
    void write(std::ofstream &stringstream);
};
