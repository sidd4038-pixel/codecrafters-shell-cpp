#include <iostream>
#include <string>

int main()
{
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while (true)
  {
    std::cout << "$ ";
    std::string line;
    std::getline(std::cin, line);
    if(line == "exit"){
      std::cout << "0" << std::endl;
      break;
    }
    std::cout << line << ": command not found" << std::endl;
  }

  return 0;
}
