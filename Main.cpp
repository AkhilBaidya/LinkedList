//C++ Programming: Linked List Part 1 - Main Class (for Testing)
//by Akhil Baidya

//Submission Date: 12/4/2023

/*This file tests whether the Node class methods work (whether the constructor,
destructor, reference to a student object, and reference to another node object
work)
 */


#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

int main(){

  //TESTING THE CONSTRUCTOR:

  //creating students:
  int id = 100;
  float gpa = 3.42;
  char firName1[20] = "David";
  char secName1[20] = "Gilbert";
  char firName2[20] = "Sir";
  char secName2[20] = "Ganondorf";
  
  Student* student1 = new Student(id, gpa, firName1, secName1);
  Student* student2 = new Student(id+1, gpa-1, firName2, secName2);
  Student* student3 = new Student(id+2, gpa+2, firName2, firName1);
  
  cout << "You have finished constructing Student class objects" << endl; //let me know if the objects have been constructed
  
  //creating nodes:
  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);
  Node* node3 = new Node(student3);

  cout << "You have finished constructing Node class objects" << endl; //let me know if the objects have been constructed


  //TESTING getStudent():
  Student* stud1 = node1 -> getStudent();
  cout << "Here is the first student: " << endl;

  cout << "Name: ";
  cout << stud1 -> getFirstN() << " "; //should be David 
  cout << stud1 -> getSecondN() << endl; //should be Gilbert

  /*check if setting new name for student breaks anything:
  (this will mainly let me know problems that exist in my Student class)*/
  char newN[20] = "Goliath";
  stud1 -> setSecondN(newN);

  cout << "New Name: ";
  cout << stud1 -> getFirstN() << " "; //should be David
  cout << stud1 -> getSecondN() << endl; //should be Goliath

  cout << "Id: ";
  cout << stud1 -> getId() << endl; //should be 100

  cout <<"GPA: ";
  cout << stud1 -> getGpa() << endl; //should be 3.42


  //TESTING setNext() and getNext():
  node1 -> setNext(node2);
  node2 -> setNext(node3);

  cout << "Who's in the node after node 1?" << endl;
  cout << node1 -> getNext() -> getStudent() -> getFirstN() << " " << node1 -> getNext() -> getStudent() -> getSecondN() << endl; //should be Sir Ganondorf

  cout << "Who's in the node after node 2?" << endl;
  cout << node2 -> getNext() -> getStudent() -> getFirstN() << " " << node2 -> getNext() -> getStudent() -> getSecondN() << endl; //should be Sir David

  //set next node to something else (see if using the setNext() again leads to an error):
  node1 -> setNext(node3);

  cout << "But now...the person in the node after node 2 is also after node 1. They are: " << endl;
  cout << node1 -> getNext() -> getStudent() -> getFirstN() << " " << node1 -> getNext() -> getStudent() -> getSecondN() << endl; //should be Sir David


  //TESTING DESTRUCTORS:
  cout << "deleting first node" << endl;
  delete node1;
  cout << "deleting second node" << endl;
  delete node2;
  cout << "deleting third node" << endl;
  delete node3;

  cout << "Amazing! If you reached this point, all of the nodes are now deleted." << endl;
  return 0;
}
