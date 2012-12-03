#include <iostream>
#include <cstdarg>
#include <cstring>
using namespace std;

char* StrCat(char* des, const char* src1, ...);

int main(){
  char str[500] = "Hello";
  StrCat(str, " ", "how ", "are ", "you?", 0);
  cout<<str<<endl;
  return 0;
}

char* StrCat(char* des, const char* src1, ...){
  va_list ap;
  va_start (ap, des);
  const char *arg;
  while(arg = va_arg(ap, const char*)){
    strcat(des, arg);
  }
  va_end(ap);
  return des;
}