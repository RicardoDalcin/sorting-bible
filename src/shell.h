#include <bits/stdc++.h>
#include <fstream>

#ifndef shell_h
#define shell_h

using namespace std;

int SHELL[20] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
int KNUTH[13] = {1, 4, 13, 40, 121, 364, 1093, 3280, 9841, 29524, 88573, 265720, 797161};
int CIURA[16] = {1, 4, 10, 23, 57, 132, 301, 701, 1577, 3548, 7983, 17961, 40412, 90927, 204585, 460316};

void DirectInsertion(int arr[], int size, int start, int increment);

void InnerShellSort(int arr[], int size, int steps, int gaps[], bool debug);

void ShellSort(int arr[], int size, int gaps[], bool debug = false);

#endif