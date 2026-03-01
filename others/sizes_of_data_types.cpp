#include <iostream>
using namespace std;

int main() {
  cout << "Sizes of Fundamental Data Types (in bytes)\n\n";

  cout << "bool: " << sizeof(bool) << endl;
  cout << "char: " << sizeof(char) << endl;
  cout << "signed char: " << sizeof(signed char) << endl;
  cout << "unsigned char: " << sizeof(unsigned char) << endl;

  cout << "short: " << sizeof(short) << endl;
  cout << "unsigned short: " << sizeof(unsigned short) << endl;

  cout << "int: " << sizeof(int) << endl;
  cout << "unsigned int: " << sizeof(unsigned int) << endl;

  cout << "long: " << sizeof(long) << endl;
  cout << "unsigned long: " << sizeof(unsigned long) << endl;

  cout << "long long: " << sizeof(long long) << endl;
  cout << "unsigned long long: " << sizeof(unsigned long long) << endl;

  cout << "float: " << sizeof(float) << endl;
  cout << "double: " << sizeof(double) << endl;
  cout << "long double: " << sizeof(long double) << endl;

  cout << "wchar_t: " << sizeof(wchar_t) << endl;
  cout << "char16_t: " << sizeof(char16_t) << endl;
  cout << "char32_t: " << sizeof(char32_t) << endl;

  cout << "\nPointer sizes:\n";
  cout << "int*: " << sizeof(int *) << endl;
  cout << "char*: " << sizeof(char *) << endl;
  cout << "void*: " << sizeof(void *) << endl;

  return 0;
}
