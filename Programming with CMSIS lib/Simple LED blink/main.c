#include "stm32f10x.h" 


void delay(void);
int main(){
	GPIO_InitTypeDef GPIO_Struct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_Struct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Struct.GPIO_Pin = 1<<2;
	GPIO_Struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_Struct);
	
		while(1){
		GPIO_Write(GPIOC, 0xFFFF);
		delay();
		GPIO_Write(GPIOC, 0x0000);
			delay();
			
	}
	
	
	
		
		
	}
	
void delay(){
		int i , j ; 
			for (i=1; i<1000; i++){
				for (j = 1 ; j<1000; j ++ );
			}
			
		}
	
