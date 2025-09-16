#include <iostream>
using namespace std;

//******Variables******//
double balance = 5000;
int deposit, withdraw, choice;
const int correctPassword = 1234;

// Function to display the menu
void show() {
    cout << "------------Menu------------" << endl;
    cout << "1-Balance" << endl;
    cout << "2-Withdraw" << endl;
    cout << "3-Deposit" << endl;
    cout << "4-Exit" << endl;
    cout << "-----------------------" << endl;
}

void process() {
    int enteredPassword;
    bool loggedIn = false;

    do {
        cout << "Enter password: " << endl;
        cin >> enteredPassword;

        if (enteredPassword == correctPassword) {
            loggedIn = true;
            cout << "Successful!" << endl;
        } else {
            cout << "Password is incorrect! Please try again." << endl;
        }
    } while (!loggedIn);

    do {
        show();
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance = " << balance << endl;
                break;
            case 2:
                cout << "Note! Your balance is: " << balance << endl;
                cout << "Enter amount: " << endl;
                cin >> withdraw;
                if (withdraw > balance) {
                    cout << "Not enough" << endl;
                } else {
                    balance -= withdraw;
                    cout << "Your new balance is: " << balance << endl;
                }
                break;
            case 3:
                cout << "Deposit money" << endl;
                cin >> deposit;
                balance += deposit;
                cout << "Your new balance is: " << balance << endl;
                break;
            case 4:
                cout << "Thanks...take your card" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);
}

int main() {
    process();
    return 0;
}