#ifndef MYCLASS_H
#define MYCLASS_H

//extern const int a2;
//extern const char* const s2;
extern const int a2;
extern const char* const s2; 

class MyClass {
private:
  const int a1;
  const char* const s1;
public:
  MyClass(const int a = 30, const char* const s = "abc"):a1(30),s1(s){
  }
};


#endif
