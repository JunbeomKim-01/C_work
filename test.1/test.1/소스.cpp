#include <stdio.h>

int main()
{
	printf("202004011\n���ع�\n");
	char src[] = "The worst things to eat before you sleep";// ���ڿ��� �迭�� ����
	char dst[100];//���� ���� �迭
	int i;
	printf("���� ���ڿ�=%s\n", src);

	for (i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
	dst[i] = ' \0';//������ ���� ����

	printf("����� ���ڿ�=%s\n", dst);//���
	return 0;
}