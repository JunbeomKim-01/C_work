#include <stdio.h>
#include<string>
enum chapson
{
	¹ß¶óµå = 1, ÈüÇÕ, ´í½º
}genre;
char* genre2[] = { "¹ß¶óµå","ÈüÇÕ","´í½º" };
typedef struct music {
	char title[30];
	char singer[30];
	enum chapson genre;
	int date;
} Music;

int main(void)
{
	printf("202004011 \n ±èÁØ¹ü \n ");
	Music m[3];
	for (int i = 0; i < 3; i++) {
		printf("\ntitle");
		gets_s(m[i].title, 30);

		printf("\singer");
		gets_s(m[i].singer, 30);;

		printf("\genre: 1.¹ß¶óµå 2.ÈüÇÕ 3.´í½º");
		int n;
		scanf_s("%d", &n);

		printf("\date");
		scanf_s("%d", m[i].date);
		strcpy(m[i].genre, genre2[n - 1]);
		getchar();
	}
}
