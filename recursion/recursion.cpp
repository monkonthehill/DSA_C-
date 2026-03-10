#include <iostream>
using namespace std;

int sumRecursion(int n);
int main() {
  // main();
  int n = 0;
  cout << "Enter the number to find its sum of natural numbers recurcively :"
       << endl;
  cin >> n;
  int ans = sumRecursion(n);
  cout << ans;
  return 0;
}
int sumRecursion(int n) {
  if (n == 0) { // this is the base case
    return 0;
  }
  return n + sumRecursion(n - 1);
}
