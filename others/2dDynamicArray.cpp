#include <iostream>
using namespace std;

int main() {
  int rows, colms;
  cout << "Enter the numbers of rows:";
  cin >> rows;
  cout << endl;
  cout << "Enter the numbers of coloums:";
  cin >> colms;
  cout << endl;
  int **arr = new int *[rows];
  for (int i = 0; i < colms; i++) {
    arr[i] = new int[rows];
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows; j++) {
      cout << arr[i][j];
    }
  }
  return 0;
}
