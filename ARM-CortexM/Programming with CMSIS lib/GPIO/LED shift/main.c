#include <stm32f10x.h>
void delay(void);
int main(){
	GPIO_InitTypeDef GPIO_Struct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	
	GPIO_Struct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Struct.GPIO_Pin = 0xFFFF;
	GPIO_Struct.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOC, &GPIO_Struct);
int i;
uint16_t N;
while(1){
	N = 0x8000;
	for(i=0;i<15;i++){
	GPIO_Write(GPIOC, N);
		delay();
		N = N >> 1;
	}
	for(i=0;i<15;i++){
		N = N << 1;
	GPIO_Write(GPIOC, N);
		delay();
		
	}
}	
}

void delay(void){
	int i,j;
	for(i=0;i<200;i++){
		for(j=0;j<500;j++);
	}
	
}

