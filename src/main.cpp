#include <bits/stdc++.h>

#include "utils.h"
#include "bubble.h"
#include "insertion.h"

using namespace std;

//--------------------------------------------------------------
int main()
//--------------------------------------------------------------
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  InsertionSort(arr, n, true);

  system("pause");

  return 0;
}
