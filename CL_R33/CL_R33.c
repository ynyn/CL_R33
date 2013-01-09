#include <stdio.h>

struct data{
	int scoreA;
	int scoreB;
	int scoreC;
	char name[256];
};

void main(void){
	int size;
	size = sizeof(struct data);
	printf("構造体data型のサイズ：%dバイト\n",size);
}