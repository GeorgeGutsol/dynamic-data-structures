#define Kurs
#ifdef Kurs
#include <iostream>
#include "io.h"
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <string>
#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

struct Auditory
{
	int nomer_a;
	int vmestimost;
};
struct Gruppa
{
	int nomer_g;
	int kolvo_stud;
};
struct Raspisanie
{
	int kod_r;
	int nomer_g;
	int nomer_a;
	char* den=new char[50];
	int time;
};
struct Posechaemost
{
	int kod;
	int dd;
	int mm;
	int kolvo;
};
struct s_Auditory
{
	s_Auditory *next;
	Auditory data;
};
struct s_Gruppa
{
	s_Gruppa *next;
	Gruppa data;
};

struct s_Raspisanie
{
	s_Raspisanie *next;
	s_Auditory* link_a;
	s_Gruppa* link_g;
	Raspisanie data;
};
struct s_Posechaemost
{
	s_Raspisanie* link_r;
	s_Posechaemost *next;
	Posechaemost data;
};


struct Analyz //��������������� ���������
{
	int nomer_a;
	int dd;
	int mm;
	char* den = new char[50];
	int time;
	int zagr;
};

struct s_Analyz //��������������� ������
{
	s_Analyz*next;
	Analyz data;
};

struct Node //������
{
	s_Analyz* x;
	Node *L, *R;
};
//������������� �������
s_Auditory* new_Auditory(s_Auditory* Head);/*������ ���������*/
s_Gruppa* new_Gruppa(s_Gruppa* Head);//������ �����
s_Raspisanie* new_Raspisanie(s_Raspisanie* Head);//������ ����������
s_Posechaemost* new_Posechaemost(s_Posechaemost* Head);//������ ������������
s_Analyz* new_Analyz(s_Analyz* Head);

//���������� ������ ��������
void Dob_Auditory(s_Auditory *audit, Auditory data);//���������� ���������
void Dob_Gruppa(s_Gruppa *grupp, Gruppa data);//���������� ������
void Dob_Analyz(s_Analyz* anal, Analyz data);
s_Raspisanie* Dob_Raspisanie(s_Raspisanie* rasp, Raspisanie data, s_Auditory* audit, s_Gruppa* grup);//���������� ������
s_Posechaemost* Dob_Posechaemost(s_Posechaemost *pos, Posechaemost data, s_Raspisanie* rasp);//���������� ������

//���������� �� �����
int Read_Auditory(s_Auditory* s_au, char *NameFile);//���������� ������ ���������
int Read_Gruppa(s_Gruppa* s_gr, char *NameFile);//���������� ������ �����
int Read_Posech(s_Posechaemost* s_pos, char *NameFile, s_Raspisanie* rasp);//���������� ������ ����������
int Read_Rasp(s_Raspisanie* s_rasp, char *NameFile, s_Auditory* audit, s_Gruppa* grup);//���������� ������ ������������
													   
//��������������� ����������
void FileAud(FILE *f, Auditory &p);//���������
void FileGrup(FILE *f, Gruppa &p);//������
void FileRasp(FILE *f, Raspisanie &p);//����������
void FilePos(FILE *f, Posechaemost &p);//������������

//������ ������
void Poisk_Auditory(s_Auditory* ptr, int nomer_auditory, s_Auditory* result);//����� ��������� 
void Poisk_Grup(s_Gruppa* ptr, int nomer_grup, s_Gruppa* result);//����� ������
void Poisk_Raspisanie(s_Raspisanie* ptr, int kod, s_Raspisanie* result);//����� ���������� 
void Poisk_Posechaemost(s_Posechaemost* ptr, int kod, s_Posechaemost* result);//������ ������������

void Create_Posech(s_Posechaemost* pos, s_Raspisanie* rasp, int kod, int dd, int mm, int kolvo);//����� �������� ������������ "�������"
void Create_Rasp(s_Raspisanie* rasp, s_Gruppa* gru, s_Auditory* s_au, int kod, int audit, int gruppa, char* den, int time);

//������ ��� ������
void add_node(s_Analyz* x, Node*&MyTree);//�������� ������
void showTree(Node*&Tree, s_Analyz* a);//����� ������
void showTreeVosr(Node*&Tree, s_Analyz* a);//����� ������ 2
void del(Node*&Tree);//��������

void Analyzirovat(s_Posechaemost* pos, int audit, int dd, int mm, int time, s_Analyz* analyz);//����� ��� �������

//������ ��������
void Del_El(s_Analyz* an);
void Del_Spisok(s_Analyz* an, s_Analyz* Head);
void Del_El(s_Auditory* an);
void Del_Spisok(s_Auditory* an, s_Auditory* Head);
void Del_El(s_Gruppa* an);
void Del_Spisok(s_Gruppa* an, s_Gruppa* Head);
void Del_El(s_Raspisanie* an);
void Del_Spisok(s_Raspisanie* an, s_Raspisanie* Head);
void Del_El(s_Posechaemost* an);
void Del_Spisok(s_Posechaemost* an, s_Posechaemost* Head);
#endif // Kurs