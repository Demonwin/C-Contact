#define  _CRT_SECURE_NO_WARNINGS 1

//ͨѶ¼
// 1.ͨѶ¼���ܹ����1000���˵���Ϣ������+����+�Ա�+�绰+��ַ��
// 2.��ɾ�޲� ָ���˵���Ϣ��
// 3.����ͨѶ¼����Ϣ��

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

	//����ͨѶ¼
	Contact con;   //ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con); 
	do
	{
		menu();
		printf("��ѡ�� :>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:     //�����˵���Ϣ
			Addcontact(&con);    //��Ϊ��Щ��������ı�ͨѶ¼con������Ҫ����ַ
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
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}