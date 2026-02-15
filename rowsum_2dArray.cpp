#include <iostream>
using namespace std;
void rowsum(int arr[][3], int row, int col) {
  for (int i = 0; i < row; i++) {
    int sum = 0;
    for (int j = 0; j < col; j++) {
      sum += arr[i][j];
    }
    cout << sum << " " << endl;
  }
}
int main() {
  const int ROWS = 3;
  const int COL = 3;
  int arr[ROWS][COL];

  // input
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COL; j++) {
      cout << "Enter element [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }

  cout << "\nMatrix:\n";

  // output
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COL; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  rowsum(arr, ROWS, COL);
}
