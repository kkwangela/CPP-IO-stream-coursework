//
//  TextStreamWriter.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "TextStreamWriter.hpp"
#include "stdlib.h"

namespace ECE141 {

  TextStreamWriter::TextStreamWriter(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);  //this is the full path+filename
    
    //STUDENT: add logic to open your output stream here...
      output.open(thePath);
      
  }
  
  int TextStreamWriter::run(int aLineCount) {
    
    //STUDENT: implement your output logic here... 2 ints (separated by a space) per line...
      int count = 1;
      for (int i = 0; i <aLineCount; i++)
      {
    
        output << rand()% 1000 << " " << rand()%1000 <<std::endl;
        count ++;
      }
      output.close();
      
      
    return count; //return the number of lines written...
  }
}
