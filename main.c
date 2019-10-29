#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int grade[5];
	
	grade[0] = 50;
	grade[1] = 70;
	grade[2] = 90;
	grade[3] = 110;
	grade[4] = 130;
	
	for(i=0; i<5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	
	return 0;
}
