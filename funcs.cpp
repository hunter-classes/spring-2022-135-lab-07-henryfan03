#include <iostream>
#include <string>

std::string removeLeadingSpaces(std::string line) {
  // int spaces = 0;
  int i = 0;
  while(line[i] == ' ') {
    // spaces += 1;
    i += 1;
  }
  std::string result = line.substr(i,line.size());
  return result;
}

int countChar(std::string line, char c) {
  int count = 0;
  for (int i = 0;i < line.size();i++) {
    if (line[i] == c) {
      count += 1;
    }
  }
  return count;
}
