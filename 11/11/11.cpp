#include <iostream>
#include <ctime>
#include<math.h>

//void printInformation(struct Datetime);
//void firstQuestion(struct Datedelta);
void Summa(struct Datetime, struct Datedelta);
using namespace std;

//хотелось бы создать функцию со структурой, но видимо нет.
struct Datetime //вводим структуру с данными времени
{
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_hour;
	int tm_min;
	int tm_sec;
};

struct Datedelta {
	int day;
	int mounth;
	int year;
	int sec;
	int min;
	int hour;
};

void Summa(struct Datetime first, struct Datedelta second)
{


	int diffrence;

	diffrence = first.tm_mday + second.day;
	cout << "Промежуток равен =" << diffrence;

}


int main()
{
	setlocale(LC_ALL, "Russian");
	Datetime first;
	

	cout << "Введите дату и время" << "\n";
	cin >> first.tm_mday >> first.tm_mon >> first.tm_year >> first.tm_sec >> first.tm_min >> first.tm_hour;
	


	return 0;
}

void Datedelta (struct Datedelta second)
{
	second.day = 1;
	second.mounth = 3;
	second.year = 2;
	second.sec = 30;
	second.min = 5;
	second.hour = 6;

}



/*void printInformation(struct Datetime date)
{

	cout << "Your datetime is:" << "\n";
	/*cout<< date.tm_mday <<"."<< date.tm_mon << "." << date.tm_year << "\n" << date.tm_sec << "." << date.tm_min << ".";
	cout<< date.tm_hour;*/
	/*Summa(first, second);
	cout << diffrence;
	return diffrence;
}*/