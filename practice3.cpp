#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter the alphabet :" << endl;
    cin >> ch;
    switch (ch) {
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        cout << ch << " is a vowel" << endl;
        break;
        default :
        cout << ch << " is a consonant" << endl;
        break;
    }
return 0;
}