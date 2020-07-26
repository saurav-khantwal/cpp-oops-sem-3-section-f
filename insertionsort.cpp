
#include<iostream>
using namespace std;
int main()
{
    int a[10],n,j,key,i;
    cout<<"enter the range\n";
    cin>>n;
    cout<<"enter the numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
