#include<iostream>
#include<math.h>
using namespace std;

float charges(float hours){
    float price=2.00;
    if(hours>3)
    {
        int cost = hours - 3;
        price += cost*0.50;
        if(price>10.00)
        {
            price = 10.00;
        }
    }
    return price;

}

int main(){

int n;
cin>>n;
float arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

cout<<"Car  Hours   Charge\n";
for(int i=0;i<n;i++){
    cout<<i+1<<"    "<<arr[i]<<"      "<<charges(arr[i])<<"\n";
}

}
