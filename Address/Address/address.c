#define  _CRT_SECURE_NO_WARNINGS 1
#include"address.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset 内存设置
	memset(pc->data, 0, sizeof(pc->data));
}

void Addcontact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法再添加");
		return;
	}
	//增加一个人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("增加成功！\n");
}


void PrintContact(const Contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr );
	}
}

static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name)  == 0)
		{
			return i;
		}
	}

	return -1; //找不到的情况
}


void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除\n");
	}

	//1.查找要删除的人   有or没有
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc,name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}

	//2.删除
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("删除成功\n");
}


void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找联系人的名字;>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		//打印数据
		printf("%-10s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);

	}

}


void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改联系人的名字;>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}
}
