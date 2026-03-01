
#include <iostream>
using namespace std;
int GCD(int a, int b);
int main() {
  cout << "Enter the two numbers for which you want HCF of : ";
  int a, b;
  cin >> a >> b;
  int gcd = GCD(a, b);
  cout << endl;
  cout << "The HCF of " << a << " and " << b << " is : " << gcd;
}
int GCD(int a, int b) {
  if (a == 0) {
    return b;
  }
  if (b == 0) {
    return a;
  }
  while (a != b) {
    if (a < b) {
      b = b - a;
    } else {
      a = a - b;
    }
  }
  return a;
}
