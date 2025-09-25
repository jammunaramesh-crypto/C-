#include <iostream>
using namespace std;

void displayMatch(string team1 = "Team A", string team2 = "Team B", int score1 = 0, int score2 = 0) {
    cout << team1 << " vs " << team2 << endl;
    cout << "Score: " << score1 << " - " << score2 << endl;
    cout << "-------------------------" << endl;
}

int main() {
    displayMatch("Barcelona", "Real Madrid", 2, 3);

    displayMatch("Liverpool", "Man City");

    displayMatch();

    return 0;
}


