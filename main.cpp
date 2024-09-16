#include <Iostream>


using namespace std;

enum Gamemode{
    Easy,
    Medium,
    Hard
};
int main(void){
    Gamemode Difficulty = Medium;
    cout << "Gamemode: " << Difficulty;
    return 0;
}
