#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 12;
	int input;
	int count=0;
	
	do
	{
		printf("input a number :");
		scanf("%d", &input);
		if( input < answer)
		{
			printf("low!\n");
	    } 
		else if( input > answer)
		{
			printf("high!\n");
	    }	
		count++;	
		
    }
    
	
	while ( input != answer );
	
	printf("congratuation. trial : %i\n", count);
	return 0;
}
