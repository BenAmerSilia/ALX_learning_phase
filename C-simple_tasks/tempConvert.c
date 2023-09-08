#include <stdio.h>

int main(){
	int celsiusTemp, fahrenheitTemp;
	printf("Enter the temperature in celcius: \n");
	scanf("%f", &celsiusTemp);
	fahrenheitTemp = (celsiusTemp * 9/5) + 32 ;
	printf("The temperature in fahrenheit is : %.2f\n" , fahrenheitTemp);
	return 0;
}
