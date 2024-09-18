#include <stdio.h>
void main()
{
	int j, i;
	
	for(i = 0; i <= 4; i++)
	{
	  for(j = 0; j <= i; j++)
	  {
	    printf("*");
	  }
	  printf("\n");
	}
}
