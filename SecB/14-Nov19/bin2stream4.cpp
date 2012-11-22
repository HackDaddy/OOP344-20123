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
  cout<<sizeof(Employee)<<endl;
  fstream file("emp.bin",ios::out|ios::in|ios::binary);
  file.seekg((ios::off_type)0, ios::end);
  int loc = file.tellg();
  cout<<"before: "<<endl;
  while(loc > 0 ){
    loc -= sizeof(Employee);
    file.seekg((ios::pos_type)loc);
    file.read((char*)&E, sizeof(Employee));
    cout<<E<<endl;
  }
  file.seekp((ios::pos_type)sizeof(Employee)*2);
  E.set("Fardad", "Soley", 999, 99999.99);
  file.write((const char*)&E, sizeof(Employee));
  file.seekp((ios::pos_type)0);
  E.set("kang", "park", 8888, 999999.99);
  file.write((const char*)&E, sizeof(Employee));
  file.seekg((ios::off_type)0, ios::end);
  loc = file.tellg();
  cout<<"after: "<<endl;
  while(loc > 0 ){
    loc -= sizeof(Employee);
    file.seekg((ios::pos_type)loc);
    file.read((char*)&E, sizeof(Employee));
    cout<<E<<endl;
  }
  return 0;
}
