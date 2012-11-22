#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Employee{
  char _name[15];
  char _lastname[30];
  int _empno;
  double _salary;
public:
  Employee(const char* name="", const char* lastname="", int empno=0, double salary=0.0){
     set(name, lastname, empno, salary);
  }
  void set(const char* name="", const char* lastname="", int empno=0, double salary=0.0){
    strcpy(_name, name);
    strcpy(_lastname, lastname);
    _empno = empno;
    _salary = salary;
  }
  ostream& print(ostream& OS)const{
    return OS<<"Name: "<<_name<<" "<<_lastname<<endl<<"EmpNo: "<<_empno
      <<", Salary: "<<_salary;
  }
  virtual ~Employee(){
    //print(cout)<<"is dead!!!!"<<endl;
  }
};
ostream& operator<<(ostream& OS, const Employee& E){
  return E.print(OS);
}

int main(){
  Employee E;
  fstream file("emp.bin",ios::in|ios::binary);
  for(int i=0;!file.fail();i++){
    file.read((char*)&E, sizeof(Employee));
    if(!file.fail()){
      cout<<E<<endl<<endl;
    }
  }
  return 0;
}