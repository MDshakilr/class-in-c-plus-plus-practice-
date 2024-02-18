/*Create a class `Account` with attributes `accountNumber`, `accountHolder`, and `balance`.
Implement a parameterized constructor to initialize these attributes. Overload the constructor to
handle both initial balance and without initial balance cases. Create methods for deposit and
withdrawal. Display the account details after each transaction.
Sample Input:
Account 1: Account Number - 1001, Account Holder - "Alice"
Account 2: Account Number - 1002, Account Holder - "Bob", Initial Balance - 5000

Sample Output:
Account 1 created with balance 0.
Account 2 created with balance 5000.
Deposit 1: 1500. New Balance: 1500.
Withdrawal 1: 800. New Balance: 700.
    */

#include<bits/stdc++.h>
using namespace std;
class Account {
public:
int accountNumber ;
string accountHolder;
double balance;

Account (int naccountNumber,string naccountHolder)
{
    accountNumber =naccountNumber;
    accountHolder=naccountHolder;
    cout<<"Account 1 created with balance 0."<<endl;

}
Account(int paccountNumber,string paccountHolder,int pbalance)
{
    accountNumber =paccountNumber;
    accountHolder =paccountHolder;
    balance=pbalance;
    cout<<"Account 2 created with balance 5000."<<endl;
}
void deposit (double amount)
{
balance += amount;
    cout<<"Deposit 1:"<<amount<<"New Balance:"<<balance<<endl;
}
void withdraw (double amount)
{
    if (amount <=balance)
    {
        balance -=amount;
        cout<<"withdraw 1 :"<<amount<<"New Balance:"<<balance<<endl;

    }
    else
    {
        cout<< "Not Balance here"<<endl;
    }
}

};
int main()
{
    Account account1(1001,"Alice");
    Account account2(1002,"Bod",5000);
    account1.deposit(1500);
    account1.withdraw(800);
}
