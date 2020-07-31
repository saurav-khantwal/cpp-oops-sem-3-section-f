#include<iostream>
using namespace std;
int main()
{
    int a[10],n,temp;
    cout<<"enter the range\n";
    cin>>n;
    cout<<"enter the numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
               {
                   temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;

               }
        }
    }

    cout<<"the second max number is "<<a[1]<<"\n";
    cout<<"the second min number is "<<a[n-2];
}
