/* MOTORDRIVE.c */

#include <stdint.h>

#include "motorDrive.h"

uint32_t getDDSphase(void) {
	return 0;
}

uint32_t degreesToDDSphase(float angle_deg) {
	return (uint32_t)((angle_deg/360)*UINT32_MAX);
}

#if 0
void setDDSFTW(DDS_t *DDS, float setFreq) {
	DDS->FTW = ( ((uint64_t)(1)<<(32+COUNT_POW)) / ((float)(CLOCK_GetFreq(kCLOCK_BusClk))) )*setFreq;
	// TODO: replace this with faster math once COUNT_POW is set to fixed value.
}

float getDDSFreq(DDS_t *DDS) {
	return 0.0f;
	//return DDS->FTW*(float)(CLOCK_GetFreq(kCLOCK_BusClk)) / ((uint64_t)(1)<<(32+COUNT_POW));
}
#endif

uint32_t freq_to_FTW(float setFreq, uint16_t FTMMOD_log2) {
	return 0;
	//return ( ((uint64_t)(1)<<(32+FTMMOD_log2)) / ((float)(CLOCK_GetFreq(kCLOCK_BusClk))) )*setFreq;
}

uint8_t get_N_outer(void) {
	return 0;
}

uint8_t get_N_inner(void) {
	return 0;
}

float get_shaftSpeed(void) {
	return 1.0f;
}
