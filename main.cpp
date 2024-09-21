#include <iostream>


using namespace std;

enum Gamemode{
    Easy = 1,
    Medium = 25,
    Hard = 30
};

int main(void){
    Gamemode difficulty = Medium;
    switch(difficulty){
        case Easy:
            cout << "Basic learning." << endl;
            break;
        case Medium:
            cout << "Good luck! The enemies will be 25 times more more challenging than easy!" << endl;
            break;
        case Hard:
            cout << "Maximum difficulty! GL!!!" << endl;
            break;
    }
    
    return 0;
}
