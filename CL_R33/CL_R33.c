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
	printf("�\����data�^�̃T�C�Y�F%d�o�C�g\n",size);
}