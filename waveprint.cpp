/*
Problem statement
For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the
‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next
column bottom to top, and so on.

For eg:-

The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 4, 2].
*/
#include <iostream>
using namespace std;

template <size_t ROWS, size_t COLS> void waveprint(int (&arr)[ROWS][COLS]) {

  for (size_t j = 0; j < COLS; j++) {

    if (j % 2 == 1) {
      for (int i = ROWS - 1; i >= 0; i--)
        cout << arr[i][j] << " ";
    } else {
      for (size_t i = 0; i < ROWS; i++)
        cout << arr[i][j] << " ";
    }
  }
}

int main() {

  int arr[3][3];

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      cin >> arr[i][j];

  cout << "\nWave print:\n";
  waveprint(arr);
}
