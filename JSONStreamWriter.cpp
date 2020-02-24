//
//  JSONStreamWriter.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "JSONStreamWriter.hpp"
#include "Student.hpp"

namespace ECE141 {
    
  JSONStreamWriter::JSONStreamWriter(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);
    //STUDENT: open your output stream here...
      output.open(thePath);
  }
  
  int JSONStreamWriter::run() {
    
    ECE141::Student theStudent;
    
    //STUDENT: Initialize the fields of your Student object here...
      theStudent.setName("Ke Wang");
      theStudent.setMobile("123456789");
      theStudent.setEmail("kew004@ucsd.edu");
      theStudent.setStudentId("A53300464");
    
  //setStudentIdENT: finish implementation in the Student class (see operator<<)
      output << theStudent << std::endl;
    return 0;
  }
}
