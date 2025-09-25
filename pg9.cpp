#include <iostream>
#include <string>
using namespace std;

class Player {
protected:
    string playerName;
    int playerAge;
public:
    void setPlayerDetails(const string &name, int age) {
        playerName = name;
        playerAge = age;
    }
    void displayPlayerDetails() {
        cout << "\n-- Player Details --\n";
        cout << "Name: " << playerName << "\n";
        cout << "Age: " << playerAge << "\n";
    }
};

class Sport {
protected:
    string sportName;
    string teamName;
public:
    void setSportDetails(const string &sname, const string &tname) {
        sportName = sname;
        teamName = tname;
    }
    void displaySportDetails() {
        cout << "\n-- Sport Details --\n";
        cout << "Sport: " << sportName << "\n";
        cout << "Team: " << teamName << "\n";
    }
};

class SportsManagement : public Player, public Sport {
private:
    int playerID;
public:
    void setDetails(int id,
                    const string &name, int age,
                    const string &sname, const string &tname)
    {
        playerID = id;
        setPlayerDetails(name, age);
        setSportDetails(sname, tname);
    }
    void displayDetails() {
        cout << "\n===== Sports Management System =====\n";
        cout << "Player ID: " << playerID << "\n";
        displayPlayerDetails();
        displaySportDetails();
        cout << "====================================\n";
    }
};

int main() {
    SportsManagement sm;

    sm.setDetails(101, "Alice", 25, "Cricket", "Team A");

    sm.displayDetails();

    return 0;
}
