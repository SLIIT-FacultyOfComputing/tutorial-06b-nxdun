#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails() {
  studentid = sid;
  strcpy(name,pname);
  
}

// Display StudentId and Name
Student::display() {
  std::cout<<"student id is : "<< studentid<<std::endl;;
  std::cout<<"student Name is : "<< name <<std::endl;;
  
}
