/*
                    -------Quadrilateral--------
                    |    |          |         |
                   |      |          |         |
                  |        |          |         |
            Trapezoid  Parallelogram  Rectangle Square
*/



#include<iostream>
using namespace std;

class quadrilateral
{

private:
    int a,b,c,d,h,side;
public:
    quadrilateral(int a,int b,int c,int d,int h)
    {
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
        this->h=h;
    }

    quadrilateral(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    quadrilateral(int side)
    {
        this->side=side;
    }

    int getperimeter_trapezoid()
    {
        return a+b+c+d;
    }

    int getarea_trapezoid()
    {
        return ((a+c)/2)*h;
    }

    int getperimeter_parallelogram()
    {
        return a+b+c+d;
    }

    int getarea_parallelogram()
    {
        return b*h;
    }

    int getperimeter_rectangle()
    {
        return 2*(a*b);
    }

    int getarea_rectangle()
    {
        return a*b;
    }

    int getperimeter_square()
    {
        return 4*side;
    }

    int getarea_square()
    {
        return side*side;
    }



};

class trapezoid:public quadrilateral
{
    public:
    trapezoid(int a,int b,int c,int d,int h):quadrilateral(a,b,c,d,h)
    {
        cout<<"perimeter and area of trapezoid"<<endl;
    }

    void print()
    {
        cout<<"the perimeter of trapezoid is:"<<getperimeter_trapezoid()<<endl;
        cout<<"the area of trapezoid is:"<<getarea_trapezoid()<<endl<<endl;
    }

};


class parallelogram:public quadrilateral
{
    public:
    parallelogram(int a,int b,int c,int d,int h):quadrilateral(a,b,c,d,h)
    {
        cout<<"the area and perimeter of parallelogram is "<<endl;
    }

    void print()
    {
        cout<<"the perimeter of parallelogram is "<<getperimeter_parallelogram()<<endl;
        cout<<"the area of parallelogram is "<<getarea_parallelogram()<<endl<<endl;
    }
};


class rectangle:public quadrilateral
{
    public:
    rectangle(int a,int b):quadrilateral(a,b)
    {
        cout<<"the area and perimeter of rectangle "<<endl;
    }

    print()
    {
        cout<<"the perimeter of rectangle is "<<getperimeter_rectangle()<<endl;
        cout<<"the area of rectangle is "<<getarea_rectangle()<<endl<<endl;
    }
};


class square:public quadrilateral
{   public:
    square(int a):quadrilateral(a)
    {
        cout<<"the area and perimeter of square is "<<endl;
    }

    print()
    {
        cout<<"the perimeter of square is "<<getperimeter_square()<<endl;
        cout<<"the area of square is "<<getarea_square()<<endl<<endl;
    }
};

int main()
{
    square s1(4);
    s1.print();
    parallelogram p1(2,4,2,4,2);
    p1.print();
    trapezoid t1(2,4,2,4,2);
    t1.print();
    rectangle r1(2,4);
    r1.print();
}
