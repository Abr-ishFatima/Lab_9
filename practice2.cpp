#include <iostream>
using namespace std;
int main() {
    int x, y;
    char op;   //op is operator
    cout << "Enter the first number :" << endl;
    cin >> x;
    cout << "Enter the second number :" << endl;
    cin >> y;
    cout << "Enter the operator :" << endl;
    cin >> op;
    switch(op) {
        case '+' :
        cout << x << " + " << y << " = " << x + y <<endl;
        break;
         case '-' :
       cout << x << " - " << y << " = " << x - y <<endl;
        break;
         case '*' :
       cout << x << " * " << y << " = " << x * y <<endl;
        break;
         case '/' :
         if (y == 0)
       cout << "You entered zero" <<endl;
       else if (y > x)
        cout << y << " / " << x << " = " << y / x <<endl;
        else 
         cout << x << " / " << y << " = " << x / y <<endl;
        break;
        default :
        cout << "Wrong operator" <<endl;
        break;
    }
    return 0;
}