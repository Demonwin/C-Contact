#define  _CRT_SECURE_NO_WARNINGS 1

//通讯录
// 1.通讯录中能够存放1000个人的信息（名字+年龄+性别+电话+地址）
// 2.增删修查 指定人的信息。
// 3.排序通讯录的信息。

#include<stdio.h>
#include"address.h"



void menu()
{
	printf("*********************************\n");
	printf("******   1.add     2.del   ******\n");
	printf("******   3.search  4.modify******\n");
	printf("******   5.sort    6.print ******\n");
	printf("******   0.text           *******\n");
	printf("*********************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main() 
{
	int input = 0;

	//创建通讯录
	Contact con;   //通讯录
	//初始化通讯录
	InitContact(&con); 
	do
	{
		menu();
		printf("请选择 :>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:     //增加人的信息
			Addcontact(&con);    //因为这些个函数会改变通讯录con，所以要传地址
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:

			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误,重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}