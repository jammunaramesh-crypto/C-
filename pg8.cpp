#include <iostream>
using namespace std;

class Player {
    string name;
    int score;

public:
    Player(string n = "Unknown", int s = 0) {
        name = n;
        score = s;
    }
    void display() {
        cout << "Player: " << name << " | Score: " << score << endl;
    }
    string getName() {
        return name;
    }
    Player operator+(Player &p) {
        Player temp;
        temp.name = this->name + " & " + p.name;  
        temp.score = this->score + p.score;     
        return temp;
    }
    bool operator>(Player &p) {
        return this->score > p.score;
    }
};

int main() {
    Player p1("Virat Kohli", 75);
    Player p2("Rohit Sharma", 65);

    cout << "Initial Player Details:" << endl;
    p1.display();
    p2.display();
    cout << "\nAfter using + operator (combine scores):" << endl;
    Player team = p1 + p2;
    team.display(){
    cout << "\nAfter using > operator (compare scores):" << endl;
    if (p1 > p2) {
        cout << p1.getName() << " has a higher score." << endl;
    } else {
        cout << p2.getName() << " has a higher score." << endl;
    }

    return 0;
}