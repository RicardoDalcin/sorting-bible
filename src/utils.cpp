#include <bits/stdc++.h>
#include <fstream>

using namespace std;

//--------------------------------------------------------------
void CopyArray(int source[], int destination[], int size)
//--------------------------------------------------------------
{
  int i;

  for (i = 0; i < size; i++)
  {
    destination[i] = source[i];
  }
}

//--------------------------------------------------------------
void PrintArray(int array[], int size)
//--------------------------------------------------------------
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }

  cout << endl;
}
