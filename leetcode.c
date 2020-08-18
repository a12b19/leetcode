// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "DynamicArray.h"

void test01() {

	Dynamic_Array* myArray = Init_Array();
	for (int i = 0; i < 30; i++) {
		PushBack_Array(myArray, i);
	}
	PrintArray(myArray);

	RemoveByPos_Array(myArray, 0);
	RemoveByValue_Array(myArray, 19);

	PrintArray(myArray);
	Find_Array(myArray, 6);

	//delete
	FreeSpace_Array(myArray);
}
int main()
{
	unsigned char buff[4];
	unsigned char buff_out[4];

	unsigned int bit_array;
	buff[0] = 0x01;
	buff[1] = 0x00;
	buff[2] = 0x00;
	buff[3] = 0x00;

	bit_array = 0;
	bit_array |= buff[0];
	bit_array |= buff[1] << 8;
	bit_array |= buff[2] << 16;
	bit_array |= buff[3] << 24;
	unsigned char* temp;
	temp = (unsigned char*)&bit_array;
	//unsigned int mask = 0xffffff00;
	//memcpy(buff, &bit_array, 4*sizeof(unsigned char));
	//memcpy(&bit_array, buff_out, 4*sizeof(unsigned char));
	//buff_out[0] =  bit_array & 0xff;
	//buff_out[1] = (bit_array>>8) & 0xff;
	//buff_out[2] = (bit_array >> 16) & 0xff;
	//buff_out[3] = (bit_array >> 24) & 0xff;
	//buff_out[0] = *(temp + 0);
	//buff_out[1] = *(temp + 1);
	//buff_out[2] = *(temp + 2);
	//buff_out[3] = *(temp + 3);


	int a = 8;
	int n = a % 16;

	

	while (1)
	{
		
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
