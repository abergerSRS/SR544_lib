/* MOTORDRIVE_WIN32.c */

#include <stdint.h>

#include "motorDrive.h"

uint8_t get_N_outer(void) {
	return 6;
}

uint8_t get_N_inner(void) {
	return 5;
}

float get_shaftSpeed(void) {
	return 10.0f;
}
