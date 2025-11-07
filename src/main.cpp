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
      std::cout << line.substr(5) << '\n';
      continue;
    }
    else if(line.substr(0,4) == "type"){
      if(line.substr(5) == "echo" || line.substr(5) == "exit" || line.substr(5) == "type"){
        std::cout << line.substr(5) << " is a shell builtin" << '\n';
      }
      else std::cout << line.substr(5) << ": not found" << '\n';
      continue;
    }
    else{
      std::cout << line << ": command not found" << '\n';
    }
  }

  return 0;
}
