#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

/*
ATM Mini Project
    -> check balance
    -> withddraw cash
    -> user details
    -> update mobile number
    -> exit
*/

class atm{
    private:
        long int account_num;
        string name;
        int PIN;
        double balance;
        string mobile_num;

    public:
        void setData(long int account_num_a, string name_a, int PIN_a, double balance_a, string mobile_num_a){
            account_num = account_num_a;
            name = name_a;
            PIN = PIN_a;
            balance = balance_a;
            mobile_num = mobile_num_a;
        }

        long int getAccountNum(){
            return account_num;
        }

        string getName(){
            return name;
        }

        int getPIN(){
            return PIN;
        }

        double getBalance(){
            return balance;
        }

        string getMobileNum(){
            return mobile_num;
        }

        void setMobileNum(string oldMobile_Num, string newMobileNum){
            if(oldMobile_Num == mobile_num){
                mobile_num = newMobileNum;
                cout << "Mobile number is successfully updated.\n";
                _getch();
            }else{
                cout << "Old Mobile number is not correct, Please try again!!\n";
                _getch();
            }
        }

        void cashWithdrawl(int amount){
            if(amount > 0 && amount < balance){
                balance -= amount;
                cout << "Please collect your cash!!\n";
                cout << "Available Balance : " << balance << endl;
                _getch(); 
            }else{
                cout << "Insufficient Balance!!!" << endl;
                _getch();
            }
        }
};

int main(){
    int choice = 0, enterPIN;
    long int enterAccountNum;

    system("cls");

    atm user1;
    user1.setData(123456789, "Pankaj", 1234, 450000.00, "9876504321");

    do{
        system("cls");
        cout << "\n**********Welcome to ATM**********\n";
        cout << "\nEnter Account Number : ";
        cin >> enterAccountNum;
        cout << "Enter PIN : ";
        cin >> enterPIN;

        if((enterAccountNum == user1.getAccountNum()) && (enterPIN == user1.getPIN())){
            do{
                int amount = 0;
                string oldMobileNum, newMobileNum;
                system("cls");
                cout << "\n********** Welcome to ATM **********\n";
                cout << "Select Option\n";
                cout << "1. Check Balance\n";
                cout << "2. Cash Withdrawal\n";
                cout << "3. Show User Details\n";
                cout << "4. Update Mobile Number\n";
                cout << "5. Exit\n\n";

                cout << "Choose any option to proceed : ";
                cin >> choice;

                switch(choice){
                    case 1:
                        cout << endl << "Your bank balance is " << user1.getBalance();
                        _getch();
                        break;

                    case 2:
                        cout << endl << "Enter the amount : ";
                        cin >> amount;
                        user1.cashWithdrawl(amount);
                        break;
                    
                    case 3:
                        cout << endl << "***** User Details *****";
                        cout << "\n\nAccount Number -> " << user1.getAccountNum();
                        cout << "\nName -> " << user1.getName();
                        cout << "\nBalance -> " << user1.getBalance();
                        cout << "\nMobile Number -> " << user1.getMobileNum();
                        _getch();
                        break;

                    case 4:
                        cout << "Enter Old Mobile Number : ";
                        cin >> oldMobileNum;

                        cout << "Enter New Mobile Number : ";
                        cin >> newMobileNum;

                        user1.setMobileNum(oldMobileNum, newMobileNum);
                        break;

                    case 5:
                        exit(0);

                    default :
                        cout << "Enter valid choice.\n";
                }
            }while(1);
        }else{
            cout << "User Inputs are invalid, try again!!\n";
        }
    }while(1);

    return 0;
}