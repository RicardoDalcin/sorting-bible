#include <bits/stdc++.h>
#include <fstream>

#include "utils.h"

using namespace std;

void InsertionSort(int arr[], int size, bool debug = false)
{
    int i, j, key;

    int change_count = 0;

    if (debug)
    {
        cout << "================== Insertion Sort ==================";
        cout << endl
             << endl;
    }

    for (j = 1; j < size; j++)
    {
        key = arr[j];

        i = j - 1;

        while ((i >= 0) && (arr[i] > key))
        {
            arr[i + 1] = arr[i];
            i--;
            change_count++;

            if (debug)
            {
                cout << "  Passo: " << change_count << endl
                     << "    - ";

                PrintArray(arr, size);

                cout << endl;
            }
        }

        arr[i + 1] = key;
    }

    if (debug)
    {
        cout << "  ARRAY FINAL: " << endl
             << "    - ";

        PrintArray(arr, size);

        cout << endl;

        cout << "  ESTATISTICAS: " << endl;
        cout << "    - Numero de trocas: " << change_count << endl;
        cout << endl;
    }
}