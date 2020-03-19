#include "hal_fsl.h"
#include <stdlib.h>
/*
#include "fsl_dac.h"
#include "fsl_ftm.h"
#include "fsl_clock.h"

#define DAC0_BASEADDR 	DAC0 //((DAC_Type *)0x400C.C000)
#define DAC1_BASEADDR 	DAC1 //((DAC_Type *)0x400C.D000u)
#define FTM_FOR_EXTSYNC	FTM0 //((FTM_Type *)0x4003.8000u)
#define FTM_FOR_QUADENC	FTM2 //((FTM_Type *)0x4003.A000u)
*/

void DAC_Setup(void)
{

}

void EnableDACbuffers(bool enable)
{
	/*
	DAC_EnableBuffer(DAC0_BASEADDR, enable);
	DAC_EnableBuffer(DAC1_BASEADDR, enable);
	*/
}

void SetDACoutput(uint16_t value)
{
	/*
	DAC_SetBufferValue(DAC0_BASEADDR, 0, value);
	DAC_SetBufferValue(DAC1_BASEADDR, 0, value);
	*/
}

void SetDACtoInitValues(void)
{

}

void EnableExtSyncInterrupt(bool enable)
{
	/*
	if(enable) {
		FTM_EnableInterrupts(FTM_FOR_EXTSYNC, kFTM_Chnl0InterruptEnable);
	} else {
		FTM_DisableInterrupts(FTM_FOR_EXTSYNC, kFTM_Chnl0InterruptEnable);
	}
	*/
}

void EnableAcSyncInterrupt(bool enable) {}

void EnableOuterEdgeInterrupt(bool enable) {}

void EnableInnerEdgeInterrupt(bool enable) {}

uint32_t get_FTMClockFreq(void)
{
	/*
	return CLOCK_GetFreq(kCLOCK_BusClk);
	*/
	return 60000000; // 60 MHz
}

uint32_t getShaftEncoderCount(void)
{
	/*
	return FTM_GetQuadDecoderCounterValue(FTM_FOR_QUADENC);
	*/
	return rand() % 100;
}

uint32_t ReadCnSCRegister(uint8_t channelNum)
{
	return 0;
}

void WriteCnSCRegister(uint8_t channelNum, uint32_t reg)
{

}

void WriteCnVRegister(uint8_t channelNum, uint32_t CnV)
{

}

void SetSWSyncTrigger(void)
{

}

void SelectInputEdge(syncEdge_e edge)
{

}

void EnableAllEncEdges(bool enable)
{

}


uint8_t DisableIRQsLowerThan(uint8_t level)
{
	return 15;
}

void EnableIRQsLowerThan(uint8_t level)
{

}

void EnableFrontPanel(bool enable) {}
void DisallowButtonPress(void) {}

void AllowButtonPress(void)
{
	// Stub
}

void ToggleHeartbeatLED(void)
{
	// Stub
}

void EnableRelayDriver(void) {}
void DisableRelayDriver(void) {}
void ConfigureRelayForTTL(void) {}
void ConfigureRelayForSine(void) {}
void ToggleBuzzer(void) {}
void EnableChopHead(bool enable) {}
void PulseChopSwitchCtrl(void) {}
void EnableCurrentSource(bool enable) {}

void ConfigureAllSpiPcs(void) {}
void ExecuteSpiTransfer(uint8_t *TxData, uint8_t *RxData, uint8_t numBytes, uint32_t chipSelect)
{
	// Stub
}

void EnableI2C(bool enable) {}
int32_t ExecuteI2CTransfer(void) { return 0; }
void InitializeI2CTransfer(void) {}
void SetTransferFlags(uint32_t flags) {}
void SetSlaveAddress(uint8_t address) {}
void SetDirectionAsWrite(void) {}
void SetDirectionAsRead(void) {}
void SetWordAddress(uint32_t wordAddress) {}
void SetWordAddressSize(uint8_t size) {}
void SetBufferPointer(uint8_t *volatile bufferPtr) {}
void SetBufferSize(uint32_t size) {}
void ResetI2C(void) {}


uint32_t CalculateCrc32(uint32_t *data, uint32_t dataLengthBytes)
{
	return 0xFFFFFFFF;
}

void InitiateADCconversion(void) {}
void SetADCconversionIsReady(void) {}
void ClearADCconversionIsReady(void) {}
bool IsADCconversionReady(void) { return true; }
void SaveADCValue(void) {}
uint32_t GetADCLatestValue(void) { return 0; }


