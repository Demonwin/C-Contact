#pragma once



#include<string.h>
#include<stdio.h>

#define MAX_NAME 20    // 定义这些是为了方便修改以后要改变的数据
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADD 12

#define MAX 1000



//类型定义  放在头文件中是因为另外两个文件反正会引用到

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADD];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];  //存放添加进来人的信息
	int sz;  //记录的是当前通讯录中有效信息的个数
}Contact;


//初始化通讯录函数的声明
void InitContact(Contact* pc);

//增加一个人的信息
void Addcontact(Contact* pc);

//打印联系人信息
void PrintContact(const Contact* pc);

//删除联系人的信息
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);