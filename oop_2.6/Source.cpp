#include "Alcohol.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Alcohol s;

	cout << "s = "; cin >> s;
	cout << s << endl;

	cout << "Student : " << Alcohol::getCounter() << endl;
	cout << "Student::Man : " << Alcohol::Liquid::getCounter() << endl;

	return 0;
}