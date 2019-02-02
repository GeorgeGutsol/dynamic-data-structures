#include "Header.h"
#include <io.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	s_Auditory* s_auHead=new s_Auditory;
	s_Auditory* s_au = new s_Auditory;
	//�������� ������������� ���������
	s_au=new_Auditory(s_auHead);
	//�������� ������� ���������� ���������
	Read_Auditory(s_au, "Auditoria.txt");
	cout << "������ ���������"<<endl;
	int i = 0;
	while (s_au != s_auHead)
	{
		cout << s_au->data.nomer_a<<endl;
		s_au = s_au->next;
	}
	
	
	s_Gruppa* s_grHead = new s_Gruppa;
	s_Gruppa* s_gr = new s_Gruppa;
	//�������� ������������� ������ �����
	s_gr = new_Gruppa(s_grHead);
	//�������� ������� ���������� �����
	Read_Gruppa(s_gr, "Groups.txt");
	s_gr = s_gr->next;
	cout << "������ �����"<<endl;
	while (s_gr != s_grHead)
	{
		cout << s_gr->data.nomer_g << endl;
		s_gr = s_gr->next;
		i++;
	}
	cout << i;


	s_Raspisanie* s_raspHead = new s_Raspisanie;
	s_Raspisanie* s_rasp = new s_Raspisanie;
	//�������� ������������� ������ ����������
	s_rasp = new_Raspisanie(s_raspHead);
	//�������� ������� ���������� ����������
	Read_Rasp(s_rasp, "Raspisanie.txt",s_au,s_gr);
	s_rasp = s_rasp->next;
	cout << "������ ����� ���������� � ����� ��� ������� ��� ����������" << endl;
	while (s_rasp != s_raspHead)
	{
		cout <<"��� "<< s_rasp->data.kod_r<<endl<<"������"<<endl;
	    cout << s_rasp->data.nomer_g << endl;
		cout<<s_rasp->data.den<<endl;
		cout << s_rasp->link_a->data.nomer_a << endl;
		s_rasp = s_rasp->next;
	}
	
	s_Posechaemost* s_posHead = new s_Posechaemost;
	s_Posechaemost* s_pos = new s_Posechaemost;
	//�������� ������������� ������ ������������
	s_pos = new_Posechaemost(s_posHead);
	//�������� ������� ���������� ������������
	Read_Posech(s_pos, "Poseshaemost.txt",s_rasp);
	s_pos = s_pos->next;
	cout << "������ ����� ���������� ��� ������� ���������� ������ ������������" << endl;
	while (s_pos != s_posHead)
	{
		cout << "��� " << s_pos->data.kod << endl;
		cout << s_pos->link_r->link_a->data.nomer_a<<endl;
		s_pos = s_pos->next;
	}

	//�������� ������ �� ������ ���������
	s_Auditory* result=new s_Auditory;
	Poisk_Auditory(s_au, 1234, result);
	cout << "����� ��������� ��������� " << result->data.nomer_a << endl;

	//�������� ������ �� ������ ������
	s_Gruppa* result1 = new s_Gruppa;
	Poisk_Grup(s_gr, 235031, result1);
	cout << "����� ��������� ��������� " << result1->data.nomer_g << endl;

	//�������� ������ �� ���� ����������
	s_Raspisanie* result2 = new s_Raspisanie;
	Poisk_Raspisanie(s_rasp, 5, result2);
	cout << "��� ���������� ���������� " << result2->data.kod_r << endl;

	//�������� ������ �� ���� ������������
	s_Posechaemost* result3 = new s_Posechaemost;
	Poisk_Posechaemost(s_pos, 5, result3);
	cout << "��� ������������ " << result3->data.kod << endl;

	//�������� ���������� ������������
	int kod;
	int kolvo;
	int dd;
	int mm;
	cout << "������� ���"<<endl;
	scanf("%i", &kod);
	cout << "������� ���������� �����" << endl;
	scanf("%i", &kolvo);
	cout << "������� ����" << endl;
	scanf("%i", &dd);
	cout << "������� �����" << endl;
	scanf("%i", &mm);
	Create_Posech(s_pos, s_rasp, kod, dd, mm, kolvo);
	s_pos = s_posHead->next;
	while (s_pos != s_posHead)
	{
		cout << "��� " << s_pos->data.kod << endl;
		cout << "���������� " << s_pos->data.kolvo << endl;
		s_pos = s_pos->next;
	}

	s_Analyz* analyzHead = new s_Analyz;
	analyzHead->data.zagr = 0;
	s_Analyz* an = new s_Analyz;
	analyzHead->next = analyzHead;
	an = analyzHead;
	Analyzirovat(s_pos, 1234, 23, 12, 12, an);
	Analyzirovat(s_pos, 3456, 24, 12, 14, an);
	Analyzirovat(s_pos, 5678, 25, 12, 16, an);

	Node* Tree = NULL;
	an = analyzHead;
	s_Analyz* s_anl = an;
	an = an->next;
	s_Analyz* a = new s_Analyz;
	s_Analyz* Heada = new s_Analyz;
	a = new_Analyz(Heada);
	while (an != s_anl)
	{
		add_node(an, Tree);
		an = an->next;
	}
	showTreeVosr(Tree, a);
	a = Heada;
	s_Analyz* l = a;
	a = a -> next;
	while (a!= l)
	{
		cout << a->data.zagr<<endl;
		a = a->next;
	}

	Del_Spisok(an,analyzHead);
	Del_Spisok(a, Heada);
	Del_Spisok(s_pos, s_posHead);
	Del_Spisok(s_rasp, s_raspHead);
	Del_Spisok(s_au, s_auHead);
	Del_Spisok(s_gr, s_grHead);
	del(Tree);

}