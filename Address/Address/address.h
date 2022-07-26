#pragma once



#include<string.h>
#include<stdio.h>

#define MAX_NAME 20    // ������Щ��Ϊ�˷����޸��Ժ�Ҫ�ı������
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADD 12

#define MAX 1000



//���Ͷ���  ����ͷ�ļ�������Ϊ���������ļ����������õ�

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADD];
}PeoInfo;

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];  //�����ӽ����˵���Ϣ
	int sz;  //��¼���ǵ�ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;


//��ʼ��ͨѶ¼����������
void InitContact(Contact* pc);

//����һ���˵���Ϣ
void Addcontact(Contact* pc);

//��ӡ��ϵ����Ϣ
void PrintContact(const Contact* pc);

//ɾ����ϵ�˵���Ϣ
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);