#pragma once
#include <string>

std::string removeLeadingSpaces(std::string line);
int countChar(std::string line, char c);
std::string indentline(std::string line,int count);
int unindent(std::string filename);
int printFile(std::string filename);
