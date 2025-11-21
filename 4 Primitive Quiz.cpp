/*******************************************************************************
 * ********************Aleksandar Petkov****************************************
 * ********************Primitive Quiz******************************************/




#include <iostream>
#include <string>
using namespace std;

int main() {
    string answer;

    cout << "What is the capital of France? ";
    getline(cin, answer);   // allows multi-word input

    if(answer == "Paris") {
        cout << "Your answer is correct!" << endl;
    } else {
        cout << "Your answer is wrong." << endl;
    }

    return 0;
}

