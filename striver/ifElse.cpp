#include <iostream>
using namespace std;

int main() {

    int hungerLevel;

    cout << "Enter cat hunger level (1-10): ";
    cin >> hungerLevel;

    if (hungerLevel > 7) {
        cout << "The cat is ANGRY 😾 Feed it immediately!";
    }
    else if (hungerLevel > 3) {
        cout << "The cat is slightly annoyed 😼";
    }
    else {
        cout << "The cat is happy and sleepy 😺";
    }

    return 0;
}