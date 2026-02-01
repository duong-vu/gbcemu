#include <iostream>

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    std::cerr << "Usage: " << argv[0] << " path/to/rom\n";
    return 1;
  }
  std::cout << "Hello, " << argv[1] << "!\n";
  return 0;
}