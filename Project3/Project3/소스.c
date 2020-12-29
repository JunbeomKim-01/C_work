/*#include <stdio.h>
#include <stdlib.h>
#define NUMBER 3
double avrEng = 0.0;
double avrKore = 0.0;
double avrmath = 0.0;
double avrtotal = 0.0;

typedef struct shc {
    int num;//학번
    char name[30];//이름
    int GG;//국어
    int math;//수학
    int eng;//영어
    int total;//총점
    double avr;//평균
}Students;

void scan_f(){  //학생 성적 입력
    printf("");
    scanf("%d");
}

void print_all(Students *p[]) {//학생 출력
    for (int i = 0; i < NUMBER; i++)
        printf("%d %s %d %d %d %d %lf\n", p[i]->num, p[i]->name, p[i]->GG, p[i]->math, p[i]->eng, p[i]->total, p[i]->avr);
    printf("=====================================\n");
}

void free_all(Students* p) {//동적할당 해제
    free(p);
}

int main() {
    Students *p[NUMBER] = malloc(sizeof(Students) * NUMBER);
    printf("학번  이름 국어 영어 수학 총점\n");
    print_all(&p);

    printf("전체 평균 %lf %lf %lf %lf", avrKore, avrEng, avrmath, avrtotal);
    free_all(&p);
}
*/