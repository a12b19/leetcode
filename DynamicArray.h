#pragma once




typedef struct DYNMICARRAY {
	int* pAddr;
	int size;
	int capacity;
}Dynamic_Array;

//init 
Dynamic_Array* Init_Array();

//insert
void PushBack_Array(Dynamic_Array* arr,int value);
//delete by pos //by value
void RemoveByPos_Array(Dynamic_Array* arr, int pos);
void RemoveByValue_Array(Dynamic_Array* arr, int value);

//find
int Find_Array(Dynamic_Array* arr, int value);
//print
void PrintArray(Dynamic_Array* arr);
//freespace
void FreeSpace_Array(Dynamic_Array* arr);
//clear array
void Clear_Array(Dynamic_Array* arr);
//get capacity
int Capacity_Array(Dynamic_Array* arr);
//get size
int Size_Array(Dynamic_Array* arr);
//fet value of array
int At_Array(Dynamic_Array* arr,int pos);



