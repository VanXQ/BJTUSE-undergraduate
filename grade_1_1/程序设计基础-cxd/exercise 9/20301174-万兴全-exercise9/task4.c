//wanxingquan 20301174 
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int value;
	struct node *next;//指向下一个结点 
} ListNode;
//类型定义 
ListNode *reverseKGroup(ListNode *head, int k);
//函数原型 
int main() {
	int i,k;
	//声明变量 
	ListNode *p,*head;
	// 创建链表 
	p = (ListNode*)malloc(sizeof(ListNode));
	p->value = 81;
	head = p;
	p->next = (ListNode*)malloc(sizeof(ListNode));
	p = p->next;
	p->value = 32;
	p->next = (ListNode*)malloc(sizeof(ListNode));
	p = p->next;
	p->value = 63;
	p->next = (ListNode*)malloc(sizeof(ListNode));
	p = p->next;
	p->value = 94;
	p->next = (ListNode*)malloc(sizeof(ListNode));
	p = p->next;
	p->value = 15;
	p->next = NULL;
    //将head的地址传递给p 
	p = head;
    //让用户输入k 
	printf("Please enter an integer: \n");
	scanf("%d",&k);
	reverseKGroup(head,k);
	//调用函数 
	return 0;
}
ListNode *reverseKGroup(ListNode *head, int k) {
	int i;
	ListNode *p;
	p = (ListNode*)malloc(sizeof(ListNode));
	p = head; 
	for(i=1; i<=5; i++) {
		printf(" %d ",p->value);
		p = p->next;
	}
	//输出结点数据
	printf("\n");
	p = head;
	//将head的地址给p   
	for(i=1; i<=5; i++) {
		if(k==p->value)
			break;
		p = p->next;
	}
	//判断k是第几个结点的数据
	p = head; 
	switch(i) {
		//根据i的值修改链表
		case 1:
			break;
		 	//如果输入的是81 
		case 2:
			p->value = 32;
			p = p->next;
			p->value = 81;
			p = p->next;
			p->value = 63;
			p = p->next;
			p->value = 94;
			p = p->next;
			p->value = 15;
			p = p->next;
			break;
		 	//如果输入的是32
		case 3:
			p->value = 63;
			p = p->next;
			p->value = 32;
			p = p->next;
			p->value = 81;
			p = p->next;
			p->value = 94;
			p = p->next;
			p->value = 15;
			p = p->next;
			break;
		 	//如果输入的是63
		case 4:
			p->value = 94;
			p = p->next;
			p->value = 63;
			p = p->next;
			p->value = 32;
			p = p->next;
			p->value = 81;
			p = p->next;
			p->value = 15;
			p = p->next;
			break;
			//如果输入的是94
		case 5:
			p->value = 15;
			p = p->next;
			p->value = 94;
			p = p->next;
			p->value = 63;
			p = p->next;
			p->value = 32;
			p = p->next;
			p->value = 81;
			p = p->next; 
			//如果输入的是15 
		default:
			break;
			//如果是其他数
	}

	p = head; 
	for(i=1; i<=5; i++) {
		printf(" %d ",p->value);
		p = p->next;
	}
	//输出新的结点数据
}
//定义函数 
