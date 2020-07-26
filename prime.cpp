
#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cout<<"input the number:\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        cout<<"prime";
    else
        cout<<"not prime";

    return 0;
}
