/* FLASH_WIN32.c */

#include "flash_kinetis.h"
#include "instrument.h"
#include <stdint.h>

static uint32_t savedConfig[SAVED_CONFIG_SIZE][9];

void flashWrite(int configNum, uint32_t * configBuffer, unsigned int size)
{
	int i;
	for (i = 0; i < SAVED_CONFIG_SIZE; i++) {
		savedConfig[i][configNum-1] = configBuffer[i];
	}
}

void flashRead(int configNum, uint32_t * configBuffer, unsigned int size)
{
	int i;
	for (i = 0; i < SAVED_CONFIG_SIZE; i++) {
		configBuffer[i] = savedConfig[i][configNum-1];
	}
}

void CalculateFlashStartAddr(void)
{
	// stub
}