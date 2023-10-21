#include "Account.h"

#include <bits/stdc++.h>
using namespace std;

class Application
{
private:

public:

};

//
/// \brief Functionname   : Application
/// \brief Author         : Tanzila nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Description    : main functions

int main()
{
    int choice;
    while (choice != 4)
    {
        cout << "Select:\n"
             << "0: Add Account\n"
             << "1: Make Deposit\n"
             << "2: Make Withdrawal\n"
             << "3: Check Account\n"
             << "4: Exit\n> ";
        cin >> choice;
        switch (choice)
        {
            case 0:
            {
                Bank bobj;
                bobj.add_account();

                // Account a;
                // Customer c;
                // string name, address;
                // int age;
                // long phone;
                // cout << "Enter Customer Name> ";
                // cin >> name;
                // c.set_name(name);
                // cout << "Enter Customer Address>";
                // cin >> address;
                // c.set_address(address);
                // cout << "Enter Customer Age>";
                // cin >> age;
                // c.set_age(age);
                // cout << "Enter Customer Phone Number>";
                // cin >> phone;
                // c.set_telephone_number(phone);
                // a.set_customer(c);

                // cout << "Select:\n0: Senior\n1: Adult\n2: Student\n";
                // cin >> accountType;
                // if (accountType == 0)
                // {
                //     Senior senior;
                //     custType = "Senior";
                // }
                // else if (accountType == 1)
                // {
                //     Adult adult;
                //     custType = "Adult";
                // }
                // else if (accountType == 2)
                // {
                //     Student student;
                //     custType = "Student";
                // }

                // cout << "Select:\n0: Checking\n1: Savings\n";
                // cin >> SorC;
                // if (SorC == 0)
                // {
                //     cout << "Account " << SorC << " added\n";
                // }
                // else if (SorC == 1)
                // {

                //     cout << "Account " << SorC << " added\n";
                // }

                break;
            }

            case 1:
            {
                Bank bobj;
                bobj.make_deposit();
                // Account a;
                // int y, m, d;
                // long account_number;
                // double amount;
                // cout << "Enter Account Number> ";
                // cin >> account_number;
                // cout << "Enter The Amount> ";
                // cin >> amount;
                // cout << "Enter the date yyyy-mm-dd> ";
                // cin >> y >> m >> d;

                // if (SorC == 0)
                // {
                //     Checking_Account ca;
                //     ca.set_balance(ca.deposit(amount));
                // }
                // else if (SorC = 1)
                // {
                //     Savings_Account sa;
                //     sa.set_balance(sa.deposit(amount));
                // }

                // cout << "Deposit in " << SorC << " amount: $" << amount << " on " << y << "-" << m << "-" << d << " new balance: $" << a.get_balance() << endl;
                break;
            }

            case 2:
            {
                Bank bobj;
                bobj.make_withdrawal();
                // Account a;
                // string date;
                // long account_number;
                // double amount;
                // cout << "Enter Account Number> ";
                // cin >> account_number;
                // cout << "Enter The Amount> ";
                // cin >> amount;
                // cout << "Enter the date yyyy-mm-dd> ";
                // cin >> date;

                // if (SorC == 0)
                // {
                //     Checking_Account ca;
                //     double remain_amt = ca.withdraw(amount);
                //     if (remain_amt >= 0)
                //     {
                //         ca.set_balance(remain_amt);
                //         cout << "Withdraw from " << SorC << " amount: $" << amount << " on " << date << " new balance: $" << a.get_balance() << endl;
                //     }
                //     else
                //     {
                //         cout << "Insufficient Balance" << endl;
                //     }
                // }
                // else if (SorC = 1)
                // {
                //     Savings_Account sa;
                //     double remain_amt = sa.withdraw(amount);
                //     if (remain_amt >= 0)
                //     {
                //         sa.set_balance(remain_amt);
                //         cout << "Withdraw from " << SorC << " amount: $" << amount << " on " << date << " new balance: $" << a.get_balance() << endl;
                //     }
                //     else
                //     {
                //         cout << "Insufficient Balance" << endl;
                //     }
                // }

                break;
            }

            case 3:
                 {

                //     Account a;
                //     Customer c;
                //     long account_number;
                //     cout << "Enter Account Number> ";
                //     cin >> account_number;
                //     cout << "Account: ";
                //     cout << account_number << endl;
                //     cout << "Owner: ";
                //     cout << c.get_name() << endl;
                //     cout << "Type of customer: ";
                //     if (accountType == 0)
                //         cout << "Senior" << endl;
                //     else if (accountType == 1)
                //         cout << "Adult" << endl;
                //     else if (accountType == 2)
                //         cout << "Student" << endl;

                //     cout << "Balance: ";
                //     cout << a.get_balance() << endl;

                break;
             }


            default:
                exit(0);
        }
    }
    return 0;
}
