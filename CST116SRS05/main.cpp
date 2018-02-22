// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;




bool check(int d1, int m1, int y1, int d2, int m2, int y2)
{
	if (y1<y2)

		return true;

	else if (y1>y2)

		return false;

	else if (m1<m2)

	{

		return true;
	}

	else if (m2<m1)

		return false;

	else if (d1<d2)

		return true;

	else return false;
}

bool isLeap(int year)

{

	if (year % 100 == 0)

	{

		if (year % 4 == 0)

			return true;

		else

			return false;

	}

	else if (year % 4 == 0)

	{

		return true;

	}

	return false;

}

void printDate(int &d1, int &m1, int &y1)

{

	switch (m1) {

	case 1:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 31)

		{

			d1 = 0;
			m1++;
		}

		break;

	case 2:

		if (d1 == 29)

		{

			cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
			if (isLeap(y1))

			d1 = 0;
			m1++;

		}

		else

			cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		break;

	case 3:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 31)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 4:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 30)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 5:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 31)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 6:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 30)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 7:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 31)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 8:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 31)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 9:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 30)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 10:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 31)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 11:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 30)

		{

			d1 = 0;
			m1++;

		}

		break;

	case 12:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;
		if (d1 == 31)

		{

			d1 = 0;
			m1 = 1;
			y1++;

		}

		break;

	}

	d1++;
}

bool sameDate(int &d1, int &m1, int &y1, int &d2, int &m2, int &y2)

{

	if (y1 == y2 && m1 == m2 && d1 == d2)

		return true; 
	return false;
}

void print(const int d1, const int m1, const int y1, const int d2, const int m2, const int y2)

{

	bool isFirst = check(d1, m1, y1, d2, m2, y2);

	int d1_c = d1, d2_c = d2, m1_c = m1, m2_c = m2, y1_c = y1, y2_c = y2;

	if (isFirst)

	{

		while (!sameDate(d1_c, m1_c, y1_c, d2_c, m2_c, y2_c))

		{

			printDate(d1_c, m1_c, y1_c);

		}

	}

	else {

		while (!sameDate(d1_c, m1_c, y1_c, d2_c, m2_c, y2_c))

		{

			printDate(d2_c, m2_c, y2_c);

		}

	}

}

int main()

{

	int d1, m1, y1, d2, m2, y2;

	cin >> y1 >> m1 >> d1;

	cin >> y2 >> m2 >> d2;

	print(d1, m1, y1, d2, m2, y2);

	cin.get();

	return 0;
}