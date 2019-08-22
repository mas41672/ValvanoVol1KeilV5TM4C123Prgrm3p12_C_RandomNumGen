// Program 3.12 Random Number Generator (LCG)
// C implementation
#include <stdint.h>  // C99 variables type
//#include "tm4c123gh6pm.h"

uint32_t M;
uint32_t n;

// Random number generator
// from Numerical Recipes
// by Press et. al
uint32_t Random(void){
	M  = 1664525*M
	    +1013904223;
	return(M);
}

int main(void){
	//uint32_t n;
	M = 1; // seed
	while(1){
		n = Random();
	}
}
