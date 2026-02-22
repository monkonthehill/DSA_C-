#include <iostream>
#include <utility>
#include <vector>
using namespace std;
pair<int, int> binar_search(vector<vector<int>> &arr, int traget) {
  int start = 0;
  int end = arr.size() - 1;
  for (int i = start; i <= end; i++) {
    for (int j = i; j <= end; j++) {
      if (arr[i][j] == traget) {
        return {i, j};
      }
    }
  }
}
int main() {
  int target;
  int rows, cols;
  cout << "Enter rows and columns: ";
  cin >> rows >> cols;

  vector<vector<int>> arr(rows, vector<int>(cols));

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "Enter element at [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }
  cout << "Enter the target to search" << endl;
  cin >> target;
  pair<int, int> result = binar_search(arr, target);
  cout << "the index of the target is  :" << result.first << " & "
       << result.second << endl;
}
