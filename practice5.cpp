
#include <iostream>
using namespace std;

int main() {
    int choice, currentBalance = 95000, wDraw, depoMoney;
    cout << "OPTIONS" << endl
         << "1. Deposit" << endl
         << "2. Withdraw" << endl
         << "3. Check Balance" << endl
         << "4. Exit" << endl;

    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Amount of money to deposit:" << endl;
            cin >> depoMoney;
            currentBalance += depoMoney;
            cout << "Current Balance = " << currentBalance;
            break;
             case 2:
             cout << "Amount of money to withdraw:" << endl;
             cin >> wDraw;
             if (wDraw <= currentBalance )
             { 
                float remainBalance = currentBalance - wDraw;
                cout << "You have withdrawed :" <<wDraw << endl;
                cout << "Remaining balance = " << remainBalance << endl;
            }
             else {
                cout << "Insufficient balance" << endl;
            }
             break;
             case 3:
             cout << "Current Balance = " << currentBalance << endl;
             break;
             case 4:
            cout << "You have exited " << endl;
             break;
             default:
             cout << "Wrong choice" << endl;
             break;
    }
    return 0;
}

