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

