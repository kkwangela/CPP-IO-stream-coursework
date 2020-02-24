//
//  main.cpp
//  Assignment1
//
//  Created by rick gessner on 1/2/20.
//

#include <iostream>
#include "TextStreamWriter.hpp"
#include "TextStreamTokenizer.hpp"
#include "TextStreamLineReader.hpp"
#include "JSONStreamWriter.hpp"
#include "BinaryStreamWriter.hpp"


  //STUDENT: intialize this to point to root of your project folder...
const char* kWorkingFolderPath = "PATH_TO_YOUR_WORKING_FOLDER_HERE";
const int   kDefaultCount = 20;


void doTerminalIO() {
  //STUDENT: as user to enter name and age, then print a summary of both the terminal
}

int main(int argc, const char * argv[]) {
  std::cout << "Running tests..." << std::endl;
    
    //PART 1 -- simple user I/O...
  
  doTerminalIO();
  
    //PART 2 --
  
  ECE141::TextStreamWriter theTextWriter(kWorkingFolderPath, "numbers.txt");
  theTextWriter.run(kDefaultCount);
  
   //PART 3 --
  ECE141::TextStreamTokenizer theTokenReader(kWorkingFolderPath, "numbers.txt");
  theTokenReader.run();
  
   //PART 4 --
  ECE141::TextStreamLineReader theLineReader(kWorkingFolderPath, "numbers.txt");
  theLineReader.run();
   
   //PART 5 --
  ECE141::JSONStreamWriter theJSONWriter(kWorkingFolderPath, "aboutme.json");
  theJSONWriter.run();
   
   //PART 6 --
  ECE141::BinaryStreamWriter theBinaryWriter(kWorkingFolderPath, "blocks.bin");
  theBinaryWriter.run(kDefaultCount);
  
  return 0;
}
