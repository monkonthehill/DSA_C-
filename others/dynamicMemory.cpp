#include <iostream>
using namespace std;

int main() {
  // how to allocate dynamic memory
  // lets assume i want to create a int in the dynamic memory i.e heap
  int *n = new int;
  // now lets give this memory a value of integer
  cout << "Print the variable n = " << *n;

  return 0;
}
