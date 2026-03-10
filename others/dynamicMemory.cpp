#include <cstddef>
#include <iostream>
using namespace std;

int main() {
  // how to allocate dynamic memory
  // lets assume i want to create a int in the dynamic memory i.e heap
  int *n = new int;
  // now lets give this memory a value of integer
  cout << "Print the variable n = " << *n;
  // lets allocate a inteeger and print it
  int *v = new int(4);
  cout << "The variable is :" << *v;
  // now lets delete the allocated memory
  delete v;
  v = NULL; // making the pointer null such that it dont become a wild pointer;
            //
  return 0;
}
