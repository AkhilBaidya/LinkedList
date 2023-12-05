//C++ Programming: Linked List Part 1 - Student Class Header
//by Akhil Baidya

//Submission Date: 12/4/2023

/*This file lists the methods and fields specific to a Student Class object.
A student has an integer id, a float gpa, and character arrays for their first
and last names. These fields can be get and set with their respective methods.
Additionally, this class contains a constructor and destructor for the Student
Class Object.
 */

#include <iostream>
#include <cstring>

using namespace std;

class Student {

 public:

  //Constructor (defines a student with some id, gpa, first, and last name):
  Student(int theId, float theGpa, char theFirstN[20], char theSecN[20]);
  
  //Destructor:
  ~Student();

  //Get methods:
  int getId(); //get the student id
  float getGpa(); //get the student gpa
  char* getFirstN(); //get the student's first name
  char* getSecondN(); //get the student's last name

  //Set methods:
  void setId(int newId); //set the student id
  void setGpa(float newGpa); //set the student gpa
  void setFirstN(char newFirstN[20]); //set the student's first name
  void setSecondN(char newSecN[20]); //set the student's second name
 
 protected:
  
  //These are the fields unique to the Student Class:

  int id;
  float gpa;
  char* firstName;
  char* secondName;
};
