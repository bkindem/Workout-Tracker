#include <vector>
#include <string>
#include <fstream>

class Exercise {
    static std::unordered_map<std::string, int> ActivityValues =
    {
        {"Bench", 1},
        {"Bench Press", 1},
        {"1", 1},
        {"Military Press", 2},
        {"2", 2},
        {"Lateral Raise", 3},
        {"Lat Raise", 3},
        {"3", 3},
        {"Tricep Pushdown", 4},
        {"Pushdown", 4},
        {"4", 4},
        {"Pec Fly", 5},
        {"Peck Deck", 5},
        {"5", 5},
        {"", 0}
    };
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
