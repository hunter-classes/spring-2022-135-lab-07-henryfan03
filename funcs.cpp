#include <iostream>
#include <string>
#include <fstream>
#include <vector>

std::string removeLeadingSpaces(std::string line) {
  // int spaces = 0;
  int i = 0;
  while(isspace(line[i])) {
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

std::string indentline(std::string line,int count) {
  std::string newline = "";
  for (int i = 0;i < count;i++) {
    newline += "\t";
  }
  newline += line;
  return newline;
}

int unindent(std::string filename) {
  std::vector<std::string> newlines;
  int indentcount = 0;
  std::string newline;
  std::ifstream filein(filename);
  for (std::string line; std::getline(filein, line);)
  {
    newline = removeLeadingSpaces(line);
    newline = indentline(newline,indentcount);
    indentcount += countChar(newline,'{');
    indentcount -= countChar(newline,'}');
    newlines.push_back(newline);
  }
  filein.close();
  std::ofstream outputfile("good-code.cpp");
  for (int i = 0;i < newlines.size();i++) {
    outputfile << newlines[i] << "\n";
  }
  outputfile.close();
  return 0;
}

int printFile(std::string filename) {
  std::ifstream filein(filename);
  for (std::string line; std::getline(filein, line);)
  {
    std::cout << line << std::endl;
  }
  return 0;
}
