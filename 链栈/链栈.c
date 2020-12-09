#include "stdio.h"
#include "stdlib.h"

typedef int Data;
//定义结构体
typedef struct Lmq
{
    Data data;
    struct Lmq* next;
}LmqList;

// 菜单
void muan() {
    printf("\n\t         链栈    ");
    printf("\n\t=====================");
    printf("\n\t|     1--元素进栈    |");
    printf("\n\t|     2--元素出栈    |");
    printf("\n\t|     3--栈底元素    |");
    printf("\n\t|     4--栈顶元素    |");
    printf("\n\t|     5--所有元素    |");
    printf("\n\t|     0--返回菜单    |");
    printf("\n\t|     6-9退出系统    |");
    printf("\n\t=====================\n");

}
//初始化队列
LmqList* initialize(){
    LmqList* head;
    head = (LmqList*)malloc(sizeof(LmqList));
    head->next = NULL;
    printf("初始化完成");
    return head;
}
// 进栈
void jingzhan(LmqList* head) {
    LmqList* p;
    int i;
    p = (LmqList*)malloc(sizeof(LmqList));
    printf("请输入要进栈的元素\n");
    scanf_s("%d",&p->data);
    p->next = head->next;
    head->next = p;
    printf("进栈完成\n");
}
// 出栈
int outzhan(LmqList* head) {
    if (head->next == NULL) {
        printf("栈为空");
        return 0;
    }
    Data* x = head->next->data;
    head->next = head->next->next;
    printf("出栈的元素为%2d\n",x);
    return x;
}
//栈底元素
int floutzhandi(LmqList* head) {
    if (head->next == NULL) {
        printf("栈为空\n");
        return 0;
    }
    LmqList* p;
    p = head->next;
    while (p->next != NULL)
    {
        p = p->next;
        //printf("栈底元素为%2d\n", p->data);
    }
    printf("栈底元素为%2d\n", p->data);
    return 1;
    //for (p; p->next = NULL; p = p->next)
        //printf();

}
//栈所有元素
int morezhandi(LmqList* head) {
    if (head->next == NULL) {
        printf("栈为空\n");
        return 0;
    }
    LmqList* p;
    p = head->next;
    printf("栈内元素为：");
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
// 显示栈顶元素
int topzhanding(LmqList* head) {
    if (head->next == NULL) {
        printf("栈为空\n");
        return 0;
    }
    printf("栈顶元素为%2d\n", head->next->data);
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
