/*Given an m x n matrix, return all elements of the matrix in spiral order.



Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]


Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiral_print(vector<vector<int>> &arr) {

  vector<int> ans;

  int rows = arr.size();
  int colms = arr[0].size();

  int count = 0;
  int total = rows * colms;

  int startingRow = 0;
  int endingRow = rows - 1;
  int startingColm = 0;
  int endingColm = colms - 1;

  while (count < total) {

    // 1. starting row
    for (int i = startingColm; i <= endingColm && count < total; i++) {
      ans.push_back(arr[startingRow][i]);
      count++;
    }
    startingRow++;

    // 2. ending column
    for (int i = startingRow; i <= endingRow && count < total; i++) {
      ans.push_back(arr[i][endingColm]);
      count++;
    }
    endingColm--;

    // 3. ending row
    for (int i = endingColm; i >= startingColm && count < total; i--) {
      ans.push_back(arr[endingRow][i]);
      count++;
    }
    endingRow--;

    // 4. starting column
    for (int i = endingRow; i >= startingRow && count < total; i--) {
      ans.push_back(arr[i][startingColm]);
      count++;
    }
    startingColm++;
  }

  return ans;
}
int main() {
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

  vector<int> result = spiral_print(arr);

  cout << "The spiral print will be: ";
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }

  return 0;
}
