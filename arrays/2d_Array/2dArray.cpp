#include <iostream>
using namespace std;

int main() {
  const int ROWS = 3;
  const int COLS = 3;

  int arr[ROWS][COLS];

  // input
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cout << "Enter element [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }

  cout << "\nMatrix:\n";

  // input
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cout << "Enter element [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }
}
