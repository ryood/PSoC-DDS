/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <math.h>
#include "wavetable.h"

#define SAMPLE_CLOCK (48000.0f)

volatile uint32 phaseRegister;
volatile uint32 tuningWord;

#if 0
void DACSetVoltage(uint16 value)
{
	LDAC_PIN_Write(1u);
	SPIM_SpiUartWriteTxData((value >> 8) | 0x30);
	SPIM_SpiUartWriteTxData(value & 0xff);
	LDAC_PIN_Write(0u);
		
	while(0u == (SPIM_GetMasterInterruptSource() & SPIM_INTR_MASTER_SPI_DONE))
	{
		/* Wait while Master completes transfer */
	}
	
	/* Clear interrupt source after transfer completion */
	SPIM_ClearMasterInterruptSource(SPIM_INTR_MASTER_SPI_DONE);
}
#endif 

CY_ISR(TimerISR_Handler)
{
	// Caluclate Wave Value
	phaseRegister += tuningWord;

	// 32bitのphaseRegisterをテーブルの10bit(1024個)に丸める
	uint32 index = phaseRegister >> 22;
    uint16 waveValue = waveTableSine[index];
	
	//DACSetVoltage(waveValue);
    IDAC8_SetValue(waveValue >> 4); 
    
    SamplingTimer_ClearInterrupt(SamplingTimer_INTR_MASK_TC);
}

int main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    // 変数の初期化
	double waveFrequency = 1000.0f;
	tuningWord = waveFrequency * pow(2.0, 32) / SAMPLE_CLOCK;
    phaseRegister = 0;
    
    // コンポーネントの初期化
    SamplingTimer_Start(); 
    TimerISR_StartEx(TimerISR_Handler);
    IDAC8_Start();
        
    CyGlobalIntEnable;
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
