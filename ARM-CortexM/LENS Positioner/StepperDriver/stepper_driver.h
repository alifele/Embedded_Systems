#include "stm32f1xx_hal.h"


typedef struct{
	
	GPIO_TypeDef * DIR;
	GPIO_TypeDef * ENB;
	GPIO_TypeDef * Step;
	
	uint8_t DIR_Pin;
	uint8_t ENB_Pin;
	uint8_t Step_pin;
	
	
} stepperDriver_typedef;

void init_stepperDriver(stepperDriver_typedef * stepperDriver_struct);
void setForward_stepperDriver(stepperDriver_typedef * stepperDriver_struct);
void setBackward_stepperDriver(stepperDriver_typedef * stepperDriver_struct);
void Enable_stepperDriver(stepperDriver_typedef * stepperDriver_struct);
void Disable_stepperDriver(stepperDriver_typedef * stepperDriver_struct);
void Move_OneStep_stepperDriver(stepperDriver_typedef * stepperDriver_struct);