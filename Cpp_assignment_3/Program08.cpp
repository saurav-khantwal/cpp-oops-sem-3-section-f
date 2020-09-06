#include <iostream>
using namespace std;
int main()
{

    cout << "Pythagorean triple less than 500 are => \n";
    for (int i = 1; i < 500; i++)
    {
        for (int j = 1; j < 500; j++)
        {
            for (int k = 1; k < 500; k++)
            {
                int side1 = i * i;
                int side2 = j * j;
                int side3 = k * k;
                int temp = side2 + side3;
                if (side1 == temp)
                {
                    cout << i << ":" << j << ":" << k << "\n";
                }
            }
        }
    }
}
