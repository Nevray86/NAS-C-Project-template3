// структуры

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
	string position = "программист";
	int salary = 50000;
};



void printperson(person &P) {
	cout << P.name << " - " << P.position << endl;
	cout << "ДАТА РОЖДЕНИЯ " << P.btrthdey.day << "." << P.btrthdey.month << "." << P.btrthdey.year << endl;
	cout << "зарплата " << P.salary << endl;
	}

person inputperson() {
	person newP;
	cout << " введите имя";
	//getline(cin, newP.name);
	cout << "ввведите день";
	cin >> newP.btrthdey.day;
	cout << "введите месяц";
	cin >> newP.btrthdey.month;
	cout<< "введите год";
	cin >> newP.btrthdey.year;
	cin.ignore();
	cout << "должнлсть";
	//getline(cin, newP.position);
	cout << "зп";
	cin >> newP.salary;
	cin.ignore();
	return newP;
}

void filperson(person& P) {
	cout << " введите имя";
	//getline(cin, P.name);
	cout << "ввведите день";
	cin >> P.btrthdey.day;
	cout << "введите месяц";
	cin >> P.btrthdey.month;
	cout << "введите год";
	cin >> P.btrthdey.year;
	cin.ignore();
	cout << "должнлсть";
	//getline(cin, P.position);
	cout << "зп";
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
	person bob = { "Bob", {15,12,1900},"директор",12000 };

	printperson(tom);
	cout << endl;
	printperson(bob);
	person myPerson = inputperson();
	printperson(myPerson);


	person G;
	filperson(G);
	printperson(G);
	/*cout << "ДАТА РОЖДЕНИЯ " << bob.btrthdey.day << "." << bob.btrthdey.month << "." << bob.btrthdey.year << endl;
	cout << "зарплата " << bob.salary << endl;

	person* ptom = &tom;
	cout << "имя " << ptom->name << endl;
	cout << "год " << ptom->btrthdey.year << endl;
	ptom ->salary += 100000;
	cout << "новая " << ptom->salary<<endl;*/



	// структура date с 4 полями
	/*struct date { // создаем структуру с 4 полями 
		int day; // полехранящее день

		int month;// поле хранящее месяц
		int year;// поле хранящее год
		string note; // поле с записью события

	} birthday, saleday = {18,4,2022,"День продаж"}; // обявление и инициализация обьектов структуры
	// прямое присваивание значений полям обьекта birthdey
	/ *birthday.day = 0;
	birthday.month = 5;
	birthday.year = 1970;
	birthday.note = "День рождения";* /
	
	birthday = { 5,5,1970,"День рождения" }; // мнгновенное заполнение полей обьекта birthdey
	// saleday = birthday; // присваивание полям обьекта seledey значений полей обьекта birthdey

	// вывод полей seledey and birthdey
	cout << birthday.day << "." << birthday.month << "." << birthday.year << " - " << birthday.note << endl;
	cout << saleday.day << "." << saleday.month << "." << saleday.year << " - " << saleday.note << endl;

	date yestudey = { 17,4,2022,"вчера" }; // альтернативный способ создания обьекта структуры можно создать
	//в любои месте программы
	cout << yestudey.day << "." << yestudey.month << "." << yestudey.year << " - " << yestudey.note << endl;*/


	struct point {
		int arr[5];
	};
	point A = { {1,2,3,4,5} };

	return 0;
}