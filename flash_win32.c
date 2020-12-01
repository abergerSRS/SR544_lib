/* FLASH_WIN32.c */

#include "flash_kinetis.h"
#include "instrument.h"
#include "status.h"
#include <stdint.h>
#include <assert.h>

#define FLASH_SECTOR_SIZE   0x1000
#define FLASH_TOTAL_SIZE    0x00100000
#define FLASH_BLOCK_SIZE	0x00080000
#define CONFIG_0_ADDR       0x000F5000
#define NUM_CONFIG			10
#define SAVED_CAL_SIZE_BYTES (SAVED_CAL_STRUCT_SIZE_LWORDS*sizeof(uint32_t))

static uint8_t simulatedFlash[FLASH_BLOCK_SIZE];

void ReadFlashWords(uint32_t* destBuffer, uint32_t startAddress, size_t numWords)
{
	// Make sure start address in program flash block 2 (0x0008000 to 0x00FFFFF)
	if (startAddress < 0x0008000 || startAddress >= 0x00FFFFF) {
		RecordError(EXE_RECALL_FAILED);
	}

	// But the simulated flash starts at address 0
	startAddress -= FLASH_BLOCK_SIZE;
	memcpy(destBuffer, &simulatedFlash[startAddress], numWords * 4);
}

int WriteFlash(uint32_t* srcData, uint32_t destAddress, size_t numBytes)
{
	// Make sure destAddress in program flash block 2 (0x0008000 to 0x00FFFFF)
	if ((destAddress < 0x0008000) ||
		(destAddress >= 0x00FFFFF) ||
		(destAddress & 0x7 != 0)) {
		return EXE_SAVE_FAILED;
	}

	// But the simulated flash starts at address 0
	destAddress -= FLASH_BLOCK_SIZE;
	memcpy(&simulatedFlash[destAddress], (uint8_t*)srcData, numBytes);

	return 0;
}

uint32_t GetConfigAddress(int configNum)
{
	int32_t address = CONFIG_0_ADDR + (configNum)*FLASH_SECTOR_SIZE;
	assert(address < FLASH_TOTAL_SIZE);

	return address;
}

uint32_t GetCalAddress(void)
{
	// Cal data is stored 1 sector * before * config 0
	uint32_t address = CONFIG_0_ADDR - FLASH_SECTOR_SIZE;
	assert(address < FLASH_TOTAL_SIZE);

	return address;
}

void CalculateFlashStartAddr(void)
{
	// stub
}