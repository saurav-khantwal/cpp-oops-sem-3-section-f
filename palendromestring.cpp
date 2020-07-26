
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    char str[30];
    int i,flag=0,l;
    cout<<"enter a string"<<endl;
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[l-1-i])
            {flag=1;
            break;
            }
    }
    if(flag==0)
        cout<<"the string is palendrome"<<endl;
    else
        cout<<"the string is not palendrome"<<endl;
}
