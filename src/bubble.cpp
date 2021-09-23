#include <bits/stdc++.h>
#include <fstream>

#include "utils.h"

using namespace std;

void BubbleSort(int arr[], int size, bool debug = false)
{
    int i, j;

    int step_count = 0;

    if (debug)
    {
        cout << "================== Bubble Sort ==================";
        cout << endl
             << endl;
    }

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            step_count++;

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);

                if (debug)
                {
                    cout << "  Passo: " << step_count << endl
                         << "    - ";

                    PrintArray(arr, size);

                    cout << endl;
                }
            }
        }
    }

    if (debug)
    {
        cout << "  ARRAY FINAL: " << endl
             << "    - ";

        PrintArray(arr, size);

        cout << endl;

        cout << "  ESTATISTICAS: " << endl;
        cout << "    - Numero de passos: " << step_count << endl;
        cout << endl;
    }
}
