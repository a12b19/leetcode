#pragma once


typedef  struct {
	int val;
	struct ListNode* next;
	
}ListNode;

ListNode* InitList();

void InsertList(ListNode* list, int val);

void PrintfList(ListNode* list);



