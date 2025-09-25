#include <iostream>
using namespace std;

class Player {
public:
    string name;
    string position;

    Player(string n, string p) : name(n), position(p) {}
};

class Team {
public:
    string name;
    vector<Player> players;

    Team(string n) : name(n) {}

    void addPlayer(string n, string p) {
        players.emplace_back(n, p);
    }

    void display() {
        cout << "Team: " << name << endl;
        for (auto& p : players)
            cout << p.name << " - " << p.position << endl;
    }
};

int main() {
    Team t("Eagles");
    t.addPlayer("John Doe", "Forward");
    t.addPlayer("Mike Smith", "Goalkeeper");
    t.display();
    return 0;
}
