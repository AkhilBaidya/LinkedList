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
  
  cout << "You have finished constructing Student class objects" << endl;
  
  //creating nodes:
  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);
  Node* node3 = new Node(student3);

  cout << "You have finished constructing Node class objects" << endl;


  //TESTING getStudent():
  Student* stud1 = node1 -> getStudent();
  cout << "Here is the first student: " << endl;

  cout << "Name: ";
  cout << stud1 -> getFirstN() << " ";
  cout << stud1 -> getSecondN() << endl;

  //check if setting new name breaks anything:
  char newN[20] = "Goliath";
  stud1 -> setSecondN(newN);

  cout << "New Name: ";
  cout << stud1 -> getFirstN() << " ";
  cout << stud1 -> getSecondN() << endl;

  cout << "Id: ";
  cout << stud1 -> getId() << endl;

  cout <<"GPA: ";
  cout << stud1 -> getGpa() << endl;


  //CHECK setNext() and getNext():
  node1 -> setNext(node2);
  node2 -> setNext(node3);

  cout << "Who's in the node after node 1?" << endl;
  cout << node1 -> getNext() -> getStudent() -> getFirstN() << " " << node1 -> getNext() -> getStudent() -> getSecondN() << endl;

  cout << "Who's in the node after node 2?" << endl;
  cout << node2 -> getNext() -> getStudent() -> getFirstN() << " " << node2 -> getNext() -> getStudent() -> getSecondN() << endl;

  //set next node to something else (see if this works):
  node1 -> setNext(node3);

  cout << "But now...the person in the node after node 2 is also after node 1. They are: " << endl;
  cout << node1 -> getNext() -> getStudent() -> getFirstN() << " " << node1 -> getNext() -> getStudent() -> getSecondN() << endl;

  
  return 0;
}
