#include <stdlib.h>
#include <stdio.h>

int calculatemaxLED(int h);
int drawLED(int g);
int calculateRES(int f);
int main()
{
	int hours;
	int LEDs;
	
	printf("Put in the number of hours the light needs to be withstained \n");
	scanf("%i", &hours);
	LEDs = calculatemaxLED(hours);
	
	printf("The number of LEDs that can be used is: %i \n", LEDs);
	
	drawLED(LEDs);
	calculateRES(LEDs);
	return 0;
}

int calculatemaxLED(int h)
{
	int a,b,c; // a is going to the mA per hour
	           // b is going to be the number of parallel lines of LEDs we can have
		   // c is going to be the number of LEDs
	
	a = 1200 / h;
	
	b = a / 20;
	
	c = b * 5;
	
	return c;
}

int drawLED(int g)
{
	g = g / 5;
	int i;
	int l;
	for(i = 1; i <= g; i=i+1)
	{
	  printf("--|>|---|>|---|>|---|>|---|>|--\n");
	  if( i < g )
	  {
		printf("|                             |\n");
	  }
	}

}
int calculateRES(int f)
{
	f = f / 5;
 	double g;
	g = ((.5)*f) / 1.2;
	printf("The Resistor requirement is: %f \n", g);
	
}

