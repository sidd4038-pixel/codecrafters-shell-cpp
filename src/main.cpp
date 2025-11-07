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
    if(line == "exit 0"){
      exit(0);
    }
    else if(line.substr(0,4) == "echo"){
      std::cout << line.substr(5) << std::endl;
      continue;
    }
    std::cout << line << ": command not found" << std::endl;
  }

  return 0;
}
