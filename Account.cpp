//
// Created by tazin on 2023-10-19.
//
#include "Account.h"

#include <bits/stdc++.h>
using namespace std;

//all rates below are for students
const double Student::SAVINGS_INTEREST = 0.04; 		// annual rate
const double Student::CHECKING_INTEREST = 0.01;		// this is interest rate for the checking account.
const double Student::CHECK_CHARGE = 0.02; 			//cents for withdrawal
const double Student::OVERDRAFT_PENALTY = 25.0; 	//dollar

// all rates below are for senior
const double Senior::SAVINGS_INTEREST = 0.04;		// annual rate
const double Senior::CHECKING_INTEREST = 0.01;      // this is interest rate for the checking account.
const double Senior::CHECK_CHARGE = 0.01;           //cents for withdrawal
const double Senior::OVERDRAFT_PENALTY = 25.0;      //dollar

// all rates below are for adult
const double Adult::SAVINGS_INTEREST = 0.03;		// annual rate
const double Adult::CHECKING_INTEREST = 0.01;       // this is interest rate for the checking account.
const double Adult::CHECK_CHARGE = 0.03;            //cents for withdrawal
const double Adult::OVERDRAFT_PENALTY = 25.0;       //dollar

// set functions
string c_name;            // store the name of customer
string c_address;         // store the address of customer
int c_age;                // store the age of customer
long c_phone;            // store the phone of customer
long c_number;           // store the customer numeber  of customer

void Customer::set_name(string name)           // fill the name of customer in add account
{
    c_name = name;
}

void Customer::set_address(string address)   // set the address
{
    c_address = address;
}

void Customer::set_age(int age)   // set the age of customer
{
    c_age = age;
}

void Customer::set_telephone_number(long phone_number)   // set tellephonr number
{
    c_phone = phone_number;
}

void Customer::set_customer_number(long customer_number)  // set the customer number
{
    c_number = customer_number;
}

// get functions
string Customer::get_name()  //get the customerr number
{
    return c_name;
}
string Customer::get_address() // get the addres of customer
{
    return c_address;
}
int Customer::get_age()   // get the age of customer
{
    return c_age;
}
long Customer::get_telephone_number()  // get the telephone number of customer
{
    return c_phone;
}
long Customer::get_customer_number() // get the customer number
{
    return c_number;
}

// set and get for creating account
double c_balance;
void Account::set_balance(double bal)            //set the balance in account
{
    c_balance = bal;
}

double Account::get_balance()       // will get balance in account
{
    return c_balance;
}

void Account::set_customer(Customer c)    //set customer for account opening
{
    string cust_name = c.get_name();
    string cust_address = c.get_address();
    int cust_age = c.get_age();
    long cust_phone = c.get_telephone_number();
}

Customer Account::get_customer()   //get the customer details
{
    return this->customer;
}

// create the account of customer
void Account::create_Account(Customer c, double balance, long account_number)
{
    string customer_name = c.get_name();
    string customer_address = c.get_address();
    int customer_age = c.get_age();
    long customer_phone = c.get_telephone_number();
    double customer_balance = get_balance();
}

// will perform deposit activity
double Savings_Account::deposit(double amount)
{
    Savings_Account sA;
    double curr_bal = amount + sA.get_balance();
    sA.set_balance(curr_bal);
    return curr_bal;
}

// check the deposit total amount in checking account
double Checking_Account::deposit(double amount)
{
    Checking_Account cA;
    double curr_bal = amount + cA.get_balance();
    cA.set_balance(curr_bal);
    return curr_bal;
}

//withdraw amount from saving account
double Savings_Account::withdraw(double amount)
{
    Savings_Account sA;
    double curr_bal = sA.get_balance() - amount;
    return curr_bal;
}

//withdraw amount from Checking account
double Checking_Account::withdraw(double amount)
{
    Checking_Account cA;
    double curr_bal = cA.get_balance() - amount;
    return curr_bal;
}

string cat;
void Account::set_acCat(string Cat)
{
    cat = Cat;
}

string Account::get_acCat()
{
    return cat;
}

string typ;
void Account::set_acType(string Typ)
{
    typ = Typ;
}

string Account::get_acType()
{
    return typ;
}

//get the add account details from users
void Bank::add_account()
{
    int accountCat, SorC;
    Account a;  //create account class object
    Customer c; //create customer class object
    string name, address; // define variables
    int age;
    long phone;
    cout << "Enter Customer Name> ";
    cin >> name;
    c.set_name(name);
    cout << "Enter Customer Address>";
    cin >> address;
    c.set_address(address);
    cout << "Enter Customer Age>";
    cin >> age;
    c.set_age(age);
    cout << "Enter Customer Phone Number>";
    cin >> phone;
    c.set_telephone_number(phone);
    a.set_customer(c);

    cout << "Select:\n0: Senior\n1: Adult\n2: Student\n";
    cin >> accountCat;
    if (accountCat == 0)
    {
        Senior senior;
        a.set_acCat("Senior");
    }
    else if (accountCat == 1)
    {
        Adult adult;
        a.set_acCat("Adult");
    }
    else if (accountCat == 2)
    {
        Student student;
        a.set_acCat("Student");
    }

    cout << "Select:\n0: Checking\n1: Savings\n";
    cin >> SorC;
    if (SorC == 0)
    {
        a.set_acType("Checking");
        cout << a.get_acType() << " Account added\n";
    }
    else if (SorC == 1)
    {
        a.set_acType("Savings");
        cout << a.get_acType() << " Account added\n";
    }
}

//get deposite related details
void Bank::make_deposit()
{
    Account a;
    string date;
    long account_number;
    double amount;
    cout << "Enter Account Number> ";
    cin >> account_number;
    cout << "Enter The Amount> ";
    cin >> amount;
    cout << "Enter the date yyyy-mm-dd> ";
    cin >> date;

    if (a.get_acType() == "Checking")
    {
        Checking_Account ca;
        ca.set_balance(ca.deposit(amount));
    }
    else if (a.get_acType() == "Savings")
    {
        Savings_Account sa;
        sa.set_balance(sa.deposit(amount));
    }

    cout << "Deposit in " << a.get_acType() << " Account. Amount: $" << amount << " on " << date << " new balance: $" << a.get_balance() << endl;
}

//get the withdrawal detrails
void Bank::make_withdrawal()
{
    Account a;
    string date;
    long account_number;  //
    double amount;
    cout << "Enter Account Number> ";
    cin >> account_number;
    cout << "Enter The Amount> ";
    cin >> amount;
    cout << "Enter the date yyyy-mm-dd> ";
    cin >> date;

    if (a.get_acType() == "Checking") //chech the whether account type is checking or not
    {
        Checking_Account ca;
        double remain_amt = ca.withdraw(amount); //get the remaining amount
        if (remain_amt >= 0)
        {
            ca.set_balance(remain_amt);  // set the remaining amount in set balance
            cout << "Withdraw from " << a.get_acType() << " amount: $" << amount << " on " << date << " new balance: $" << a.get_balance() << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
    else if (a.get_acType() == "Savings")  //chech the account type is saving or not
    {
        Savings_Account sa;
        double remain_amt = sa.withdraw(amount);  // will return finall amout  from account
        if (remain_amt >= 0)
        {
            sa.set_balance(remain_amt); // set balance for account
            cout << "Withdraw from " << a.get_acType() << " amount: $" << amount << " on " << date << " new balance: $" << a.get_balance() << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
}