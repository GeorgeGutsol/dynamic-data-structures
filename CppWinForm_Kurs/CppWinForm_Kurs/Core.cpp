#include "Header.h"
#include <io.h>
#include <iostream>
#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
//������������� �������
s_Auditory* new_Auditory(s_Auditory* Head)//������ ���������
{
	
	Head->next = Head;//��������� ������ �� ���� �������
	return Head;
}
s_Gruppa* new_Gruppa(s_Gruppa* Head)//������ �����
{
	Head->next = Head;
	return Head;
}
s_Raspisanie* new_Raspisanie(s_Raspisanie* Head)//������ ����������
{
	Head->next = Head;
	return Head;
}
s_Posechaemost* new_Posechaemost(s_Posechaemost* Head)//������ ������������
{
	Head->next = Head;
	return Head ;
}
s_Analyz* new_Analyz(s_Analyz* Head)//������ �������
{
	Head->next = Head;
	return Head;
}


//���������� ������ ��������
void Dob_Auditory(s_Auditory *audit,  Auditory data)//���������� ���������
{
	s_Auditory* au = new s_Auditory;//������� ��������� �� ������� ������
	au->next = audit->next;//��������� �� ������ ������� ������
	audit->next = au;//��������� �������������� �� ���������(�����) ������� ������
	au->data = data;//������������ ������
}
void Dob_Gruppa(s_Gruppa *grupp, Gruppa data)//���������� ������
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
s_Raspisanie* Dob_Raspisanie(s_Raspisanie* rasp, Raspisanie data, s_Auditory* audit, s_Gruppa* grup)//���������� ������
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
s_Posechaemost* Dob_Posechaemost(s_Posechaemost *pos,  Posechaemost data,s_Raspisanie* rasp )//���������� ������
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


//���������� �� �����
int Read_Auditory(s_Auditory* s_au, char *NameFile)//���������� ������ ���������
{
	FILE *f;//������� ���������� ��� �����
	fopen_s(&f, NameFile, "rt");//��������� ���� ��� ������
	while (!feof(f))//�������� �� ����� �����
	{
		Auditory p;//���������� ��� ���������
		FileAud(f, p);//��������� ������ � ���������� ��� ���������
		Dob_Auditory(s_au, p);//��������� � ������

	}
	fclose(f);//��������� ����
	return 0;
}
int Read_Gruppa(s_Gruppa* s_gr, char *NameFile)//���������� ������ �����
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
int Read_Rasp(s_Raspisanie* s_rasp, char *NameFile, s_Auditory* audit, s_Gruppa* grup)//���������� ������ ����������
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
int Read_Posech(s_Posechaemost* s_pos, char *NameFile, s_Raspisanie* rasp)//���������� ������ ������������
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
//��������������� ����������
void FileAud(FILE *f, Auditory &p)//���������
{
	fscanf(f, "%i", &p.nomer_a);
	fscanf(f, "%i", &p.vmestimost);
}
void FileGrup(FILE *f, Gruppa &p)//������
{
	fscanf(f, "%i", &p.nomer_g);
	fscanf(f, "%i", &p.kolvo_stud);
}
void FileRasp(FILE *f, Raspisanie &p)//����������
{
	fscanf(f, "%i", &p.kod_r);
	fscanf(f, "%i", &p.nomer_a);
    fscanf(f, "%i", &p.nomer_g);
	fscanf(f, "%s", p.den);
	fscanf(f, "%i", &p.time);
}
void FilePos(FILE *f, Posechaemost &p)//������������
{
	fscanf(f, "%i", &p.kod);
	fscanf(f, "%i", &p.dd);
	fscanf(f, "%i", &p.mm);
	fscanf(f, "%i", &p.kolvo);
}

//������ ������
void Poisk_Auditory(s_Auditory* ptr, int nomer_auditory,s_Auditory* result)//����� ��������� 											
{
	s_Auditory* p = ptr;//������� ��������� ������������ ��� �� ������� ������� �������
	result->data.nomer_a = -404;//����� ��������� ����� -404
	ptr = ptr->next;
	while (ptr!= p)//���� �� �������� �� ������� �������
	{
		if (ptr->data.nomer_a == nomer_auditory)//���� ����� ��������� ��������� � ���, ��� �� ����
		{
			//��������� ����� ���������� ��������
			result->next = ptr->next;
			result->data = ptr->data;
			break;//�����
		}
		ptr = ptr->next;//���� � ���������� ��������
	}
}
void Poisk_Grup(s_Gruppa* ptr, int nomer_grup, s_Gruppa* result)//����� ������																		 
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
void Poisk_Raspisanie(s_Raspisanie* ptr, int kod, s_Raspisanie* result)//����� ���������� 
																
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
void Poisk_Posechaemost(s_Posechaemost* ptr, int kod, s_Posechaemost* result)//������ ������������
																
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

//������
void showTreeVosr(Node*&Tree, s_Analyz* a)//����������� ����� ������ ������
{
	if (Tree != NULL)//��������� ��� ����� ����������
	{
		showTree(Tree->R, a);//���� � ������ �����
		Dob_Analyz(a, Tree->x->data);//��������� ������� � ������
		showTree(Tree->L, a);//���� � ����� �����
	}
}
//������
void showTree(Node*&Tree, s_Analyz* a)////����������� ����� ������ ������
{
	if (Tree != NULL)//��������� ��� ����� ����������
	{
		showTree(Tree->L,a);//���� � ����� �����
		Dob_Analyz(a, Tree->x->data);//��������� ������� � ������
		showTree(Tree->R,a);//���� � ������ �����

	}
}
void add_node(s_Analyz* x, Node*&MyTree)//�������� �����
{
	if (NULL == MyTree)//���� ����� �� ����������
	{
		MyTree = new Node;//������� �����
		MyTree->x = x;//���������� ������
		MyTree->L = NULL;//��������� ��������
		MyTree->R = NULL;//
	}
	if ((x->data.zagr - MyTree->x->data.zagr) <0)//���� ������, ������� ����� �������� ������ ...
	{
		if (MyTree->L!=NULL) add_node(x, MyTree->L);//���� � �������� ������, ������� ��
		else//�����
		{
			MyTree->L = new Node;//������� ����� �������
			MyTree->L->L = NULL;//��������� ��������
			MyTree->L->R = NULL;//
			MyTree->L->x = x;//��������� ������
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
void del(Node*&Tree)//������� ������
{
	if (Tree != NULL)//���� ������ �� ������
	{
		del(Tree->L);//������� ����� �����
		del(Tree->R);//������
		delete Tree;
		Tree = NULL;
	}
}

void Analyzirovat(s_Posechaemost* pos, int audit,int dd, int mm, int time, s_Analyz* analyz)//����� ��� �������
{
	s_Posechaemost* p = pos;//����� ���������(��������� ��� �����)
	pos = pos->next;//������� "�������"
	Analyz an;
	an.dd = dd;//��������� ������
	an.mm = mm;//
	an.nomer_a = audit;//
	an.time = time;//
	int sum = 0;//
	int teor = 0;//
	bool check = false;
	while (pos != p)//����
	{
		if (pos->data.dd == dd && pos->data.mm == mm && pos->link_r->data.nomer_a == audit && pos->link_r->data.time == time)//���� ����������� ������
		{
			an.den = pos->link_r->data.den;//��������� ������
			sum +=pos->data.kolvo;//
			teor = pos->link_r->link_a->data.vmestimost;//
			check = true;
		}
		pos = pos->next;//������� �������
	}
	if (teor == 0) teor = 1;
	an.zagr = (sum*100) /teor;//���� ������������� � ���������
	if (check) Dob_Analyz(analyz, an);
}

void Create_Posech(s_Posechaemost* pos,s_Raspisanie* rasp, int kod, int dd, int mm, int kolvo)//����� ��� �������� ������������ "�������"
{
	Posechaemost p ;//������� �����������
	p.kod = kod;//��������� ������
	p.dd = dd;//
	p.mm = mm;//
	p.kolvo = kolvo;//
	Dob_Posechaemost(pos, p, rasp);//��������� � ������
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

//������ �������� �������
void Del_El(s_Analyz* an)//�������� ��������
{
	s_Analyz* p;
	if (an != NULL)
	{
		p = an;
		an=an->next;
		delete(p);
	}
}

void Del_Spisok(s_Analyz* an, s_Analyz* Head)//�������� ������
{
	an = Head;
	an->next;
	while (an!=Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
void Del_El(s_Auditory* an)//�������� ��������
{
	s_Auditory* p;
	if (an != NULL)
	{
		p = an;
		an = an->next;
		delete(p);
	}
}

void Del_Spisok(s_Auditory* an, s_Auditory* Head)//�������� ������
{
	an = Head;
	an->next;
	while (an != Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
void Del_El(s_Gruppa* an)//�������� ��������
{
	s_Gruppa* p;
	if (an != NULL)
	{
		p = an;
		an = an->next;
		delete(p);
	}
}

void Del_Spisok(s_Gruppa* an, s_Gruppa* Head)//�������� ������
{
	an = Head;
	an->next;
	while (an != Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
void Del_El(s_Raspisanie* an)//�������� ��������
{
	s_Raspisanie* p;
	if (an != NULL)
	{
		p = an;
		an = an->next;
		delete(p);
	}
}

void Del_Spisok(s_Raspisanie* an, s_Raspisanie* Head)//�������� ������
{
	an = Head;
	an->next;
	while (an != Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
void Del_El(s_Posechaemost* an)//�������� ��������
{
	s_Posechaemost* p;
	if (an != NULL)
	{
		p = an;
		an = an->next;
		delete(p);
	}
}
void Del_Spisok(s_Posechaemost* an, s_Posechaemost* Head)//�������� ������
{
	an = Head;
	an->next;
	while (an != Head)
	{
		Del_El(an);
	}
	Del_El(Head);
}
