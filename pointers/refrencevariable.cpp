#include <iostream>
using namespace std;

int main() {
  // how to create a refrence variable
  int i = 0;
  int &j = i;
  // in this case j is the refrence variable;
  cout << i << endl;
  cout << j << endl;

  return 0;
}
