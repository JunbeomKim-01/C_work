#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
int mystrlen(const char* str){
    int cnt;
    //str[cnt]�� ���� ����(���� ����, '\0')�� ���� ������ cnt�� 1����
    for (cnt = 0; str[cnt]; cnt++);
    return cnt;
}
void pal(char* ptr, int len) {
    int count = 0;
    for (int i = 0; i < len / 2; i++) {
        //i��° �� ó���� �� ������ ���ڰ� ������ count�� ����
        if (ptr[i] == ptr[len - i - 1])
            count++;
        //���� ������ �ݺ��� Ż��
        else {
            printf("ȸ���� �ƴմϴ�.");
            break;
        }
    }
    //count���� len/2�� ���ƾ� ȸ��
    if (count == len / 2)
        printf("ȸ���Դϴ�.");
}

//���ڿ��� ���̸� �˷��ִ� �Լ�
int leng(char* ptr) {// �̰��Լ� ����� 
    int leng = 0;
    //null���ڸ� ���������� �ݺ�
    while (ptr[leng] != '\0')
        leng++;
    return leng;
}
int main()
{
    char word[30];               // �ܾ ������ �迭
    printf("�ܾ �Է��ϼ���: ");
    scanf("%s", word);
    pal(word, mystrlen(word));
}

