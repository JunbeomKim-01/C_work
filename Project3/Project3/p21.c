#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
int mystrlen(const char* str){
    int cnt;
    //str[cnt]가 거짓 문자(종료 문자, '\0')가 나올 때까지 cnt를 1증가
    for (cnt = 0; str[cnt]; cnt++);
    return cnt;
}
void pal(char* ptr, int len) {
    int count = 0;
    for (int i = 0; i < len / 2; i++) {
        //i번째 맨 처음과 맨 마지막 문자가 같으면 count값 증가
        if (ptr[i] == ptr[len - i - 1])
            count++;
        //같지 않으면 반복문 탈출
        else {
            printf("회문이 아닙니다.");
            break;
        }
    }
    //count값이 len/2와 같아야 회문
    if (count == len / 2)
        printf("회문입니다.");
}

//문자열의 길이를 알려주는 함수
int leng(char* ptr) {// 이거함수 써얒지 
    int leng = 0;
    //null문자를 만날때까지 반복
    while (ptr[leng] != '\0')
        leng++;
    return leng;
}
int main()
{
    char word[30];               // 단어를 저장할 배열
    printf("단어를 입력하세요: ");
    scanf("%s", word);
    pal(word, mystrlen(word));
}

