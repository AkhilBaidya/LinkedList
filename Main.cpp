#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

int main(){

  //test constructor:

  //creating students:
  int id = 100;
  float gpa = 3.42;
  char firName1[20] = "David";
  char secName2[20] = "Gilbert";
  char firName2[20] = "Sir";
  char secName2[20] = "Ganondorf";
  
  Student* student1 = new Student(id, gpa, firName1, secName1);
  Student* student2 = new Student(id, gpa, firName2, secName2);

  //creating nodes:
  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);

  
  return 0;
}
