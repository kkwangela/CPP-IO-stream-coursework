//
//  BinaryStreamWriter.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "BinaryStreamWriter.hpp"

namespace ECE141 {
  
  BinaryStreamWriter::BinaryStreamWriter(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);
    
    //STUDENT: open your output stream in binary mode...
      output.open(thePath, std::ios::out | std::ios::binary);
    
  }
  
  int BinaryStreamWriter::run(int aBlockCount, size_t aBlockSize) {
    
    //iterate for 1..aBlockCount
    //create a buffer of given size (aBlockSize)
    //fill the buffer with a unique char from alphabet...
    //write each block sequentially to binary stream...
      char input;
      input = 'A';
      for (int i = 0; i < aBlockSize; i++){
          
          int j = 0;
          char* buffer = new char[aBlockSize];
         
          while (j < aBlockSize){
              buffer[j] = input;
              j++;
          }
          input = input + (1);
          output.write(buffer, aBlockSize);
      }
    
    return 0;
  }
}
