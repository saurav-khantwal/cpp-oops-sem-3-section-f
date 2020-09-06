#include<iostream>
#include<string.h>
using namespace std;

bool testPalindrome(string isPalindrome, int start , int last)
{
  if (start == last)
  {
    return true;
  }

  if ( isPalindrome[start] != isPalindrome[last])
  {
    return false;
  }
  if (start < last)
    testPalindrome(isPalindrome, start + 1, last - 1);

  return true;
}
int main() {

  string isPalindrome;
  getline(cin, isPalindrome);
  int last =  isPalindrome.size();
  int start = 0;
  cout << testPalindrome(isPalindrome, start, last - 1);
  return 0;
}
