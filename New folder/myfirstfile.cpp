#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass {       // The class
  public:
    string name;
	string classname;          // Access specifier
    int myage;
  string group;       // Attribute (int variable) 
};

int main() {
	
  MyClass myObj;  
  
  myObj.name = "NAME: HASSAN";
  myObj.classname = "CLASS: BS 2ND YEAR";
  myObj.myage = 20; 
  myObj.group = "GROUP: CS";
  
  cout<<myObj.name<<"\n";
  cout<<myObj.classname<<"\n";
  cout<<myObj.myage<<"\n";
  cout<<myObj.group;
  
  
  return 0;
}
