#include <bits/stdc++.h>
#include <fstream>

#include "utils.h"

using namespace std;

int change_count;

void DirectInsertion(int arr[], int size, int start, int increment)
{
    int key;
    int i;

    for (int j = (start + increment); j < size; j += increment)
    {
        key = arr[j];

        i = j - increment;

        while (i >= 0 && arr[i] > key)
        {
            arr[i + increment] = arr[i];
            i -= increment;
            change_count++;
        }

        arr[i + increment] = key;
    }
}

void InnerShellSort(int arr[], int size, int steps, int gaps[], bool debug)
{
    int h;

    for (int p = steps; p >= 1; p--)
    {
        h = gaps[p - 1];

        for (int j = 0; j < h; j++)
            DirectInsertion(arr, size, j, h);

        if (debug)
        {
            cout << "  Incremento: " << h << endl
                 << "    - ";

            PrintArray(arr, size);

            cout << endl;
        }
    }
}

void ShellSort(int arr[], int size, int gaps[], bool debug = false)
{
    int steps = 0;

    change_count = 0;

    if (debug)
    {
        cout << "================== Shell Sort ==================";
        cout << endl
             << endl;
    }

    while (gaps[steps] < size)
        steps++;

    InnerShellSort(arr, size, steps, gaps, debug);

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