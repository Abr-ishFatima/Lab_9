#include <iostream>
using namespace std;
int main() {
    char x ='A';
    switch(x) {
        case 'A' :
        cout << "Choice is A" <<endl;
        break;
         case 'B' :
        cout << "Choice is B" <<endl;
        break;
         case 'C' :
        cout << "Choice is C" <<endl;
        break;
        default :
        cout << "Choice is other than A, B and C" <<endl;
        break;
    }
    return 0;
}