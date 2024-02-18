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
