#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student(int theId, float theGpa, char theFirstN[20], char theSecN[20]) { //constructor
  id = theId;
  gpa = theGpa;

  firstName = new char[20];
  strcpy(firstName, theFirstN);

  secondName = new char[20];
  strcpy(secondName, theSecN);
}

Student::~Student() { //destructor
  delete[] firstName;
  delete[] secondName;
}

//get methods:
int Student::getId() {
}
float Student::getGpa() {
}
char* Student::getFirstN() {
}
char* Student::getSecondN() {
}

//set methods:
void Student::setId(int newId) {
}
void Student::setGpa(float newGpa) {
}
void Student::getFirstN(char newFirstN[20]){
}
void Student::getSecondN(char newSecN[20]) {
}

