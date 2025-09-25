#include <iostream>
#include <string>
using namespace std;

class Player {
    string name;
    int score;

public:
    Player(const string& n, int s)
     : name(n), score(s) {}

    void display() const {
        cout << "Player: " << name << " | Score: " << score << endl;
    }
    Player& operator++() {
        score += 10;
        return *this;
    }
    Player& operator--() {
        score -= 5;
        return *this;
    }

    Player operator-() const {
        Player temp = *this;
        temp.score = -temp.score;
        return temp;
    }
};

int main() {
    Player p1("Virat Kohli", 50);

    cout << "Initial details:" << endl;
    p1.display();

    cout << "\nAfter applying ++ (increase score):" << endl;
    ++p1;
    p1.display();

    cout << "\nAfter applying -- (decrease score):" << endl;
    --p1;
    p1.display();

    cout << "\nAfter applying unary - (negate score):" << endl;
    Player neg = -p1;
    neg.display();

    return 0;
}
