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
    const char str[] = "http://www[runoob]com";
    const char ch = '[';
    char* ret;

    ret = strchr(str, ch);

    printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);
    const char tag_name[] = "Program:MainProgram.datagrop1[439]";


    char* open_bracket = str;
    char* close_bracket = str;
    open_bracket = strchr(tag_name, '[');
    close_bracket = strchr(tag_name, ']');
    printf("\t\t\t\t\[==%s   ]==%s\n", open_bracket, close_bracket);
    char index_str[10];
    strcpy(index_str, open_bracket+1);
    int i;
    for (i = 0; index_str[i] != ']'; i++);
    index_str[i] = '\0';
    int index = atoi(index_str);
    char* index_temp;
    index_temp = open_bracket + 1;
    printf("indedx==%s\n", index_temp);
    //test01();
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
