/***********************Aleksandar Petkov*************************************
 * *********************Brute Force Attack***********************************/

#include <iostream>
using namespace std;

int main() {
    int password;
    const int correctPassword = 12345;
    int attempts = 5;

    while(attempts > 0) {
        cout << "Enter the password: ";
        cin >> password;

        if(password == correctPassword) {
            cout << "Welcome to the Secure Area!" << endl;
            return 0; // exit program successfully
        } else {
            attempts--;
            if(attempts > 0) {
                cout << "Incorrect password. Attempts remaining: " << attempts << endl;
            } else {
                cout << "Too many failed attempts. The authorities have been alerted!" << endl;
            }
        }
    }

    return 0;
}
