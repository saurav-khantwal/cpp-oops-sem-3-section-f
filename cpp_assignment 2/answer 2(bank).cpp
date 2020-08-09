#include<iostream>
using namespace  std;
class account
{
private:
    int balance;
public:
    account(int bal)
    {
        balance=bal;
        if(balance<0)
        {
             balance=0;
             cout<<"the initial balance was invalid"<<endl;
             credit();

        }
        credit();

    }
    credit()
    {
        int add;
        cout<<"enter the amount to add"<<endl;
        cin>>add;
        balance=balance+add;
        debit();

    }
    debit()
    {
        int withdrawl;
        cout<<"enter the money to withdraw"<<endl;
        cin>>withdrawl;
        if(withdrawl>balance)
        {
            cout<<"debit amount exceed account balance"<<endl;
            debit();
        }
        else
        {
            balance=balance-withdrawl;
        }
        getbalance();
    }
    getbalance()
    {
        cout<<"the current balance of the account is: "<<balance<<endl;
    }
};
int main()
{
    int bal1,bal2;
    cout<<"input the initial balance of the first account"<<endl;
    cin>>bal1;
    account acc1(bal1);
    cout<<"input the initial balance of the second account"<<endl;
    cin>>bal2;
    account acc2(bal2);


    return 0;
}
