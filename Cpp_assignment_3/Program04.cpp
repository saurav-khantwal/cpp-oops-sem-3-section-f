#include<iostream>
#include<math.h>
using namespace std;

int sphereVolume(int r){
    return ((4.00/3.00)*3.14159*pow(r,3));
}

int main(){

 int radius;
 cout<<"Enter the radius of the sphere \n" ;
 cin>>radius;
 int volume = sphereVolume(radius);
 cout<<"volume of the sphere is :";
 cout<<volume;



}
