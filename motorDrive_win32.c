/* MOTORDRIVE_WIN32.c */

#include <stdint.h>

#include "motorDrive.h"

float torqueScale = 1.0f;
uint16_t rotorAdjust = 0;
float compScale = 1.0f;
uint32_t compAdjust = 0;

uint32_t motorFtmPdSpDnCnt = 0; // used during spin-down measurements
uint32_t ddsFtmPdSpDnCnt = 0;

uint8_t get_N_outer(void) {
	return 6;
}

uint8_t get_N_inner(void) {
	return 5;
}

float get_shaftSpeed(void) {
	return 10.0f;
}
