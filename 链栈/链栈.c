#include "stdio.h"
#include "stdlib.h"

typedef int Data;
//����ṹ��
typedef struct Lmq
{
    Data data;
    struct Lmq* next;
}LmqList;

// �˵�
void muan() {
    printf("\n\t         ��ջ    ");
    printf("\n\t=====================");
    printf("\n\t|     1--Ԫ�ؽ�ջ    |");
    printf("\n\t|     2--Ԫ�س�ջ    |");
    printf("\n\t|     3--ջ��Ԫ��    |");
    printf("\n\t|     4--ջ��Ԫ��    |");
    printf("\n\t|     5--����Ԫ��    |");
    printf("\n\t|     0--���ز˵�    |");
    printf("\n\t|     6-9�˳�ϵͳ    |");
    printf("\n\t=====================\n");

}
//��ʼ������
LmqList* initialize(){
    LmqList* head;
    head = (LmqList*)malloc(sizeof(LmqList));
    head->next = NULL;
    printf("��ʼ�����");
    return head;
}
// ��ջ
void jingzhan(LmqList* head) {
    LmqList* p;
    int i;
    p = (LmqList*)malloc(sizeof(LmqList));
    printf("������Ҫ��ջ��Ԫ��\n");
    scanf_s("%d",&p->data);
    p->next = head->next;
    head->next = p;
    printf("��ջ���\n");
}
// ��ջ
int outzhan(LmqList* head) {
    if (head->next == NULL) {
        printf("ջΪ��");
        return 0;
    }
    Data* x = head->next->data;
    head->next = head->next->next;
    printf("��ջ��Ԫ��Ϊ%2d\n",x);
    return x;
}
//ջ��Ԫ��
int floutzhandi(LmqList* head) {
    if (head->next == NULL) {
        printf("ջΪ��\n");
        return 0;
    }
    LmqList* p;
    p = head->next;
    while (p->next != NULL)
    {
        p = p->next;
        //printf("ջ��Ԫ��Ϊ%2d\n", p->data);
    }
    printf("ջ��Ԫ��Ϊ%2d\n", p->data);
    return 1;
    //for (p; p->next = NULL; p = p->next)
        //printf();

}
//ջ����Ԫ��
int morezhandi(LmqList* head) {
    if (head->next == NULL) {
        printf("ջΪ��\n");
        return 0;
    }
    LmqList* p;
    p = head->next;
    printf("ջ��Ԫ��Ϊ��");
    while (p->next != NULL)
    {
        printf("%2d", p->data);
        p = p->next;   
    }
    printf("%2d\n", p->data);
    return 1;
    //for (p; p->next = NULL; p = p->next)
        //printf();

}
// ��ʾջ��Ԫ��
int topzhanding(LmqList* head) {
    if (head->next == NULL) {
        printf("ջΪ��\n");
        return 0;
    }
    printf("ջ��Ԫ��Ϊ%2d\n", head->next->data);
    return 1;
}
main() {
    LmqList* L;
    L = initialize();
    char ch1 = 'y';
    int q;
    while (ch1=='y')
    {
        muan();
        scanf_s("%d",&q);
        getchar();
        switch (q)
        {
        case 1:jingzhan(L);
            break;
        case 2:
            outzhan(L);
            break;
        case 3:
            floutzhandi(L);
            break;
        case 4:
            topzhanding(L);
            break;
        case 5:
            morezhandi(L);
            break;
        case 0:
            break;
        default:
            ch1 = 'n';
            break;
        }
    }
}
