#include <iostream>
using namespace std;

int main() {
  cout << "we are making a jaggered array" << endl;
  // jaggered arrays are arrays of array but unlike 2d array where every coloum
  // is an array in a jaggered array eash element itself is an array;
  int rows = 0;
  int colms = 0;
  cout << "Enter the values of rows and colms :";
  cout << "Rows: ";
  cin >> rows;
  cout << endl;
  cout << "Colums: ";
  cin >> colms;
  cout << endl;
  int ***p1 = new int **[rows];
  for (int i = 0; i < colms; i++) {
    p1[1] = new int *[rows];
    for (int j = 0; j < colms; j++) {
      int depth = i + j + 1; // this depth is only to create a randomness not
                             // necessery for creation;
      p1[i][j] = new int[depth];
    }
  }
  return 0;
}
