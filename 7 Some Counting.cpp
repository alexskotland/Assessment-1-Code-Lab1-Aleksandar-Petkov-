/***********************Aleksandar Petkov*************************************
 * *********************Some Counting************************************/
    
    
    #include <iostream>
using namespace std;

int main() {
    // 1. Count up 0 to 50
    for(int i = 0; i <= 50; i++) {
        cout << i << endl;
    }

    // 2. Count down 50 to 0
    for(int i = 50; i >= 0; i--) {
        cout << i << endl;
    }

    // 3. Count up 30 to 50
    for(int i = 30; i <= 50; i++) {
        cout << i << endl;
    }

    // 4. Count down 50 to 10 by 2
    for(int i = 50; i >= 10; i -= 2) {
        cout << i << endl;
    }

    // 5. Count up 100 to 200 by 5
    for(int i = 100; i <= 200; i += 5) {
        cout << i << endl;
    }

    return 0;
}
