#include"delay.h"


void delay(unsigned int inter){
    int volatile counter;
    counter = 0u;
    while (counter<iter){
        counter += 1u;
    }
}
