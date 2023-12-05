//C++ Programming: Linked List Part 1 - Node Class Definitions
//by Akhil Baidya

//Submission Date: 12/4/2023

/*This file defines the methods specific to a Node Class object, such as
the constructor, deconstructor, get methods (for both fields) and the
set method for establishing the "next node."
 */

#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

Node::Node(Student* theStudent) {
  student = theStudent;
}

Node::~Node(){
  nextNode = NULL;
  delete student;
}

Node* Node::getNext() {
  return nextNode;
}
Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* newNext){
  nextNode = newNext;
}
