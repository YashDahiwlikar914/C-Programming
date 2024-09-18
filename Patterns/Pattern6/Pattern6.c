#include <stdio.h>
void main()
{
	int j, i;
	
	for(i = 0; i <= 4; i++)
	{
	  for(j = 0; j <=4; j++)
	  {
	    if(i == 0 || i == 4)
	    {
	      printf("*");
	    }
	    else
	    {
              if(j == 0 || j == 2 || j == 4)
	      {
	        printf(" ");
	      }
	      else
	      {
	        printf("*");
	      }  
	    }
	  }
	  printf("\n");
	  for(int s = 0; s <= i; s++)
	  {
	    printf(" ");
	  }
	}
}
