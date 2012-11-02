#include <iostream>
using namespace std;
#define sum(x,y) x+y
void W1(){
  int i = 5;
  int j = 6;
  int k;
  k = sum(i,j)*7; 
  cout<<k<<endl;
}
void W2(){
  int ar[13] = {0,1,0,20,0,56,4,0,6,0,5,0,0};
  int num = 0;
  int i;
  for(i = 0;i<10; i++)
    num+= !ar[i];
  cout<<num<<endl;
}
void W3(){
  int ar[10] = {100,200,300,400,500,600,700,800,900,1000};
  int* p = ar + 3;
  cout<<*(ar+3)<<endl;
  cout<<p[5]<<endl;
  
}
void W4(){
  short b[4];
  short a[2][3];
  cout<<sizeof(b)<<endl;
  cout<<sizeof(b[0])<<endl;
  cout<<sizeof(a[0])<<endl;
}
int count(){
  static int i = 0;
  return i+=2;
}
void W5(){
  for(int i=0;i<3;i++)
    count();
  cout<<count()<<endl;
}
void W6(){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int (*ma)[4] = (int(*)[4])a;
  cout<<ma[1][1]<<endl;
}
void cp(void* des, void* src, unsigned s){
  do{
    ((char*)des)[--s] = ((char*)src)[s];
  }while(s);
}

void W7(){
  char s[5] = "";
  cp(s,"abcd", 4);
  cout<<s<<endl;
}
enum val{aa, bb, cc, dd, ee, ff};
void W8(){
  cout<<ee<<endl;
}
void add(int a, int b){
  cout<<a+b<<endl;
}
void mul(int a, int b){
  cout<<a*b<<endl;
}
void dv(int a, int b){
  cout<<a/b<<endl;
}
void W9(){
  void (*fptr[3])(int, int) = {dv,add, mul};
  for(int i=0;i<3;i++){
    fptr[i](10, 2);
  }
}
class Bs{
  int
    _data;
public:
  Bs(int data = 0):_data(data){}
  virtual void Act()=0;
  void print(){cout<<_data<<endl;}
  virtual ~Bs(){};
};
class D1:public Bs{
public:
  D1(int data=0):Bs(data){}
  void Act(){cout<<"D1";Bs::print();};
};
class D2:public D1{
public:
  D2(int data=0):D1(data){}
  void Act(){cout<<"D2";Bs::print();};
};
void W10(){
  D1 *d = new D1(10);
  Bs *b = new D2(20);
  d->Act();
  b->Act();
  delete d; delete b;
}
int main(){
  W1();
  W2();
  W3();
  W4();
  W5();
  W6();
  W7();
  W8();
  W9();
  W10();
  return 0;  
}