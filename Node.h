#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

class Node {

 public:
  //constructor:
  Node(Student* theStudent);

  //destructor:
  ~Node();

  //get methods:
  Node* getNext();
  Student* getStudent();

  //set methods:
  void setNext(Node* newNext);
  
 protected:
  //fields (nextnode and student)
  Student* student;
  Node* nextNode;
};
