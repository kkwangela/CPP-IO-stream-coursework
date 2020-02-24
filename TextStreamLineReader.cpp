//
//  TextStreamLineReader.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "TextStreamLineReader.hpp"
#include <string>
#include<sstream>

namespace ECE141 {
  
  TextStreamLineReader::TextStreamLineReader(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);
    //STUDENT construct your input stream here...
      
      input.open(thePath, std::ifstream::in);

  }
  
  int TextStreamLineReader::run(std::ostream &anOutput){
    
    //STUDENT: read each line in your input stream, parse the int's, write result to anOutput...
      int num1, num2;
      std::string theLine;
      while(std::getline(input, theLine)){
          std::istringstream iss(theLine);
          if (iss >> num1 >> num2){
          anOutput << num1 <<"+" << num2 << "=" << num1+num2 << std::endl;
          std::cout << num1 <<"+" << num2 << "=" << num1+num2 << std::endl;
      
      }
  }return 0;
  };
}
