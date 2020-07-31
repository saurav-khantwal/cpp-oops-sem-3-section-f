#include<iostream>
using namespace std;
int main()
{
    int n,temp,rem,rev=0;
    cout<<"input a number:"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
        cout<<"palendrome";
    else
        cout<<"the number is not palendrome";
}
