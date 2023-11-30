#include <iostream>
#include <cstring>

using namespace std;

class Student {

 public:
  //constructor:
  Student(int theId, float theGpa, char theFirstN[20], char theSecN[20]);

  //destructor:
  ~Student();
 
 protected:
  //fields
  int id;
  float gpa;
  char* firstName;
  char* secondName;
};
