/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int total;
typedef struct shil{
	char name[30];
	char cate[30];
	int count;
	int val;
}STUDENT;
void add(STUDENT* p) {
	printf("add\n");
	char dasd[100];
	printf("이름 입력\n");
	gets_s(dasd, 30);
	strcpy(p[0].name, dasd);
	printf("%s", p[0].name);
}
void modify(STUDENT* p) {
	printf("modify\n");
}
void title(STUDENT*p) {
	printf("title\n");
}
void delet(STUDENT* p) {
	printf("delet\n");
}

int main() {
	int num;
	STUDENT *soi[3];
	void (*soe[6])(STUDENT*) = {add,modify,title,delet };

	for (int i = 0; i < sizeof(soi) / sizeof(STUDENT*); i++)
		soi[i] = malloc(sizeof(STUDENT));

	while (1)
	{
		printf("1.추가 2.수정 3.품목 4.삭제\n");
		scanf_s("%d", &num, 10);
		soe[num - 1](soi);
		
	}

}*/