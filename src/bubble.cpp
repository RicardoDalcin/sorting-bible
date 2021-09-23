#include <bits/stdc++.h>
#include <fstream>

#include "utils.h"

using namespace std;

void BubbleSort(int array[], int size, bool debug = false)
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

            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);

                if (debug)
                {
                    cout << "  Passo: " << step_count << endl
                         << "    - ";

                    PrintArray(array, size);

                    cout << endl;
                }
            }
        }
    }

    if (debug)
    {
        cout << "  ESTATISTICAS: " << endl;
        cout << "    - Numero de passos: " << step_count << endl;
        cout << endl;
    }
}
