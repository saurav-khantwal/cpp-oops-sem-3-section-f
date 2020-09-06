#include<iostream>
using namespace std;

#define ll long long

int main() {

  int p[500] = {0};

  for (int i = 3; i <= 500; i += 2)
  {
    p[i] = 1;
  }
  for (int i = 3; i <= 500; i += 2)
  {
    if (p[i] == 1)
    {
      for (int j = i * i ; j <= 500; j += i)
      {

        p[j] = 0;

      }
    }
  }
  p[0] = p[1] = 0;
  p[2] = 1;

  for (int i = 1; i < 500; i++)
  {

    if (p[i] > 0) {
      cout << i << endl;
    }
  }
  return 0;

}
