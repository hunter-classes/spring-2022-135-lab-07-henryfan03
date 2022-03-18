#include <iostream>
#include "funcs.h"

int main() {
  std::cout << "Testing Remove Leading Spaces" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  std::cout << "removeLeadingSpaces('       int x = 1;  '): " << removeLeadingSpaces("       int x = 1;  ");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Testing Count Char" << std::endl;
  std::cout << "----------------------" << std::endl;
  std::cout << "countChar('abcdef','a'): " << countChar("abcdef",'a');
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Executing Pretty Typing Function" << std::endl;
  std::cout << "unindent('bad-code.cpp')" << std::endl;
  unindent("bad-code.cpp");
  std::cout << "Check 'good-code.cpp' file to see the changes" << std::endl;
  std::cout << std::endl;
  return 0;
}
