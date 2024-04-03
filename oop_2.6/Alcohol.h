//////////////////////////////////////////////////////////////////////////////
// Alcohol.h
// заголовний файл Ц визначенн€ класу

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Alcohol
{
private:
	double volume;
	static int counter;
public:
	class Liquid
	{
	private:
		string name;
		double density;
		static int counter;
	public:
		string getName() const { return name; }
		double getDensity() const { return density; }
		void setName(string name) { this->name = name; }
		void setDensity(double density) { this->density = density; }
		void Init(string name, double density);
		void Display() const;
		void Read();
		Liquid();
		Liquid(const string name);
		Liquid(const double density);
		Liquid(const string name, const double density);
		Liquid(const Liquid& m);
		~Liquid(void);
		Liquid& operator = (const Liquid& m);
		friend ostream& operator << (ostream& out, const Liquid& m);
		friend istream& operator >> (istream& in, Liquid& m);
		operator string () const;
		Liquid& operator ++ ();
		Liquid& operator -- ();
		Liquid operator ++ (int);
		Liquid operator -- (int);
		static int getCounter();
	};
	double getVolume() const { return volume; }
	Liquid getLiquid() const { return liquid; }
	void setVolume(double volume) { this->volume = volume; }
	void setLiquid(Liquid liquid) { this->liquid = liquid; }
	void Init(double volume, Liquid liquid);
	void Display() const;
	void Read();
	Alcohol(const string name = "", const double density = 0, const double volume = 0);
	Alcohol(const Alcohol& s);
	~Alcohol(void);
	Alcohol& operator = (const Alcohol& s);
	friend ostream& operator << (ostream& out, const Alcohol& s);
	friend istream& operator >> (istream& in, Alcohol& s);
	operator string () const;
	Alcohol& operator ++ ();
	Alcohol& operator -- ();
	Alcohol operator ++ (int);
	Alcohol operator -- (int);
	static int getCounter();
private:
	Liquid liquid;
};
