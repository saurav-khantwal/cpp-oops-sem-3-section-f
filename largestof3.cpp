#include<iostream>
using namespace  std;
int main()
{
    int a,b,c;
    cout<<"input the three numbers a,b,c\n";
    cin>>a>>b>>c;
    if(a>b&&a>c)
        cout<<a<<"(a) is the greatest";
    else if(b>a&&b>c)
        cout<<b<<"(b) is the greatest";
    else
        cout<<c<<"(c) is the greatest";
    return 0;
}
