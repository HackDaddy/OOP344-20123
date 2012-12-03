#include <iostream>
#include <fstream>
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
  bool operator==(int empno){
    return _empno == empno;
  }
  bool operator==(Employee& E){
    return _empno == E._empno;
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

bool find(fstream& file,unsigned int& loc, Employee& F){
  Employee E;
  bool found = false;
  while(!file.fail()){
    file.read((char*)&E, sizeof(Employee));
    if(E == F){
      loc = (unsigned int)file.tellg() - sizeof(E);
      found = true;
    }
  }
  return found;
}
