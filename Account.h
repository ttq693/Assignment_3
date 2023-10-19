
#ifndef ASSIGNMENT_ACCOUNT_H
#define ASSIGNMENT_ACCOUNT_H
#include <bits/stdc++.h>
using namespace std;

/// \brief Classname      : Customer
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Subclasses     : Senior, Adult, Student
/// \brief Superclasses   : none
/// \brief Description    : It will perform all required customer details update activities for example name,age,address,telephone_number,customer_number.  .


class Customer
{
private:
    string name, address;
    int age, telephone_number, customer_number;

public:
    string get_name();
    string get_address();
    int get_age();
    long get_telephone_number();
    long get_customer_number();
    void set_name(string name);
    void set_address(string address);
    void set_age(int age);
    void set_telephone_number(long phone_number);
    void set_customer_number(long customer_number);
};

/// \brief Classname      : Senior
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Superclasses   : Customer
/// \brief Subclasses     : none
/// \brief Description    : It will perform all required customer service like SAVINGS_INTEREST, CHECK_INTEREST, CHECK_CHARGE, and
///                      OVERDRAFT_PENALTY.


class Senior : public Customer
{

public:
    const static double SAVINGS_INTEREST, CHECKING_INTEREST, CHECK_CHARGE, OVERDRAFT_PENALTY;
};

/// \brief Classname      : Adult
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Superclasses   : Customer
/// \brief Subclasses     : none
/// \brief Description    : It will perform all required customer service such as SAVINGS_INTEREST, CHECK_INTEREST, CHECK_CHARGE, and
///                          OVERDRAFT_PENALTY.


class Adult : public Customer
{

public:
    const static double SAVINGS_INTEREST, CHECKING_INTEREST, CHECK_CHARGE, OVERDRAFT_PENALTY;
};

/// \brief Classname      : Student
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Superclasses   : Customer
/// \brief Subclasses     : none
/// \brief Description    : It will perform all required customer service such as SAVINGS_INTEREST, CHECK_INTEREST, CHECK_CHARGE, and
//                          OVERDRAFT_PENALTY.


class Student : public Customer
{

public:
    const static double SAVINGS_INTEREST, CHECKING_INTEREST, CHECK_CHARGE, OVERDRAFT_PENALTY;
};

/// \brief Classname      : Transaction
/// \brief Classname      : Customer
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Superclasses   : none
/// \brief Subclasses     : none
/// \brief Description    : It will perform all required transaction activities for example transaction type, transaction date and amount balance.


class Transaction
{
private:
    string transaction_type;
    double amount;
    double balance; // Date datafield is missing
public:
};

//
/// \brief Classname      : Account
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Superclasses   : none
/// \brief Subclasses     : Savings_Account, Checking_Account
/// \brief Description    : It will perform all required customer actions with his account for example create account, get balance,set balance, set customer, get customer etc.


class Account
{
private:
    Customer customer;
    double balance;
    long account_number;
    vector<Transaction *> transactions;

public:
    void create_Account(Customer customer, double balance, long account_number);
    long get_account_number();
    double get_balance();
    Customer get_customer();
    string to_string();
    void set_customer(Customer customer);
    void set_balance(double balance);
    string get_acCat();
    string get_acType();

    void set_acCat(string Cat);
    void set_acType(string Typ);
};

/// \brief Classname      : Savings_Account
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Superclasses   : Account
/// \brief Subclasses     : none
/// \brief Description    : It will perform all required customer actions with his account for example deposit,withdrawal,interest etc.


class Savings_Account : public Account
{
public:
    double deposit(double amount);
    double withdraw(double amount);
    void add_interest();
};

/// \brief Classname      : Checking_Account
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Superclasses   : Account
/// \brief Subclasses     : none
/// \brief Description    : It will perform all required customer actions with his account example deposit,withdrawal,interest etc.


class Checking_Account : public Account
{
public:
    double deposit(double amount);
    double withdraw(double amount);
    void add_interest();
};

/// \brief Classname      : Bank
/// \brief Author         : Tanzila Nasrin Tazin
/// \brief Creation Date  : 2023-10-19
/// \brief Superclasses   : none
/// \brief Subclasses     : none
/// \brief Description    : It will perform all required activities for example add account, make deposit, make withdrawal, get account.


class Bank
{
private:
    vector<Account *> accounts;

public:
    void add_account();
    void make_deposit();
    void make_withdrawal();
    Account get_account();
};

#endif //ASSIGNMENT_ACCOUNT_H
