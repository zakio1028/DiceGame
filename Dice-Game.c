#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	//Greetings part
	char str[10];
	printf("What is your name? ");
	scanf("%s" str);
	printf("Hello, %s!\n",str);
	
	//Rolling the dice part
  	int i,num=0,sum=0;
  	printf("Rolling the dice...\n");
	for (i = 1;i <= 2;i++) {
    		num=rand() % 6 + 1;
		printf("Die %d:%d\n",i,num);
    		sum+=num;
    		num=0;
	}
  	printf("Total value: %d\n", sum);

	return 0;
}
