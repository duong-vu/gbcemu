#include <iostream>
#include <vector>
#include "io.h"
#include "header.h"

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    std::cerr << "Usage: " << argv[0] << " path/to/rom\n";
    return 1;
  }
  const std::string filePath = argv[1];

  auto data = readBinaryFile(filePath);

  if (data.size() == 0)
  {
    std::cerr << "ROM file empty";
    return 1;
  }

  std::string title;
  const bool isNewCartridge = data[CartridgeHeader::CGB_FLAG] == 0x80 || data[CartridgeHeader::CGB_FLAG] == 0xc0;
  const auto titleEnd = isNewCartridge ? CartridgeHeader::TITLE_END_NEW : CartridgeHeader::TITLE_END_OLD;

  for (int i = CartridgeHeader::TITLE_START; i <= titleEnd; i++)
  {
    title += data[i];
  }

  std::cout << "Title: " << title << "\n";

  return 0;
}