#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the alphabet:" << endl;
    cin >> ch;

    switch (ch) {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Good" << endl;
            break;
        case 'C':
            cout << "Satisfactory" << endl;
            break;
        case 'D':
            cout << "Need Improvement" << endl;
            break;
        case 'F':
            cout << "Fail" << endl;
            break;
        default:
            cout << "Wrong choice" << endl;
            cout << "Please enter capital letters" << endl;
            break;
    }

    return 0;
}
