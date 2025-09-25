#include <iostream>
using namespace std;

class Player {
    string name;
    int score;
    static int playerCount;

public:
    Player() {
        name = "Unknown";
        score = 0;
        playerCount++;
        cout << "Default Constructor called\n";
    }
    Player(string n, int s) {
        name = n;
        score = s;
        playerCount++;
        cout << "Parameterized Constructor called\n";
    }
    Player(const Player &p) {
        name = p.name;
        score = p.score;
        playerCount++;
        cout << "Copy Constructor called\n";
    }
    static void displayCount() {
        cout << "Total Players created: " << playerCount << endl;
    }
friend void updateScore(Player &p, int points);
 void display() {
        cout << "Player: " << name << ", Score: " << score << endl;
    }
};
int Player::playerCount = 0;
void updateScore(Player &p, int points) {
    p.score += points;
    cout << "Friend function updated score.\n";
}

int main() {
    Player p1;
    p1.display();
    Player::displayCount();
    Player p2("Rohit Sharma", 120);
    p2.display();
    Player::displayCount();

    Player p3 = p2;
    p3.display();
    Player::displayCount();

    updateScore(p3, 30);
    p3.display();

    return 0;
}
