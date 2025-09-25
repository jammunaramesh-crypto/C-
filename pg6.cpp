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

    void display() {
        cout << "Player: " << name << ", Score: " << score << endl;
    }

    void updateScore(int points) {
        score += points;
        cout << "Score updated by " << points << " points.\n";
    }

    void updateScore(int runs, int boundaries) {
        score += runs + (boundaries * 4);
        cout << "Score updated with " << runs << " runs and " 
             << boundaries << " boundaries.\n";
    }

    void updateScore(double bonus) {
        score += (int)bonus;  
        cout << "Score updated by bonus: " << bonus << endl;
    }
};

int Player::playerCount = 0;

int main() {
    Player p1("Rohit Sharma", 120);
    p1.display();
    Player::displayCount();

    p1.updateScore(30);
    p1.display();

    p1.updateScore(20, 2);  
    p1.display();

    p1.updateScore(15.5);    
    p1.display();

    return 0;
}
