//C++ Programming: Linked List Part 1 - Student Class Definitions
//by Akhil Baidya

//Submission Date: 12/4/2023

/*This file defines the methods specific to the Student Class, such as
 the constructor, destructor, and get and set methods for the fields (id, gpa,
 first name, and last name)
*/

#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

//Constructor:
Student::Student(int theId, float theGpa, char theFirstN[20], char theSecN[20]) {
  id = theId;
  gpa = theGpa;

  firstName = new char[20];
  strcpy(firstName, theFirstN);

  secondName = new char[20];
  strcpy(secondName, theSecN);
}

//Destructor:
Student::~Student() {
  delete[] firstName;
  delete[] secondName;
}

//Get methods:
int Student::getId() {
  return id;
}
float Student::getGpa() {
  return gpa;
}
char* Student::getFirstN() {
  return firstName;
}
char* Student::getSecondN() {
  return secondName;
}

//set methods:
void Student::setId(int newId) {
  id = newId;
}
void Student::setGpa(float newGpa) {
  gpa = newGpa;
}
void Student::setFirstN(char newFirstN[20]){
  firstName = new char[20];
  strcpy(firstName, newFirstN);
}
void Student::setSecondN(char newSecN[20]) {
  secondName = new char[20];
  strcpy(secondName, newSecN);
}

