#include "MyClass.h"  
#include <iostream>


const int a2 = 30;
const char* const s2 = "abc";

using namespace std;
int add(const int a, const char* s) {
  cout << a << endl;
  cout << s << endl;
  cout << a2 << endl;
  cout << s2 << endl;
  return a2;
}
