#include <iostream>

using namespace std;

bool checkIfPrimeNearby(int currentNumber) {
    /*Declare near variables of current number*/
    int prevNumber = currentNumber - 1;
    int nextNumber = currentNumber + 1;

    /*Safety measure, so that prime number couldn't be 1*/
    if (prevNumber == 1) {
        return false;
    }

    /*Check if current number's near variables are prime numbers*/
    for (int a = 2; prevNumber > a; a++) {
        if (prevNumber % a == 0) {
            return false;
        }
    }
    for (int a = 2; nextNumber > a; a++) {
        if (nextNumber % a == 0) {
            return false;
        }
    }
    return true;
}

void printNumbers() {
    /*Iterate through all natural numbers, that possibly could be prime*/
    for (int n = 2; n < 100; n++) {
        /*If prime number is nearby current number then print out current number*/
        if (checkIfPrimeNearby(n)) {
            cout << n << ":" << endl;
            cout << "  " << "Prime numbers:" << endl;
            cout << "\t" << "Previous: " << n - 1 << endl;
            cout << "\t" << "Next: " << n + 1 << endl;
        }
    }
}

void outputFormattingUp(){
    cout << "---------------Task---------------" << endl;
    cout
            << "Doti naturals skaitlis n un naturali skaitli a1, a2, ... an (n<100). Izdrukat tos skaitlus, kuriem  blakus esosie skaitli ir savstarpeji pirmskaitli."
            << endl;
    cout << "----------------------------------" << endl;
    cout << "-------------Solution-------------" << endl;
}

void outputFormattingBottom() {
    cout << endl << "----------------------------------" << endl;
}

/*Program's entry point*/
int main() {
    outputFormattingUp();
    /*Execute printNumbers()*/
    printNumbers();
    outputFormattingBottom();
}