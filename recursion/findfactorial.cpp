// this program can only work for values >= 20!

#include <iostream>
using namespace std;
long long factorial(int n);
int main() {
  int n = 0;
  cout << "enter the numeber whose factorial is to be found :";
  cin >> n;
  int ans = factorial(n);
  cout << endl << "the factorial of " << n << " is :" << ans;
  return 0;
}
long long factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
