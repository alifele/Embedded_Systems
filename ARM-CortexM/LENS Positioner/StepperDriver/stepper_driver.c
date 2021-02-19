#include "stepper_driver.h"

void init_stepperDriver(stepperDriver_typedef * stepperDriver_struct){
	
	HAL_GPIO_WritePin(stepperDriver_struct->DIR, stepperDriver_struct->DIR_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(stepperDriver_struct->ENB, stepperDriver_struct->ENB_Pin, GPIO_PIN_RESET);
	
}


void setForward_stepperDriver(stepperDriver_typedef * stepperDriver_struct){
	HAL_GPIO_WritePin(stepperDriver_struct->DIR, stepperDriver_struct->DIR_Pin, GPIO_PIN_RESET);	
}

void setBackward_stepperDriver(stepperDriver_typedef * stepperDriver_struct){
	HAL_GPIO_WritePin(stepperDriver_struct->DIR, stepperDriver_struct->DIR_Pin, GPIO_PIN_SET);	
}

void Enable_stepperDriver(stepperDriver_typedef * stepperDriver_struct){
	HAL_GPIO_WritePin(stepperDriver_struct->ENB, stepperDriver_struct->ENB_Pin, GPIO_PIN_RESET);
}

void Disable_stepperDriver(stepperDriver_typedef * stepperDriver_struct){
	HAL_GPIO_WritePin(stepperDriver_struct->ENB, stepperDriver_struct->ENB_Pin, GPIO_PIN_SET);
}

void Move_OneStep_stepperDriver(stepperDriver_typedef * stepperDriver_struct){
		//HAL_GPIO_TogglePin(stepperDriver_struct->DIR, stepperDriver_struct->DIR_Pin);
	//HAL_GPIO_TogglePin(stepperDriver_struct->DIR, stepperDriver_struct->DIR_Pin);
	HAL_GPIO_WritePin(stepperDriver_struct->DIR, stepperDriver_struct->DIR_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(stepperDriver_struct->Step, stepperDriver_struct->Step_pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(stepperDriver_struct->Step, stepperDriver_struct->Step_pin, GPIO_PIN_SET);
	for (int i=0; i<500; i++){
		for (int j=0; j<1000; j++){
		}
	}
	HAL_GPIO_WritePin(stepperDriver_struct->Step, stepperDriver_struct->Step_pin, GPIO_PIN_RESET);
	
	//HAL_GPIO_TogglePin(stepperDriver_struct->DIR, stepperDriver_struct->DIR_Pin);


}