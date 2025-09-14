#include <iostream>
using namespace std;

//******Variables******//
double balance = 5000;
int deposit , withdraw , choice;
int password = 1234; //the correct password

//function to display the menu
void show(){
    cout<<"------------Menu------------"<<endl;
    cout<<"1-Balance"<<endl;
    cout<<"2-Withdraw"<<endl;
    cout<<"3-Deposit"<<endl;
    cout<<"4-Exit"<<endl;
    cout<<"-----------------------"<<endl;
}

void process(){
    cout<<"Enter password : "<<endl;
    cin>>password;
do {
    if (password == 1234){
        cout<<"Enter your choice :  "<<endl;
        cin>>choice;
        switch (choice){
            case 1 : 
                    cout<<"Balance = "<<balance<<endl;
                    break;
            case 2 :
                    cout<<" Note! Your balance is : "<<balance<<endl;
                    cout<<"Enter amount : "<<endl;
                    cin>>withdraw;
                    if (withdraw > balance){
                        cout<<"Not enough"<<endl;
                    }else{
                        balance-=withdraw;
                        cout<<"Your new balance is : "<<balance<<endl;
                    }
                    break;
            case 3 : 
                    cout<<"Deposit money"<<endl;
                    cin>>deposit;
                    balance+=deposit;
                    cout<<"Your new balance is : "<<balance<<endl;
                    break;
            case 4 :
            cout << "Thanks...take your card"<<endl;
        }//end of switch
}//end of if
else{
    char option = 'o';
    cout<<"Password is incorrect! try again by enter [Y] or cancel by [N].."<<endl;
    cin>>option;
    if (option == 'y'||option == 'Y'){
        cout<<"Enter password : "<<endl;
        cin>>password;
    }else{
        choice = 4;
    }
}

}while(choice < 4);

    }//end of process
int main() {
    show();
    process();
    return 0;
}