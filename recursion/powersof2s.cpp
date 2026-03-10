#include <iostream>
using namespace std;

int powerof2(int n);
int main() {
  int n = 0;
  cout << "Enter the number for which you want the power of 2 : " << endl;
  cin >> n;
  int ans = powerof2(n);
  cout << endl << "Answer is :" << ans;
  return 0;
}
int powerof2(int n) {
  if (n == 0) {
    return 1;
  }
  return 2 * powerof2(n - 1);
}
