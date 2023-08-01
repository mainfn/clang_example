#include <stdint.h>
#include <stdio.h>

int main() {

  uint8_t u8;   // alias for unsigned char
  uint16_t u16; // alias for unsigned short
  uint32_t u32; // alias for unsigned int
  uint64_t u64; // alias for unsigned long long

  int8_t i8;   // alias for char
  int16_t i16; // alias for short
  int32_t i32; // alias for int
  int64_t i64; // alias for long long

  printf("u8 : %u\n", u8);
  printf("u16: %u\n", u16);
  printf("u32: %u\n", u32);
  printf("u64: %llu\n", u64);

  printf("i8 : %d\n", i8);
  printf("i16: %d\n", i16);
  printf("i32: %d\n", i32);
  printf("i64: %lld\n", i64);

  return 0;
}