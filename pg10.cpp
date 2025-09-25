#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails(const string &nm, int ag) {
        name = nm;
        age = ag;
    }
    void displayPersonDetails() {
        cout << "\n--- Person Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Player : public Person {
protected:
    int playerID;
public:
    void setPlayerDetails(int id) {
        playerID = id;
    }
    void displayPlayerDetails() {
        cout << "\n--- Player Details ---" << endl;
        cout << "Player ID: " << playerID << endl;
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
        cout << "\n--- Sport Details ---" << endl;
        cout << "Sport: " << sportName << endl;
        cout << "Team: " << teamName << endl;
    }
};

class SportsManagement : public Player, public Sport {
public:
    void setDetails(int id,
                    const string &nm, int ag,
                    const string &sname, const string &tname) 
    {
        setPlayerDetails(id);
        setPersonDetails(nm, ag);
        setSportDetails(sname, tname);
    }

    void displayDetails() {
        cout << "\n===== Sports Management System =====" << endl;
        displayPersonDetails();
        displayPlayerDetails();
        displaySportDetails();
        cout << "====================================" << endl;
    }
};

int main() {
    SportsManagement sm;
    sm.setDetails(
        1001,          
        "Bob Martin", 
        30,            
        "Football",   
        "Team X"     
    );

    sm.displayDetails();

    return 0;
}
