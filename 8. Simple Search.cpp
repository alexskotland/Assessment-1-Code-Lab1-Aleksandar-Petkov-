/***********************Aleksandar Petkov*************************************
 * ********************Simple Search************************************/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchTerm;
    bool found = false;

    cout << "Enter a name to search: ";
    cin >> searchTerm;

    for(int i = 0; i < 6; i++) {
        if(names[i] == searchTerm) {
            cout << "Found " << searchTerm << " in the array!" << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << searchTerm << " not found." << endl;
    }

    return 0;
}
