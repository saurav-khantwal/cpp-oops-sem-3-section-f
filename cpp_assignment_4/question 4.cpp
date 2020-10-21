#include<iostream>
using namespace std;
class shape
{
    private:
    int l,b,side;
    public:
        shape(int l,int b)
        {
            this->l=l;
            this->b=b;
        }

        shape(int side)
        {
            this->side=side;
        }

        int get_square_area()
        {
            return side*side;
        }

        int get_rectangle_area()
        {
            return l*b;
        }

        int get_cube_volume()
        {
            return side*side*side;
        }

        float get_sphere_volume()
        {
            return 4.082*(side*side*side);
        }
};

class twod_shape:public shape
{
public:

    twod_shape(int l,int b):shape(l,b)
    {
        cout<<"2d shape selected"<<endl;
    }

    twod_shape(int side):shape(side)
    {
        cout<<"2d shape selected"<<endl;
    }
};

class threed_shape:public shape
{
    public:
     threed_shape(int side):shape(side)
    {
        cout<<"3d shape selected"<<endl;
    }

};

class square:public twod_shape
{
    public:
    square(int side):twod_shape(side)
    {

    }

    void print()
    {
      cout<<"the area of square is:\n"<<get_square_area()<<endl;
    }
};

class rectangle:public twod_shape
{
    public:
    rectangle(int l,int b):twod_shape(l,b)
    {

    }

    void print()
    {
       cout<<"the area of rectangle is:\n"<<get_rectangle_area()<<endl;
    }
};

class cube:public threed_shape
{
    public:
    cube(int side):threed_shape(side)
    {

    }

    void print()
    {
       cout<<"the volume of cube is:\n"<<get_cube_volume()<<endl;
    }
};

class sphere:public threed_shape
{
    public:
    sphere(int r):threed_shape(r)
    {

    }

    void print()
    {
       cout<<"the volume of sphere is:\n"<<get_sphere_volume()<<endl;
    }
};


int main()
{
    square s1(3);
    s1.print();
    rectangle r1(2,3);
    r1.print();
    cube c1(3);
    c1.print();
    sphere sp1(3);
    sp1.print();
}
