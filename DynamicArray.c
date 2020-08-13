#include "DynamicArray.h"
#include<stdio.h>
Dynamic_Array* Init_Array() {

	Dynamic_Array* myArray = (Dynamic_Array*)malloc(sizeof(Dynamic_Array));
	myArray->size = 0;
	myArray->capacity = 20;//default 
	myArray->pAddr = (int*)malloc(sizeof(int) * myArray->capacity);
	
	return myArray;
}

//insert
void PushBack_Array(Dynamic_Array* arr, int value) {
	if (arr == NULL) {
		return;
	}
	//judege space remain
	if (arr->size == arr->capacity) {
		//expand space
		//1:new space is double old
		int* newSpace = (int*)malloc(sizeof(int) * arr->capacity *2);
		//2:copy data
		memcpy(newSpace, arr->pAddr, arr->capacity * sizeof(int));
		//3:free old space
		free(arr->pAddr);
		//upadte capacity
		arr->capacity = arr->capacity * 2;
		arr->pAddr = newSpace;

	}
	//insert new element
	arr->pAddr[arr->size] = value;
	arr->size++;

}
//delete by pos //by value
void RemoveByPos_Array(Dynamic_Array* arr, int pos) {
	if (arr == NULL) {
		return;
	}
	if (pos < 0 || pos >= arr->size)return;
	for (int i = pos; i < arr->size; i++) { //question  here
		arr->pAddr[i] = arr->pAddr[i + 1];
	}
	arr->size--;

}
void RemoveByValue_Array(Dynamic_Array* arr, int value) {
	if (arr == NULL)return;
	int pos = Find_Array(arr, value);
	RemoveByPos_Array(arr, pos);
}

//find
int Find_Array(Dynamic_Array* arr, int value) {
	if (arr == NULL)return -1;
	int pos = -1;
		for (int i = 0; i < arr->size; i++) {
			if (arr->pAddr[i] == value) {
				pos = i;
				break;
			}
		}
	return pos;


}
//print
void PrintArray(Dynamic_Array* arr) {

	if (arr == NULL) {
		return;
	}
	for (int i = 0; i < arr->size; i++) {
		printf("[%d]==%d ", i,arr->pAddr[i]);

	}
	printf("\n");

}
//freespace
void FreeSpace_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	if (arr->pAddr != NULL) {
		free(arr->pAddr);
	}


}

//clear array
void Clear_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	arr->size = 0;

}
//get capacity
int Capacity_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	return arr->capacity;
}
//get size
int Size_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	return arr->size;
}
//fet value of array
int At_Array(Dynamic_Array* arr, int pos) {

	return arr->pAddr[pos];
}