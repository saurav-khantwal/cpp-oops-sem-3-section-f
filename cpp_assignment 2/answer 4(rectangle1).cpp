#include<iostream>
using namespace std;
class rectangle
{
private:
    float length,width;
public:
    rectangle()
    {
        length=1;
        width=1;
        get();
    }
    get()
    {
        cout<<"input the length and width of the rectangle:"<<endl;
        cin>>length>>width;
        setv();
    }
    setv()
    {
        if(length>20.0||length<0.0||width>20.0||width<0.0)
        {
            cout<<"you've entered invalid values "<<endl;
            get();
        }
        else
            calculate();
    }
    calculate()
    {
        float area,perimeter;
        perimeter=2*(length+width);
        area=length*width;
        cout<<"perimeter="<<perimeter<<"  "<<"area="<<area;;

    }

};
int main()
{
    rectangle r1;
}
