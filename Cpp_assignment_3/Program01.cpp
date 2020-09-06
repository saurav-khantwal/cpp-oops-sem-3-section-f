#include<iostream>
using namespace std;

class Complex{
    public:
   Complex(int r=0 ,int i =0){
       real = r;
       img = i;

   }
   void print(){
       cout<<real<<" +i"<<img<<"\n";
   }
   Complex operator+(Complex const &obj){
       Complex result ;
       result.real = real + obj.real;
      result.img = img + obj.img;
      return result;

   }

    void operator<<(Complex const &obj) {

  cout<<real<<" +i"<<img<<"\n";

    }

    void operator >>(Complex const &obj){
        cout<<"enter real part \n";
        cin>>real;
        cout<<"enter img part \n ";
        cin>>img;

    }

   private:
   int real ,img ;
};

int main(){
    Complex c1(10,5), c2(2,4);
    Complex c3 = c1 + c2;
    c1.print();
    c2.print();
    c3.print();
    Complex c4 ;

    c4>> c4 ;
   cout<<"The number you entered is \n ";
    c4 << c4;

}
