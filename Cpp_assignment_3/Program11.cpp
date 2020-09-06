#include<iostream>
#include<string.h>
using namespace std;

void printString(string thisString, int start , int last) {

  cout << thisString[start];
  if (start < last)
  {
    printString(thisString, start + 1, last);
  }
}
int main() {

  string thisString;
  getline(cin, thisString);
  int start ;
  cin >> start;
  int last ;
  cin >> last;
  printString(thisString, start, last - 1);
  return 0;

}
