/*#include<stdio.h>
typedef struct yut {
	int x = 0;
}YUT;


int main() {
	int num = 0;
	YUT W, B;
	char place[21];

	for (int i = 0; i < 21; i++)
		place[i] = ' ';

	while (1)
	{
		printf("W값\n");
		scanf_s("%d",&num, 20);
		W.x = num;
		place[num] = 'w';
		for (int i = 0; i < 21; i++)
			printf("%c",place[i]);
			printf("\n");
		if (W.x == B.x)
			printf("W가 잡\n");

		printf("B값\n");
		scanf_s("%d",&num, 20);
		B.x = num;
		place[num] = 'b';
		for (int i = 0; i < 21; i++)
			printf("%c", place[i]);
		printf("\n");
		if (W.x == B.x)
			printf("B가 잡았다\n");
	}
}
*/