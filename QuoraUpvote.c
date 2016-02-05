#include <stdio.h>
#include <string.h>


int main(char arg)
{	
	int days;
	int windows;
	int index1;
	int index2;
	int index3;
	int index4;
	char buffer[7];
	char datahold[60][10];
	int numofWind;
	int noni;
	int nond;
	int finaloutcome;
	int arrayloc = 0;
	printf("Give me the number of days\n");
	scanf("%d",&days);
	
	printf("Give me the number of days in a window\n");
	scanf("%d",&windows);

	if(windows>days || windows <= 0)
	{
	  printf("Error, please input number of windows again");
	  scanf("%d",&windows);
	}
	
	FILE *fp;
	fp = fopen("UpvoteData.txt","r");
	numofWind = (days-windows+1);
	for(index2 = 0; index2 <= days; index2 = index2+1)
	{
		for(index1 = 0; index1 <= windows; index1 = index1+1)
		{
			fscanf(fp, "%s",buffer);
			//datahold[index1] = buffer;
			strcpy(datahold[index1], buffer);
		}
	}
		
	for(index3 = 0; index3 <= numofWind; index3 = index3+1)
	{	
		nond = 0;
		noni = 0;
		for(index4 = arrayloc; index4 <= (windows+arrayloc); index4 = index4+1)
		{
			if(datahold[index4] > datahold[index4+1])
			{
				noni = noni + 1;
			}
			else if(datahold[index4] < datahold[index4+1])	
			{
				nond = nond + 1;
			}
			else
			{
			
			}
		}
		finaloutcome = nond - noni;
		printf("The outcome is: %d \n",finaloutcome);
		arrayloc = arrayloc + 1;
		
	}

	
	return 0;
}
