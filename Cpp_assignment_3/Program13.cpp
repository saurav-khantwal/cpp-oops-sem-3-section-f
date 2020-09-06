#include<iostream>
#include<string.h>
using namespace std;

int recursiveMinimum(int arr[], int , int);
int small = 2147483647 ;
int main() {




  int a;
  cin >> a;
  int arr[a];
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i];
  }

  int start, end;
  cin >> start;
  cin >> end;

  cout << recursiveMinimum(arr, start - 1, end - 1);


  return 0;
}

int recursiveMinimum(int arr[], int start, int end) {

  if (arr[end] < small)
  {
    small = arr[end];
  }

  if (end == start)
  {
    return small;
  } else {
    recursiveMinimum(arr,  start,  end - 1);
  }

  return small;
}

