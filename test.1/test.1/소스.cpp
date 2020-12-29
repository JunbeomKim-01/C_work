#include <stdio.h>

int main()
{
	printf("202004011\n김준범\n");
	char src[] = "The worst things to eat before you sleep";// 문자열을 배열로 받음
	char dst[100];//복사 받을 배열
	int i;
	printf("원본 문자열=%s\n", src);

	for (i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
	dst[i] = ' \0';//마지막 문자 공백

	printf("복사된 문자열=%s\n", dst);//출력
	return 0;
}