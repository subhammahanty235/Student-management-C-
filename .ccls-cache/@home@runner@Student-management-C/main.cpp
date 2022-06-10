// #include <iostream>
// #include <map>
#include <bits/stdc++.h>
using namespace std;
class Students{      
    map<int , string>stdlist;
  public:
  
    void registerStudent();
    void deleteStudent();
    void ShowStudentsList();
};
void Students::registerStudent(){
  string stdName ;
  int regno;
  cout<<"Enter Student's Name"<<endl;
  cin>>stdName;
  cout<<"enter Registration Number"<<endl;
  cin>>regno;
  stdlist.insert({regno , stdName});
  // stdlist.insert({2 , "mahanty"});
  cout<<"Registered"<<endl;
  
  
  
}
void Students::ShowStudentsList(){
  for(auto i = stdlist.begin() ; i!= stdlist.end() ; ++i){
    cout<<"reg NO :"<<i->first <<endl;
    cout<<"name: "<<i->second<<endl;
      }
  cout<<"====================="<<endl;
}
void Students::deleteStudent(){
  int regno;
  cout<<"Enter Registration Number of Student"<<endl;
  cin>>regno;
  cout<<"Are you sure You want to remove this student from the database y/n";
  char chc;
  
  cin>>chc;
  bool ans = false;
  if(chc == 'y') {
    stdlist.erase(regno);
    cout<<"removed"<<endl;
  }
  else if(chc == 'n') {cout<<"okay , request cancelled"<<endl;}
  else{cout<<"choose y or n"<<endl;}
  
}

class Student : public Students{
  int regNo ,std ,roll ;
  string name ;
  string subjects[7];
  map<string , int>marks;
  public:
    Student(int reg){
      regNo = reg;
    }
    Student(){
      cout<<"instance Created"<<endl;
    }
  
  void showResult();
  void createResult();
  
  
};
int main() {
    cout<<"------------------Student Management System-----------------------"<<endl;
    Student std1;
    // std1.registerStudent();
    // std1.ShowStudentsList();
  while(true){
    cout<<"press 1 to Fetch All Students List"<<endl;
    cout<<"press 2 to Register a new Student"<<endl;
    cout<<"press 3 to Delete a student from database"<<endl;
    cout<<"press 4 to Create a Student's result"<<endl;
    cout<<"press 5 to exit"<<endl;
    int resp;
    cin>>resp;
    switch(resp){
      case 1:
        std1.ShowStudentsList();
        break;
      case 2:
        std1.registerStudent();
        break;
      case 3:
        std1.deleteStudent();
        break;
      case 4:

      case 5:
        
        goto exit_loop_area;
    }
    break;
  }
  exit_loop_area:{cout<<"Exited Successfully"<<endl;}
}