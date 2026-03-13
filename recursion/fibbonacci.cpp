#include <iostream>
using namespace std;

int fibbonacci(int ans) {
  if (ans == 0) {
    return 0;
  }
  if (ans == 1) {
    return 1;
  }
  return fibbonacci(ans - 1) + fibbonacci(ans - 2);
}
int main() {
  cout << "Enter the number of fibonacci numbers you wants to print" << endl;
  int len = 0;
  cin >> len;
  cout << fibbonacci(len);
  return 0;
}
