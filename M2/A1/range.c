#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(int argc, char const *argv[])
{
	printf("Character Min Value:%d\n",CHAR_MIN);
	printf("Character Max Value:%d\n",CHAR_MAX);
	printf("Integer Min Value: %d\n",INT_MIN);
	printf("Integer Max Value: %d\n",INT_MAX);
	printf("Long Min Value: %ld\n",LONG_MIN);
	printf("Long Min Value: %ld\n",LONG_MAX );
	printf("Float Min Value: %f\n",FLT_MIN);
	printf("Float Max Value: %f\n",FLT_MAX);
	printf("Double Min Value: %lf\n",DBL_MIN);
	printf("Double Max Value: %f\n",DBL_MAX);
	return 0;
}