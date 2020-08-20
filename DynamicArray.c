#include "DynamicArray.h"
#include<stdio.h>

ListNode* InitList() {
	ListNode* list = (ListNode*)malloc(sizeof(ListNode));
	list->next = NULL;
	return list;


}

void InsertList(ListNode* list, int val) {

	while (list->next != NULL)
	{
		list = list->next;


	}
	list->val = val;
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	list->next = newNode;
	newNode->val = 0;
	newNode->next = NULL;

}

void PrintfList(ListNode* list) {
	do
	{
		printf("==%d\n", list->val);
		list = list->next;


	} while (list->next != NULL);




}


