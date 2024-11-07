#include <stdint.h>

uint32_t AAA = 90;

void	system_start(void)
{
  uint8_t a, b = 12, c = 23;

  a = b + c + AAA;
}
