//
//  Student.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "Student.hpp"

namespace ECE141 {
  
  Student::Student() {}
  
  Student& Student::setName(const char* aName) {
    //STUDENT: set the name field here...
    strcpy(name, aName);
    return *this;
  }
  
  Student& Student::setMobile(const char* aMobile) {
    //STUDENT: set the mobile field here...
      strcpy(mobile, aMobile);
    return *this;
  }
  
  Student& Student::setEmail(const char* anEmail) {
    //STUDENT: set the email field here...
      strcpy(email, anEmail);
    return *this;
  }
  
  Student& Student::setStudentId(const char* anId) {
    //STUDENT: set the student field here...
      strcpy(studentid, anId);
    return *this;
  }
  
  //STUDENT: implement the stream output operator (<<) here...
std::ostream& operator<<(std::ostream& aStream, const Student& aStudent){
    aStream << "Name: " << aStudent.getName() << std::endl << "Mobile: " << aStudent.getMobile() << std::endl << "Email: " << aStudent.getEmail() << std::endl << "ID: " << aStudent.getStudentId() << std::endl;
    
    return aStream;
    
}
  //         and write your student data to output


}
