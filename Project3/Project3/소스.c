/*#include <stdio.h>
#include <stdlib.h>
#define NUMBER 3
double avrEng = 0.0;
double avrKore = 0.0;
double avrmath = 0.0;
double avrtotal = 0.0;

typedef struct shc {
    int num;//�й�
    char name[30];//�̸�
    int GG;//����
    int math;//����
    int eng;//����
    int total;//����
    double avr;//���
}Students;

void scan_f(){  //�л� ���� �Է�
    printf("");
    scanf("%d");
}

void print_all(Students *p[]) {//�л� ���
    for (int i = 0; i < NUMBER; i++)
        printf("%d %s %d %d %d %d %lf\n", p[i]->num, p[i]->name, p[i]->GG, p[i]->math, p[i]->eng, p[i]->total, p[i]->avr);
    printf("=====================================\n");
}

void free_all(Students* p) {//�����Ҵ� ����
    free(p);
}

int main() {
    Students *p[NUMBER] = malloc(sizeof(Students) * NUMBER);
    printf("�й�  �̸� ���� ���� ���� ����\n");
    print_all(&p);

    printf("��ü ��� %lf %lf %lf %lf", avrKore, avrEng, avrmath, avrtotal);
    free_all(&p);
}
*/