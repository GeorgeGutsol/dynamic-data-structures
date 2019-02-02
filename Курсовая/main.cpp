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
	//проверка инициализации аудитории
	s_au=new_Auditory(s_auHead);
	//проверка функции считывания аудиторий
	Read_Auditory(s_au, "Auditoria.txt");
	cout << "список аудиторий"<<endl;
	int i = 0;
	while (s_au != s_auHead)
	{
		cout << s_au->data.nomer_a<<endl;
		s_au = s_au->next;
	}
	
	
	s_Gruppa* s_grHead = new s_Gruppa;
	s_Gruppa* s_gr = new s_Gruppa;
	//проверка инициализации списка групп
	s_gr = new_Gruppa(s_grHead);
	//проверка функции считывания групп
	Read_Gruppa(s_gr, "Groups.txt");
	s_gr = s_gr->next;
	cout << "список групп"<<endl;
	while (s_gr != s_grHead)
	{
		cout << s_gr->data.nomer_g << endl;
		s_gr = s_gr->next;
		i++;
	}
	cout << i;


	s_Raspisanie* s_raspHead = new s_Raspisanie;
	s_Raspisanie* s_rasp = new s_Raspisanie;
	//проверка инициализации списка расписаний
	s_rasp = new_Raspisanie(s_raspHead);
	//проверка функции считывания расписание
	Read_Rasp(s_rasp, "Raspisanie.txt",s_au,s_gr);
	s_rasp = s_rasp->next;
	cout << "список кодов расписания и групп для которых оно составлено" << endl;
	while (s_rasp != s_raspHead)
	{
		cout <<"код "<< s_rasp->data.kod_r<<endl<<"группы"<<endl;
	    cout << s_rasp->data.nomer_g << endl;
		cout<<s_rasp->data.den<<endl;
		cout << s_rasp->link_a->data.nomer_a << endl;
		s_rasp = s_rasp->next;
	}
	
	s_Posechaemost* s_posHead = new s_Posechaemost;
	s_Posechaemost* s_pos = new s_Posechaemost;
	//проверка инициализации списка посещаемости
	s_pos = new_Posechaemost(s_posHead);
	//проверка функции считывания посещаемости
	Read_Posech(s_pos, "Poseshaemost.txt",s_rasp);
	s_pos = s_pos->next;
	cout << "список кодов расписания для которых составлены списки посещаемости" << endl;
	while (s_pos != s_posHead)
	{
		cout << "код " << s_pos->data.kod << endl;
		cout << s_pos->link_r->link_a->data.nomer_a<<endl;
		s_pos = s_pos->next;
	}

	//проверка поиска по номеру аудитории
	s_Auditory* result=new s_Auditory;
	Poisk_Auditory(s_au, 1234, result);
	cout << "Номер найденной аудитроии " << result->data.nomer_a << endl;

	//проверка поиска по номеру группы
	s_Gruppa* result1 = new s_Gruppa;
	Poisk_Grup(s_gr, 235031, result1);
	cout << "Номер найденной аудитроии " << result1->data.nomer_g << endl;

	//проверка поиска по коду расписания
	s_Raspisanie* result2 = new s_Raspisanie;
	Poisk_Raspisanie(s_rasp, 5, result2);
	cout << "Код найденного расписания " << result2->data.kod_r << endl;

	//проверка поиска по коду посещаемости
	s_Posechaemost* result3 = new s_Posechaemost;
	Poisk_Posechaemost(s_pos, 5, result3);
	cout << "Код посещаемости " << result3->data.kod << endl;

	//проверка добавления посещаемости
	int kod;
	int kolvo;
	int dd;
	int mm;
	cout << "Введите код"<<endl;
	scanf("%i", &kod);
	cout << "Введите количество людей" << endl;
	scanf("%i", &kolvo);
	cout << "Введите дату" << endl;
	scanf("%i", &dd);
	cout << "Введите месяц" << endl;
	scanf("%i", &mm);
	Create_Posech(s_pos, s_rasp, kod, dd, mm, kolvo);
	s_pos = s_posHead->next;
	while (s_pos != s_posHead)
	{
		cout << "код " << s_pos->data.kod << endl;
		cout << "количество " << s_pos->data.kolvo << endl;
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