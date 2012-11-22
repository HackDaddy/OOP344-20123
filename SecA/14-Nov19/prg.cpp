#include <iostream>
using namespace std;
class MyExp{
  char 
    message[256];
public:
  MyExp(char *Message = ""){
    strncpy(message, Message, 256);
    message[255] = 0;
  }
  ostream &print(ostream &os){
    return os<<message;
  }
};

ostream &operator<<(ostream &os, MyExp &ex){
  return ex.print(os);
}

class BadNum:public MyExp{
public:
  BadNum(char *m=""):MyExp(m){
  }
};

class BadInt:public BadNum{
public:
  BadInt(char *m=""):BadNum(m){
  }
};

class BadMark:public BadInt{
public:
  BadMark(char *m=""):BadInt(m){
  }
};

int GetInt(){
  int
    intnum = 0;
  char
    junk = 0;
  cin>>intnum;
  cin.get(junk);
  if(junk != '\n'){
    cin.clear();
    cin.ignore(100, '\n');
    throw BadInt("Bad Integer in input");
  }
  return intnum;
}

int Getmark(){
  int mark = GetInt();
  if(mark<0 || mark >100){
    throw BadMark("Bad mark entered");
  }
  return mark;
}


int main(void){
  int 
    mark;
  bool 
    ok = false;
  while(!ok){
    try{
      cout<<"Please enter student mark:";
      mark = Getmark();    
      //OpenDB();
      //InserMark(mark);
      //CloseDB();
      ok = true;
    }
    catch(BadMark bm){
      cout<<bm<<endl<<"Only values between 0 and 100 acceptable: ";
    }
    catch(BadInt bi){
      cout<<bi<<endl<<"Onlly integer numbers acceptable:";
    }
    //catch(DBOpenExp e){
    //}
    //catch(DBInsertExp e){
    //}
    //catch(DBCloseExp e){
    //}
    //catch(MyExp e){
    //}
  }
  return 0;
}