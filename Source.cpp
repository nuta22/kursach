#include "Provision.h"
#include "Procedure.h"
#include "Master.h"
#include "Person.h"
#include "File.h"
#include "Exception.h"
#include "Autorization.h"

#include "Libr.h"

int procedure::id = 1;
int master::id_master = 1;



 void Menu(int& ch) {
	while (1) {
		cout << " \t\t\t\t\t\t  ^���� ��������^ " << endl;
		cout << "---------- |1. ������� ���������|\n---------- |2. ������� ���������|\n---------- |3. �������� ���������|\n---------- |4. �������� ����� ���������|\n---------- ";
		cout << "|5. ����������� ��������� �� ��������� (�����������)|\n---------- |6. ����������� ��������� �� ����(��������)|\n---------- |7. ����������� ����� ���������|\n---------- |0. ����� �� ���������|" << endl;
		cin >> ch;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32567, '\n');
		}
		else {
			if (ch <= 7 && ch >= 0) {
				break;
			}
		}
	}
}


template<class T>
void Trycatch(T& tc) {
	
	while (1) {
		try {
			cin >> tc;
			if (tc < 0)
				throw InputException("�� ����� ���� �������������,���������� �����:", tc);
			if (cin.fail())
				throw InputException("�� ����� ���� ������,���������� �����:", tc);

			break;
		}
		catch (InputException& ex) {
			cout << ex.what();
			cin.clear();
			cin.ignore(32567, '\n');
		}
	}
}

template<class T>
void Trycatch_3(T& tc) {
	
	while (1) {
		try {
			cin >> tc;
			if (tc < 0)
				throw InputException("�� ����� ���� �������������,���������� �����:", tc);
			if (cin.fail())
				throw InputException("�� ����� ���� ������,���������� �����:", tc);
			if (tc > 3)
				throw InputException("���������� ������� �� ������������:", tc);

			break;
		}
		catch (InputException& ex) {
			cout << ex.what();
			cin.clear();
			cin.ignore(32567, '\n');

		}
	}
}

template<class T>
void Trycatch_2(T& tc) {
	
	while (1) {
		try {
			cin >> tc;
			if (tc < 0)
				throw InputException("Can't be negative, try again:", tc);
			if (tc > 2)
				throw InputException("Try to choose from suggested:", tc);
			if (cin.fail())
				throw InputException("Can't be letter, try again:", tc);

			break;
		}
		catch (InputException& ex) {
			cout << ex.what();
			cin.clear();
			cin.ignore(32567, '\n');
		}
	}
}


bool proce1(const procedure& ob1, const procedure& ob2)
{
	return ob1 < ob2;
}

bool proce2(const procedure& ob1, const procedure& ob2)
{
	return ob1 > ob2;
}

bool proce3(const master& ob1, const master ob2)
{
	return ob1 > ob2;
}

bool proce4(const master& ob1, const master& ob2)
{
	return ob1 > ob2;
}


void add(vector<procedure>& vect_add) {
	procedure ob;
	cout << "�������� ���������: ";
	cin >> ob.name;

	cout << "��������� ���������: ";
	Trycatch(ob.price);

	cout << "���� ���������: ";
	Trycatch(ob.Data);

	ob.ID = procedure::id;
	procedure::id++;

	vect_add.push_back(ob);
}

void update(vector<procedure>& vect_update) {
	int temp_ID, flag = 0;
	cout << "������� ID: ";
	Trycatch(temp_ID);


	for (int i = 0; i < vect_update.size(); i++) {
		if (temp_ID == vect_update[i].GetID()) {
			cout << "��� ������ ��������?: " << endl;
			cout << "1.�������� ���������\n2.��������� ���������\n3.���� ��������� \n";
			cout << "��� �����:";

			int ch;
			Trycatch_3(ch);

			switch (ch)
			{
			case 1:
				cout << "������� ����� �������� ���������: ";
				cin >> vect_update[i].name;
				break;
			case 2:
				cout << "������� ����� ��������� ���������: ";
				Trycatch(vect_update[i].price);
				break;
			case 3:
				cout << "������� ����� ���� ���������: ";
				Trycatch(vect_update[i].Data);
				break;
			}
			flag = 1;
			break;
		}
	}
	if (flag == 0) { cout << "NO_update\n"; }
}

void del(vector<procedure>& vect_del) {
	int temp_ID, flag = 0;
	cout << "������� ID ���������: ";
	Trycatch(temp_ID);

	for (auto it = vect_del.begin(); it != vect_del.end(); ++it) {
		if (it->GetID() == temp_ID) {
			vect_del.erase(it);
			flag++;
			break;
		}
	}
	if (flag == 0)
		cout << "��������� � ����� ID ����\n";
}

void print_vector(const vector<procedure>& vect_print)
{
	for (int i = 0; i < vect_print.size(); i++)
	{
		cout << vect_print[i] << endl;
	}
}

void add(vector<master>& vect_add) {
	master ob;
	cout << "������� ��� �������: ";
	cin >> ob.name_of_master;

	cout << "������� ������ �������: ";
	Trycatch(ob.price_of_master);

	cout << "������� ���� � �������: ";
	Trycatch(ob.Data);


	ob.ID_master = master::id_master;
	master::id_master++;
	vect_add.push_back(ob);
}

void update(vector<master>& vect_update) {
	int temp_ID_master, flag = 0;
	cout << "������� ID: ";
	Trycatch(temp_ID_master);

	for (int i = 0; i < vect_update.size(); i++) {
		if (temp_ID_master == vect_update[i].GetID_master()) {
			cout << "��� ������ ��������?: " << endl;
			cout << "1.��� �������\n2.������ �������\n3.���� � ������� \n";
			cout << "��� �����:";
			int ch;
			Trycatch_3(ch);

			switch (ch) {
			case 1:
				cout << "������� ������ �������: ";
				cin >> vect_update[i].name_of_master;
				break;
			case 2:
				cout << "������� ����� ������ �������: ";
				Trycatch(vect_update[i].price_of_master);
				break;
			case 3:
				cout << "������� ����� ���� � �������: ";
				Trycatch(vect_update[i].Data);
				break;

			}

		}
	}
}

void del(vector<master>& vect_del) {
	int temp_ID_master, flag2 = 0;
	cout << "������� ID �������: ";
	Trycatch(temp_ID_master);

	for (auto it = vect_del.begin(); it != vect_del.end(); ++it) {
		if (it->GetID_master() == temp_ID_master) {
			vect_del.erase(it);
			flag2++;
			break;
		}
	}
	if (flag2 == 0)
		cout << "������� � ����� ID ����\n";
}

void print_vector(const vector<master>& vect_print) {
	for (int i = 0; i < vect_print.size(); i++)
	{
		cout << vect_print[i] << "\t" << endl;
	}
}



void Print_menu(vector<procedure>& ob_procedure, vector<master>& ob_master) {
	cout << "----------------------------------------------------------------" << endl;
	cout << "________________________________________________________________" << endl;
	cout << "|                    *������ ��������*                      |   " << endl;
	cout << "________________________________________________________________" << endl;
	cout << "| ��� |     ���������, $        |  ����   |   ID" << endl;
	cout << "________________________________________________________________" << endl;
	print_vector(ob_procedure);
	cout << "________________________________________________________________" << endl;
	cout << "----------------------------------------------------------------" << endl << endl;

	cout << "----------------------------------------------------------------" << endl;
	cout << "________________________________________________________________" << endl;
	cout << "|                    *������ ��������*                      |   " << endl;
	cout << "________________________________________________________________" << endl;
	cout << "| ��� |     ���������, $        |  ���� |   ID" << endl;
	cout << "________________________________________________________________" << endl;
	print_vector(ob_master);
	cout << "________________________________________________________________" << endl;
	cout << "----------------------------------------------------------------" << endl << endl;
}

void print_procedure(vector<procedure>& ob_procedure) {
	cout << "----------------------------------------------------------------" << endl;
	cout << "________________________________________________________________" << endl;
	cout << "|                    *������ ��������*                      |   " << endl;
	cout << "________________________________________________________________" << endl;
	cout << "| ��� |     ���������, $        |  ����   |   ID" << endl;
	cout << "________________________________________________________________" << endl;
	print_vector(ob_procedure);
	cout << "________________________________________________________________" << endl;
	cout << "----------------------------------------------------------------" << endl << endl;

}

void print_master(vector<master>& ob_master) {
	cout << "----------------------------------------------------------------" << endl;
	cout << "________________________________________________________________" << endl;
	cout << "|                    *������ ��������*                      |   " << endl;
	cout << "________________________________________________________________" << endl;
	cout << "| ��� |     ���������, $        |   ����   |   ID" << endl;
	cout << "________________________________________________________________" << endl;
	print_vector(ob_master);
	cout << "________________________________________________________________" << endl;
	cout << "----------------------------------------------------------------" << endl << endl;
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	vector<procedure> ob_procedure;
	vector<master> ob_master;

	File<procedure> fileprocedure("procedure.txt");
	fileprocedure.get(ob_procedure);

	File<master> filemaster("master.txt");
	filemaster.get(ob_master);



	int ch;
	do
	{
		Print_menu(ob_procedure, ob_master);
		Menu(ch);
		switch (ch)
		{
		case 1:
			system("CLS");
			Print_menu(ob_procedure, ob_master);
			break;
		case 2:
			system("CLS");
			Print_menu(ob_procedure, ob_master);
			del(ob_procedure);
			del(ob_master);
			break;
		case 3:
			system("CLS");
			int key;
			Print_menu(ob_procedure, ob_master);
			cout << "��� ������ ��������?\t1.���������\t2.������\n ��� �����: ";
			Trycatch_2(key);
			switch (key) {
			case 1:
				system("CLS");
				print_procedure(ob_procedure);
				update(ob_procedure);
				break;
			case 2:
				system("CLS");
				print_master(ob_master);
				update(ob_master);
				break;
			}
			break;
		case 4:
			system("CLS");
			add(ob_procedure);
			add(ob_master);
			break;
		case 5:
			system("CLS");
			sort(ob_procedure.begin(), ob_procedure.end(), proce1);
			break;
		case 6:
			system("CLS");
			sort(ob_procedure.begin(), ob_procedure.end(), proce2);
			break;
		case 7:
			system("CLS");
			int IncDec;
			cout << "1.- �� �����������\n2.- �� ��������\n ��� �����: ";
			Trycatch_2(IncDec);
			switch (IncDec) {
			case 1:
				sort(ob_master.begin(), ob_master.end(), proce3);
				break;
			case 2:
				sort(ob_master.begin(), ob_master.end(), proce4);
				break;
			}
			break;

		case 0:
			break;
		}
	} while (ch != 0);

	fileprocedure.save(ob_procedure);
	filemaster.save(ob_master);
}