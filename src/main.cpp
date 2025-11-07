#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::string line;
  std::getline(std::cin,line);
  std::cout<<line<<": command not found" << std::endl;

  // TODO: Uncomment the code below to pass the first stage
  std::cout << "$ ";
}
