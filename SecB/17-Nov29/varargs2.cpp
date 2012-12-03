#include <cstdio>
#include <cstdarg>
using namespace std;

void miniprint(char *format, ...){
  va_list
    ap;
  va_start(ap, format);
  while(*format){
    if(*format == '%'){
      format++;
      switch(*format){
        case 'd':
          printf("%d", va_arg(ap,int));
          break;
        case 'f':
          printf("%0.2f", va_arg(ap,double));
          break;
        case 's':
          printf("%s", va_arg(ap,char*));
          break;
        case 'x':
          printf("%x", va_arg(ap,int));
          break;
        case 'X':
          printf("%X", va_arg(ap,int));
          break;
        case 'p':
          printf("%p", va_arg(ap,void*));
          break;
        default:
          putchar(*format);
      }
    }
    else{
      putchar(*format);
    }
  }
  va_end(ap);
}