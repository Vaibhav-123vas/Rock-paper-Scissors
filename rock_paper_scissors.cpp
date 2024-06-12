#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printRock() {
    cout << "    _______" << endl;
    cout << "---'   ____)" << endl;
    cout << "      (_____)" << endl;
    cout << "      (_____)" << endl;
    cout << "      (____)" << endl;
    cout << "---.__(___)" << endl;
}

void printPaper() {
    cout << "    _______" << endl;
    cout << "---'   ____)____" << endl;
    cout << "          ______)" << endl;
    cout << "          _______)" << endl;
    cout << "         _______)" << endl;
    cout << "---.__________)" << endl;
}

void printScissors() {
    cout << "    _______" << endl;
    cout << "---'   ____)____" << endl;
    cout << "          ______)" << endl;
    cout << "       __________)" << endl;
    cout << "      (____)" << endl;
    cout << "---.__(___)" << endl;
}

int main() {
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    cout << "Stone Paper Scissor Game" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissor" << endl;
    cin >> user;

    cout << "You chose: " << endl;
    if(user == 1) {
        printRock();
    }
    else if(user == 2) {
        printPaper();
    }
    else {
        printScissors();
    }

    computer = rand() % 3 + 1;
    cout << "Computer chose: " << endl;
    if(computer == 1) {
        printRock();
    }
    else if(computer == 2) {
        printPaper();
    }
    else {
        printScissors();
    }

    // match
    if(user == computer) {
        cout << "Match Tie" << endl;
    }
    // user --> Rock
    else if(user == 1) {
        if(computer == 2) {
            cout << "You lose!" << endl;
        }
        if(computer == 3) {
            cout << "You win!" << endl;
        }
    }
    // user --> Paper
    else if(user == 2) {
        if(computer == 1) {
            cout << "You win!" << endl;
        }
        if(computer == 3) {
            cout << "You lose!" << endl;
        }
    }
    // user --> Scissor
    else if(user == 3) {
        if(computer == 1) {
            cout << "You lose!" << endl;
        }
        if(computer == 2) {
            cout << "You win!" << endl;
        }
    }
    return 0;
}
