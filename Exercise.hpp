#import <vector>
#import <string>
class Exercise {
    vector<double> Weight;
    vector<int> reps;
    int sets;
    int activity;
public:
    Exercise();
    ~Exercise();
    int findNum(std::string name);
    void dataFill();
    void write(stringstream);
};
