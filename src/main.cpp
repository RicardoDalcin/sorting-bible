#include <bits/stdc++.h>

#include "utils.h"
#include "bubble.h"

using namespace std;

//--------------------------------------------------------------
int main()
//--------------------------------------------------------------
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  BubbleSort(arr, n, true);

  system("pause");

  return 0;
}