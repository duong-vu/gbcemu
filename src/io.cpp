#include "io.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <filesystem>

std::vector<uint8_t> readBinaryFile(const std::string &filePath)
{
  std::ifstream file(filePath, std::ios::binary);

  if (!file.is_open())
  {
    std::cerr << "Error opening file: " << filePath;
    return {};
  }

  auto fileSize = std::filesystem::file_size(filePath);

  std::vector<uint8_t> data(fileSize);

  file.read(reinterpret_cast<char *>(data.data()), fileSize);

  file.close();

  return data;
}