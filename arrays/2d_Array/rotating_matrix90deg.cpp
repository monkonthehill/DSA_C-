/*48. Rotate Image
Medium
You are given an n x n 2D matrix representing an image, rotate the image by 90
degrees (clockwise).


Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
Example 2:


Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]


Constraints:

n == matrix.length == matrix[i].length
1 <= n <= 20
*/

#include <iostream>
#include <vector>
using namespace std;
void rotated_matrix(vector<vector<int>> &arr) {
  // vector<int> temp;
  // // intializing the indexes
  // int rows = arr.size();
  // int colm = arr[0].size();
  // int startingColm = 0;
  // int endingColm = colm - 1;
  // // intializing the loop veriables
  // int count = 0;
  // int total = rows * colm;
  // while (count < total) {
  //   for (int i = endingColm; i >= 0; i--) {
  //     temp.push_back(arr[i][startingColm]);
  //     count++;
  //   }
  //
  //   startingColm++;
  // }
  // return temp;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n - 1 - i; j++) {
      int temp = arr[i][j];
      arr[i][j] = arr[j][n - i - 1];
      arr[j][n - i - 1] = arr[n - i - 1][n - 1 - j];
      arr[n - i - 1][n - 1 - j] = arr[n - 1 - j][i];
      arr[n - 1 - j][i] = temp;
    }
  }
}

int main() {
  int rows, cols;
  cout << "Enter rows and columns: ";
  cin >> rows >> cols;

  vector<vector<int>> arr(rows, vector<int>(cols));

  // input
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << "Enter element [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }
  rotated_matrix(arr);
  // output
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
