/*#include<stdio.h>

int count = 0;
void asd(int gfd[]) {
	int st = 0;
	int bol = 0;
	int user[4];
	printf("����� ����\n");
	count++;
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d",&user[i],30);
	}
	for (int i = 0; i < 3; i++) {
		if (user[i] == gfd[i]) {
			st++;
		}
		for(int e=0;e<3;e++)
			if (user[e] == gfd[i])
				bol++;
		
	}
	if (st == bol)
		bol = bol-st;
	printf("��Ʈ: %d ��: %d (Ƚ��:%d) \n", st, bol,count);
}

int main() {
	int ans[4];
	printf("3�ڸ�\n");
	
	for(int i=0;i<3;i++)
		scanf_s("%d",&ans[i],30);// 2 3 4 NULLL
	// for (int t = 0; t < 3; t++) printf("%d", ans[t]);



	while (count!=10)
	{
		asd(ans);
	}
	
}
*/