#include <iostream>
using namespace std;
#define SQUARE(x) (x * x)
/*Macros are shortcuts or placeholders that the preprocessor replaces before the
 * code is compiled. They are defined using #define and can be used to create
 * constants or code snippets.*/
int main() {
  // we will use the macro fucntion to get the square root of the integer
  int i = 3;
  int j = SQUARE(i); // actually the code snippet that we gives to the macro is
                     // place in the place of marcro call;

  cout << j;
  return 0;
}
