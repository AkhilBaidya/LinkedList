//C++ Programming: Linked List Part 1 - Node Class Header
//by Akhil Baidya

//Submission Date: 12/4/2023

/*This file lists the methods and fields specific to a Node Class object.
A Node contains a pointer to a student object and a pointer to another Node
object. On top of having a constructor and destructor, this class has get methods
to return these fields and a set method to set the pointer to the next Node
(the pointer to the student object is set in the constructor)
*/

#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

class Node {

 public:

  //Constructor:
  Node(Student* theStudent); //specify the student object the node will refer to

  //Destructor:
  ~Node(); //received help from Mr. Galbraith in realizing I need to set nextNode = NULL in deconstructor (do not want to delete the entire chain of nodes in my main code by deleting nextNode)

  //Get methods:
  Node* getNext(); //get the next node (that this node points to)
  Student* getStudent(); //get the student object

  //Set methods:
  void setNext(Node* newNext); //set the next node (that this node points to)
  
 protected:
  
  //These are the fields unique to the Node class (the next node and student object)
  Student* student;
  Node* nextNode;
};
