#include "Header.h"
#include <io.h>
#include <iostream>
#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
//Инициализация списков
s_Auditory* new_Auditory(s_Auditory* Head)//список аудиторий
{
	
	Head->next = Head;//указатель ставим на этот элемент
	return Head;
}
s_Gruppa* new_Gruppa(s_Gruppa* Head)//список групп
{
	Head->next = Head;
	return Head;
}
s_Raspisanie* new_Raspisanie(s_Raspisanie* Head)//список расписаний
{
	Head->next = Head;
	return Head;
}
s_Posechaemost* new_Posechaemost(s_Posechaemost* Head)//список посещаемости
{
	Head->next = Head;
	return Head ;
}
s_Analyz* new_Analyz(s_Analyz* Head)//список анализа
{
	Head->next = Head;
	return Head;
}


//Добавление одного элемента
void Dob_Auditory(s_Auditory *audit,  Auditory data)//добавление аудитории
{
	s_Auditory* au = new s_Auditory;//создаем указатель на элемент списка
	au->next = audit->next;//указатель на первый элемент списка
	audit->next = au;//указатель пердпоследнего на последний(новый) элемент списка
	au->data = data;//сопоставляем данные
}
void Dob_Gruppa(s_Gruppa *grupp, Gruppa data)//добавление группы
{
	s_Gruppa* au = new s_Gruppa;
	au->next = grupp->next;
	grupp->next = au;
	au->data = data;
}
void Dob_Analyz(s_Analyz* anal, Analyz data)
{
	s_Analyz* an = new s_Analyz;
	an->next = anal->next;
	anal->next = an;
	an->data = data;
}
s_Raspisanie* Dob_Raspisanie(s_Raspisanie* rasp, Raspisanie data, s_Auditory* audit, s_Gruppa* grup)//добавление товара
{
	s_Raspisanie* au = new s_Raspisanie;
	au->next = rasp->next;
	rasp->next = au;
	au->data = data;
	s_Auditory* result = new s_Auditory;
	Poisk_Auditory(audit, au->data.nomer_a, result);
	au->link_a = result;
	s_Gruppa* res1 = new s_Gruppa;
	Poisk_Grup(grup, au->data.nomer_g, res1);
	au->link_g = res1;
	return rasp;
}
s_Posechaemost* Dob_Posechaemost(s_Posechaemost *pos,  Posechaemost data,s_Raspisanie* rasp )//добавление товара
{
	s_Posechaemost* au = new s_Posechaemost;
	au->next = pos->next;
	pos->next = au;
	au->data = data;
	s_Raspisanie* result = new s_Raspisanie;
	Poisk_Raspisanie(rasp, au->data.kod, result);
	au->link_r = result;
	return pos;
}


//Считывание из файла
int Read_Auditory(s_Auditory* s_au, char *NameFile)//считывание списка аудиторий
{
	FILE *f;//создаем переменную для файла
	fopen_s(&f, NameFile, "rt");//открываем файл для чтения
	while (!feof(f))//проверка на конец файла
	{
		Auditory p;//переменная для аудитории
		FileAud(f, p);//считываем данные в переменную для аудитории
		Dob_Auditory(s_au, p);//добавляем в список

	}
	fclose(f);//закрываем файл
	return 0;
}
int Read_Gruppa(s_Gruppa* s_gr, char *NameFile)//считывание списка групп
{
	FILE *f;
	fopen_s(&f, NameFile, "rt");
	while (!feof(f))
	{
		Gruppa p;
		FileGrup(f, p);
		Dob_Gruppa(s_gr, p);
	}
	fclose(f);
	return 0;

}
int Read_Rasp(s_Raspisanie* s_rasp, char *NameFile, s_Auditory* audit, s_Gruppa* grup)//считывание списка расписания
{
	FILE *f;
	fopen_s(&f, NameFile, "rt");
	while (!feof(f))
	{
		Raspisanie p;
		FileRasp(f, p);
		s_rasp=Dob_Raspisanie(s_rasp, p,audit,grup);
	}
	fclose(f);
	return 0;
}
int Read_Posech(s_Posechaemost* s_pos, char *NameFile, s_Raspisanie* rasp)//считывания списка посещаемости
{
	FILE *f;
	fopen_s(&f, NameFile, "rt");
	while (!feof(f))
	{
		Posechaemost p;
		FilePos(f, p);
		s_pos=Dob_Posechaemost(s_pos, p, rasp);
	}
	fclose(f);
	return 0;
}
//вспомогательное считывание
void FileAud(FILE *f, Auditory &p)//аудитории
{
	fscanf(f, "%i", &p.nomer_a);
	fscanf(f, "%i", &p.vmestimost);
}
void FileGrup(FILE *f, Gruppa &p)//группы
{
	fscanf(f, "%i", &p.nomer_g);
	fscanf(f, "%i", &p.kolvo_stud);
}
void FileRasp(FILE *f, Raspisanie &p)//расписания
{
	fscanf(f, "%i", &p.kod_r);
	fscanf(f, "%i", &p.nomer_a);
    fscanf(f, "%i", &p.nomer_g);
	fscanf(f, "%s", p.den);
	fscanf(f, "%i", &p.time);
}
void FilePos(FILE *f, Posechaemost &p)//посещаемости
{
	fscanf(f, "%i", &p.kod);
	fscanf(f, "%i", &p.dd);
	fscanf(f, "%i", &p.mm);
	fscanf(f, "%i", &p.kolvo);
}

//Методы поиска
void Poisk_Auditory(s_Auditory* ptr, int nomer_auditory,s_Auditory* result)//поиск аудитории 											
{
	s_Auditory* p = ptr;//создаем указатель приравниваем его на элемент текущий элемент
	result->data.nomer_a = -404;//номер аудитории равен -404
	ptr = ptr->next;
	while (ptr!= p)//пока не вернемся на входной элемент
	{
		if (ptr->data.nomer_a == nomer_auditory)//если номер аудитории совпадает с тем, что мы ищем
		{
			//результат равен найденному элементу
			result->next = ptr->next;
			result->data = ptr->data;
			break;//выход
		}
		ptr = ptr->next;//идем к следующему элементу
	}
}
void Poisk_Grup(s_Gruppa* ptr, int nomer_grup, s_Gruppa* result)//поиск группы																		 
{
	s_Gruppa* p = ptr;
	result->data.nomer_g = -404;
	ptr = ptr->next;
	while (ptr!= p)
	{
		if (ptr->data.nomer_g == nomer_grup)
		{
			result->next = ptr->next;
			result->data = ptr->data;
			break;
		}
		ptr = ptr->next;
	}
}
void Poisk_Raspisanie(s_Raspisanie* ptr, int kod, s_Raspisanie* result)//поиск расписания 
																
{
	s_Raspisanie* p = ptr;
	result->data.kod_r = -404;
	ptr = ptr->next;
	while (ptr!= p)
	{
		if (ptr->data.kod_r == kod)
		{
			result->next = ptr->next;
			result->link_a = ptr->link_a;
			result->link_g = ptr->link_g;
			result->data = ptr->data;
			break;
		}
		ptr = ptr->next;
	}
}
void Poisk_Posechaemost(s_Posechaemost* ptr, int kod, s_Posechaemost* result)//поиска посещаемости
																
{
	s_Posechaemost* p = ptr;
	result->data.kod = -404;
	ptr = ptr->next;
	while (ptr!= p)
	{
		if (ptr->data.kod== kod)
		{
			result->next = ptr->next;
			result->link_r = ptr->link_r;
			result->data = ptr->data;
			break;
		}
		ptr = ptr->next;
	}
}

//Дерево
void showTreeVosr(Node*&Tree, s_Analyz* a)//рекрусивный метод обхода дерева
{
	if (Tree != NULL)//проверяем что ветвь существует
	{
		showTree(Tree->R, a);//идем в правую ветвь
		Dob_Analyz(a, Tree->x->data);//добавляем элемент в список
		showTree(Tree->L, a);//идем в левую ветвь
	}
}
//Дерево
void showTree(Node*&Tree, s_Analyz* a)////рекрусивный метод обхода дерева
{
	if (Tree != NULL)//проверяем что ветвь существует
	{
		showTree(Tree->L,a);//идем в левую ветвь
		Dob_Analyz(a, Tree->x->data);//добавляем элемент в список
		showTree(Tree->R,a);//идем в правую ветвь

	}
}
void add_node(s_Analyz* x, Node*&MyTree)//добавить ветвь
{
	if (NULL == MyTree)//если ветки не существует
	{
		MyTree = new Node;//создаем ветвь
		MyTree->x = x;//записываем данные
		MyTree->L = NULL;//описываем подветви
		MyTree->R = NULL;//
	}
	if ((x->data.zagr - MyTree->x->data.zagr) <0)//если данные, которые хотим добавить меньше ...
	{
		if (MyTree->L!=NULL) add_node(x, MyTree->L);//если у подветвь пустая, создаем ее
		else//иначе
		{
			MyTree->L = new Node;//создаем новую подветь
			MyTree->L->L = NULL;//описываем подветви
			MyTree->L->R = NULL;//
			MyTree->L->x = x;//заполняем данные
		}
		
	}
	if (x->data.zagr - MyTree->x->data.zagr>0)
	{
		if (MyTree->R != NULL)add_node(x, MyTree->R);
		else
		{
			MyTree->R= new Node;
			MyTree->R->L = NULL;
			MyTree->R->R = NULL;
			MyTree->R->x = x;
		}
	}
}
void del(Node*&Tree)//удаляем дерево
{
	if (Tree != NULL)//если дерево не пустое
	{
		del(Tree->L);//удаляем левую ветвь
		del(Tree->R);//правую
		delete Tree;
		Tree = NULL;
	}
}

void Analyzirovat(s_Posechaemost* pos, int audit,int dd, int mm, int time, s_Analyz* analyz)//метод для анализа
{
	s_Posechaemost* p = pos;//новый указатель(необходим для цикла)
	pos = pos->next;//смещаем "бегунок"
	Analyz an;
	an.dd = dd;//заполняем данные
	an.mm = mm;//
	an.nomer_a = audit;//
	an.time = time;//
	int sum = 0;//
	int teor = 0;//
	bool check = false;
	while (pos != p)//цикл
	{
		if (pos->data.dd == dd && pos->data.mm == mm && pos->link_r->data.nomer_a == audit && pos->link_r->data.time == time)//ищем необходимые данные
		{
			an.den = pos->link_r->data.den;//заполняем данные
			sum +=pos->data.kolvo;//
			teor = pos->link_r->link_a->data.vmestimost;//
			check = true;
		}
		pos = pos->next;//смещаем бегунок
	}
	if (teor == 0) teor = 1;
	an.zagr = (sum*100) /teor;//ищем загруженность в процентах
	if (check) Dob_Analyz(analyz, an);
}

void Create_Posech(s_Posechaemost* pos,s_Raspisanie* rasp, int kod, int dd, int mm, int kolvo)//метод для создания посещаемости "вручную"
{
	Posechaemost p ;//элемент посещаемсть
	p.kod = kod;//добавляем данные
	p.dd = dd;//
	p.mm = mm;//
	p.kolvo = kolvo;//
	Dob_Posechaemost(pos, p, rasp);//добавляем в список
}

void Create_Rasp(s_Raspisanie* rasp, s_Gruppa* gru, s_Auditory* s_au, int kod, int audit, int gruppa, char* den, int time)
{
	Raspisanie r;
	r.kod_r = kod;
	r.nomer_a = audit;
	r.nomer_g = gruppa;
	r.den = den;
	r.time = time;
	Dob_Raspisanie(rasp, r, s_au, gru);
}

//Методы удаления списков
void Del_El(s_Analyz* an)//удаление элемента
{
	s_Analyz* p;
	if (an != NULL)
	{
		p = an;
		an=an->next;
		delete(p);
	}
}

void Del_Spisok(s_Analyz* an, s_Analyz* Head)//удаление списка
{
	an = Head;
	an->next;
	while (an!=Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
void Del_El(s_Auditory* an)//удаление элемента
{
	s_Auditory* p;
	if (an != NULL)
	{
		p = an;
		an = an->next;
		delete(p);
	}
}

void Del_Spisok(s_Auditory* an, s_Auditory* Head)//удаление списка
{
	an = Head;
	an->next;
	while (an != Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
void Del_El(s_Gruppa* an)//удаление элемента
{
	s_Gruppa* p;
	if (an != NULL)
	{
		p = an;
		an = an->next;
		delete(p);
	}
}

void Del_Spisok(s_Gruppa* an, s_Gruppa* Head)//удаление списка
{
	an = Head;
	an->next;
	while (an != Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
void Del_El(s_Raspisanie* an)//удаление элемента
{
	s_Raspisanie* p;
	if (an != NULL)
	{
		p = an;
		an = an->next;
		delete(p);
	}
}

void Del_Spisok(s_Raspisanie* an, s_Raspisanie* Head)//удаление списка
{
	an = Head;
	an->next;
	while (an != Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
void Del_El(s_Posechaemost* an)//удаление элемента
{
	s_Posechaemost* p;
	if (an != NULL)
	{
		p = an;
		an = an->next;
		delete(p);
	}
}
void Del_Spisok(s_Posechaemost* an, s_Posechaemost* Head)//удаление списка
{
	an = Head;
	an->next;
	while (an != Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
