#pragma once
#include <cstdint>

/**
 * https://gbdev.io/pandocs/The_Cartridge_Header.html
 */
namespace CartridgeHeader
{
  constexpr uint16_t ENTRY_POINTS_START = 0x0100;
  constexpr uint16_t ENTRY_POINT_END = 0x0103;

  constexpr uint16_t NINTENDO_LOGO_START = 0x0104;
  constexpr uint16_t NINTENDO_LOGO_END = 0x0133;

  constexpr uint16_t TITLE_START = 0x0134;
  constexpr uint16_t TITLE_END_OLD = 0x0143;
  constexpr uint16_t TITLE_END_NEW = 0x013e;

  constexpr uint16_t MANUFACTURER_CODE_START = 0x013f;
  constexpr uint16_t MANUFACTURER_CODE_END = 0x0142;

  constexpr uint16_t CGB_FLAG = 0x0143;

  constexpr uint16_t NEW_LICENSEE_CODE_START = 0x0144;
  constexpr uint16_t NEW_LICENSEE_CODE_END = 0x0145;

  constexpr uint16_t SGB_FLAG = 0x0146;

  constexpr uint16_t CARTRIDGE_TYPE = 0x0147;

  constexpr uint16_t ROM_SIZE = 0x0148;

  constexpr uint16_t RAM_SIZE = 0x0149;

  constexpr uint16_t DESTINATION_CODE = 0x014A;

  constexpr uint16_t OLD_LICENSEE_CODE = 0x014B;

  constexpr uint16_t MASK_ROM_VERSION_NUMBER = 0x014c;

  constexpr uint16_t HEADER_CHECKSUM = 0x014d;

  constexpr uint16_t GLOBAL_CHECKSUM_START = 0x014e;
  constexpr uint16_t GLOBAL_CHECKSUM_END = 0x014f;
}