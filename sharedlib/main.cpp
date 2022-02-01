#include<stdio.h>
#include<stdlib.h>
#include"mymath.h"

int main(int argc, char* argv[])
{
	if(argc < 3){
		printf("please enter more arguments!");
		return -1;
	}
	printf("result is %d", my_add(atoi(argv[1]),atoi(argv[2])));
	return 0;
}
