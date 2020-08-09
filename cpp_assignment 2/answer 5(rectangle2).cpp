#include<iostream>
using namespace std;
class rectangle
{
private:
    float x1,x2,y1,y2,x3,x4,y3,y4,length,width;
public:
    rectangle()
    {
        setc();
    }
    setc()
    {
        cout<<"input the cordinates x1 and y1 of point A "<<endl;
        cin>>x1>>y1;
        cout<<"input the cordinates x2 and y2 of point B "<<endl;
        cin>>x2>>y2;
        cout<<"input the cordinates x3 and y3 of point C "<<endl;
        cin>>x3>>y3;
        cout<<"input the cordinates x4 and y4 of point D "<<endl;
        cin>>x4>>y4;
        if(x1<=0.0||x1>20.0||x2<=0.0||x2>20.0||x3<=0.0||x3>20.0||x4<=0.0||x4>20.0||y1<=0.0||y1>20.0||y2<=0.0||y2>20.0||y3<=0.0||y3>20.0||y4<=0.0||y4>20.0)
        {
            cout<<"you have entered invalid values,set the values again"<<endl<<endl;
            setc();
        }
        else if((x2-x1)!=(x3-x4)||(y2-y3)!=(y1-y4)||(x2-x1)<(y2-y3)||(x3-x4)<(y1-y4))
        {
            cout<<"you have entered the values which does not make an rectangle,set the values again:"<<endl;
            setc();
        }
        else
            lwpa();


    }
    lwpa()
    {
        length=x2-x1;
        width=y2-y3;
       cout<<"the length of the rectangle is: "<<length<<endl;
       cout<<"the width is the rectangle is "<<width<<endl<<endl;
       cout<<"the perimeter of the rectangle is "<<endl<<2*(length+width)<<endl;
       cout<<"the area of the ractangle is "<<endl<<length*width<<endl;
       square();
    }
    square()
    {
        if(length==width)
            cout<<"this rectangle is a square"<<endl;
        else
            cout<<"this is a rectangle"<<endl;
    }

};


int main()
{
    rectangle r1;
}
