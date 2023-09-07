
#include <math.h>
#include <stdio.h>

int main(int argc, char** argv) 
{
	
	int i = 1;
	int u;
	int z=1;

	while(z<=10)
	{
			while(i<=10)
     	{
		printf("Digite un numero\n");
		scanf("%d", &u );
		if (u%2!=0)
	    	{
			printf("Este digito resulto ser impar :(\n\n");
		    }
		i++;
		
	    }
	    z++;
	}

	
	
	return 0;
}
