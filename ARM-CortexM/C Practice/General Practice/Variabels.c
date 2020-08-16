#include <stdio.h>
#include <stdbool.h>
#define tru 1
#define STM_AHB_BASE_Test (0x20080000UL)
#define GPIO3_BASE_Test (STM_AHB_BASE_Test+0x18060)
int volatile ali=0;
char aaa[1] = "A";
bool a = true;
bool b = 23;
int main(){

printf("%d\n",sizeof(aaa));
printf("%s\n",aaa);
printf("%x\n",&aaa);


}