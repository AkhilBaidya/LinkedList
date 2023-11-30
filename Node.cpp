#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

//constructor:
Node::Node(Student* theStudent) {
  student = theStudent;
}
//destructor:
Node::~Node(){
  delete nextNode;
  delete student;
}
//get methods:
Node* Node::getNext() {
  return nextNode;
}
Student* Node::getStudent() {
  return student;
}
//set method:
void Node::setNext(Node* newNext){
  nextNode = newNext;
}
