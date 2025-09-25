#include <iostream>
using namespace std;

class Player {
    string name;
    int score;

public:
    Player() {
        name = "Unknown";
        score = 0;
        cout << "Default Constructor called\n";
    }
    Player(string n, int s) {
        name = n;
        score = s;
        cout << "Parameterized Constructor called\n";
    }
    Player(const Player &p) {
        name = p.name;
        score = p.score;
        cout << "Copy Constructor called\n";
    }
    friend void updateScore(Player &p, int points);
    void display() {
        cout << "Player: " << name << ", Score: " << score << endl;
    }
};
void updateScore(Player &p, int points) {
    p.score += points;
    cout << "Friend function updated score.\n";
}

int main() {
    Player p1;
    p1.display();
    Player p2("Rohit Sharma", 120);
    p2.display();
    Player p3 = p2;
    p3.display();
    updateScore(p3, 30);
    p3.display();
    return 0;
}
