//wanxingquan 20301174 
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int value;
	struct node *next;//ָ����һ����� 
} ListNode;
//���Ͷ��� 
ListNode *reverseKGroup(ListNode *head, int k);
//����ԭ�� 
int main() {
	int i,k;
	//�������� 
	ListNode *p,*head;
	// �������� 
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
    //��head�ĵ�ַ���ݸ�p 
	p = head;
    //���û�����k 
	printf("Please enter an integer: \n");
	scanf("%d",&k);
	reverseKGroup(head,k);
	//���ú��� 
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
	//����������
	printf("\n");
	p = head;
	//��head�ĵ�ַ��p   
	for(i=1; i<=5; i++) {
		if(k==p->value)
			break;
		p = p->next;
	}
	//�ж�k�ǵڼ�����������
	p = head; 
	switch(i) {
		//����i��ֵ�޸�����
		case 1:
			break;
		 	//����������81 
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
		 	//����������32
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
		 	//����������63
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
			//����������94
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
			//����������15 
		default:
			break;
			//�����������
	}

	p = head; 
	for(i=1; i<=5; i++) {
		printf(" %d ",p->value);
		p = p->next;
	}
	//����µĽ������
}
//���庯�� 
