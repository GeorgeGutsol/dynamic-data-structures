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


struct Analyz //вспомогательная струткура
{
	int nomer_a;
	int dd;
	int mm;
	char* den = new char[50];
	int time;
	int zagr;
};

struct s_Analyz //вспомогательный список
{
	s_Analyz*next;
	Analyz data;
};

struct Node //дерево
{
	s_Analyz* x;
	Node *L, *R;
};
//Инициализация списков
s_Auditory* new_Auditory(s_Auditory* Head);/*список аудиторий*/
s_Gruppa* new_Gruppa(s_Gruppa* Head);//список групп
s_Raspisanie* new_Raspisanie(s_Raspisanie* Head);//список расписаний
s_Posechaemost* new_Posechaemost(s_Posechaemost* Head);//список посещаемости
s_Analyz* new_Analyz(s_Analyz* Head);

//Добавление одного элемента
void Dob_Auditory(s_Auditory *audit, Auditory data);//добавление аудитории
void Dob_Gruppa(s_Gruppa *grupp, Gruppa data);//добавление группы
void Dob_Analyz(s_Analyz* anal, Analyz data);
s_Raspisanie* Dob_Raspisanie(s_Raspisanie* rasp, Raspisanie data, s_Auditory* audit, s_Gruppa* grup);//добавление товара
s_Posechaemost* Dob_Posechaemost(s_Posechaemost *pos, Posechaemost data, s_Raspisanie* rasp);//добавление товара

//Считывание из файла
int Read_Auditory(s_Auditory* s_au, char *NameFile);//считывание списка аудиторий
int Read_Gruppa(s_Gruppa* s_gr, char *NameFile);//считывание списка групп
int Read_Posech(s_Posechaemost* s_pos, char *NameFile, s_Raspisanie* rasp);//считывание списка расписания
int Read_Rasp(s_Raspisanie* s_rasp, char *NameFile, s_Auditory* audit, s_Gruppa* grup);//считывания списка посещаемости
													   
//вспомогательное считывание
void FileAud(FILE *f, Auditory &p);//аудитории
void FileGrup(FILE *f, Gruppa &p);//группы
void FileRasp(FILE *f, Raspisanie &p);//расписания
void FilePos(FILE *f, Posechaemost &p);//посещаемости

//Методы поиска
void Poisk_Auditory(s_Auditory* ptr, int nomer_auditory, s_Auditory* result);//поиск аудитории 
void Poisk_Grup(s_Gruppa* ptr, int nomer_grup, s_Gruppa* result);//поиск группы
void Poisk_Raspisanie(s_Raspisanie* ptr, int kod, s_Raspisanie* result);//поиск расписания 
void Poisk_Posechaemost(s_Posechaemost* ptr, int kod, s_Posechaemost* result);//поиска посещаемости

void Create_Posech(s_Posechaemost* pos, s_Raspisanie* rasp, int kod, int dd, int mm, int kolvo);//Метод сзодания посещаемости "вручную"
void Create_Rasp(s_Raspisanie* rasp, s_Gruppa* gru, s_Auditory* s_au, int kod, int audit, int gruppa, char* den, int time);

//Методы для дерева
void add_node(s_Analyz* x, Node*&MyTree);//создание ветвей
void showTree(Node*&Tree, s_Analyz* a);//метод обхода
void showTreeVosr(Node*&Tree, s_Analyz* a);//метод обхода 2
void del(Node*&Tree);//удаление

void Analyzirovat(s_Posechaemost* pos, int audit, int dd, int mm, int time, s_Analyz* analyz);//метод для анализа

//Методы удаления
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