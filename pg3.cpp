#include <iostream>
using namespace std;

class Team {
private:
    string name;
    int score;

public:
    Team(string n, int s) : name(n), score(s) {}
     friend void displayScore(const Team &t);
};
void displayScore(const Team &t) {
    cout << "Team: " << t.name << endl;
    cout << "Score: " << t.score << endl;
}
int main() {
    Team team1("Sharks", 4);
    displayScore(team1);

    return 0;
}


