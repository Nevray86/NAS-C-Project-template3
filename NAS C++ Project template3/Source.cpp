// ���������

#include<iostream>
#include<string.h>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};

struct person {
	string name;
	date btrthdey;
	string position = "�����������";
	int salary = 50000;
};



void printperson(person &P) {
	cout << P.name << " - " << P.position << endl;
	cout << "���� �������� " << P.btrthdey.day << "." << P.btrthdey.month << "." << P.btrthdey.year << endl;
	cout << "�������� " << P.salary << endl;
	}

person inputperson() {
	person newP;
	cout << " ������� ���";
	//getline(cin, newP.name);
	cout << "�������� ����";
	cin >> newP.btrthdey.day;
	cout << "������� �����";
	cin >> newP.btrthdey.month;
	cout<< "������� ���";
	cin >> newP.btrthdey.year;
	cin.ignore();
	cout << "���������";
	//getline(cin, newP.position);
	cout << "��";
	cin >> newP.salary;
	cin.ignore();
	return newP;
}

void filperson(person& P) {
	cout << " ������� ���";
	//getline(cin, P.name);
	cout << "�������� ����";
	cin >> P.btrthdey.day;
	cout << "������� �����";
	cin >> P.btrthdey.month;
	cout << "������� ���";
	cin >> P.btrthdey.year;
	cin.ignore();
	cout << "���������";
	//getline(cin, P.position);
	cout << "��";
	cin >> P.salary;
	cin.ignore();
}

int main() {
	setlocale(LC_ALL, "ru");
	
	person tom = { "Tom" };
	//tom.btrthdey.day = 1;
	//tom.btrthdey.month = 4;
	//tom.btrthdey.year = 1986;
	tom.btrthdey = { 1,4,1985 };
	person bob = { "Bob", {15,12,1900},"��������",12000 };

	printperson(tom);
	cout << endl;
	printperson(bob);
	person myPerson = inputperson();
	printperson(myPerson);


	person G;
	filperson(G);
	printperson(G);
	/*cout << "���� �������� " << bob.btrthdey.day << "." << bob.btrthdey.month << "." << bob.btrthdey.year << endl;
	cout << "�������� " << bob.salary << endl;

	person* ptom = &tom;
	cout << "��� " << ptom->name << endl;
	cout << "��� " << ptom->btrthdey.year << endl;
	ptom ->salary += 100000;
	cout << "����� " << ptom->salary<<endl;*/



	// ��������� date � 4 ������
	/*struct date { // ������� ��������� � 4 ������ 
		int day; // ������������ ����

		int month;// ���� �������� �����
		int year;// ���� �������� ���
		string note; // ���� � ������� �������

	} birthday, saleday = {18,4,2022,"���� ������"}; // ��������� � ������������� �������� ���������
	// ������ ������������ �������� ����� ������� birthdey
	/ *birthday.day = 0;
	birthday.month = 5;
	birthday.year = 1970;
	birthday.note = "���� ��������";* /
	
	birthday = { 5,5,1970,"���� ��������" }; // ����������� ���������� ����� ������� birthdey
	// saleday = birthday; // ������������ ����� ������� seledey �������� ����� ������� birthdey

	// ����� ����� seledey and birthdey
	cout << birthday.day << "." << birthday.month << "." << birthday.year << " - " << birthday.note << endl;
	cout << saleday.day << "." << saleday.month << "." << saleday.year << " - " << saleday.note << endl;

	date yestudey = { 17,4,2022,"�����" }; // �������������� ������ �������� ������� ��������� ����� �������
	//� ����� ����� ���������
	cout << yestudey.day << "." << yestudey.month << "." << yestudey.year << " - " << yestudey.note << endl;*/


	struct point {
		int arr[5];
	};
	point A = { {1,2,3,4,5} };

	return 0;
}