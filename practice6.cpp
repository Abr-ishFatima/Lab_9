#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "R for red " <<endl
         << "G for green " <<endl
         << "Y for yellow " <<endl
         << "Enter the color in capital letter :" <<endl;
     cin >> ch;
     switch (ch) {
        case 'R':
        cout << "Stop" << endl;
        break;
        case 'G':
        cout << "Go" << endl;
        break;
        case 'Y':
        cout << "Slow down" << endl;
        break;
        default :
        cout << "Wrong color" << endl;
        break;
     }
     return 0;
}