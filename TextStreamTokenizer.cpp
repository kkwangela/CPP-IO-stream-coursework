//
//  TextStreamTokenizer.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "TextStreamTokenizer.hpp"

namespace ECE141 {
  
  TextStreamTokenizer::TextStreamTokenizer(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);
    //STUDENT: open your input stream (from thePath) here...
    input.open(thePath);
 
  }
  
  int TextStreamTokenizer::run(std::ostream &anOutput) {
    
    //STUDENT: implement this method. read numbers from each line, sum them, send result to output...
      int num1,num2;
      while(input >> num1 >> num2)
      {
          anOutput << num1 + num2 << std::endl;
          std::cout << num1 + num2 << std::endl;
          
          
      }
      input.close();
    return 0;
  }
  
}
