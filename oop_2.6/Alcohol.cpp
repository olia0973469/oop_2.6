//////////////////////////////////////////////////////////////////////////////
// Alcohol.cpp
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף

#include "Alcohol.h"
#include <sstream>

////////////////////////////////////////////////////////////
// class Alcohol

int Alcohol::counter = 0;

void Alcohol::Init(double volume, Liquid liquid)
{
	setVolume(volume);
	setLiquid(liquid);
}

void Alcohol::Display() const
{
	cout << endl;
	cout << "liquid = " << endl;
	liquid.Display();
	cout << "volume = " << volume << endl;
}

void Alcohol::Read()
{
	double volume;
	Liquid m;
	cout << endl;
	cout << "Man = " << endl;
	m.Read();
	cout << "volume = "; cin >> volume;
	Init(volume, m);
}

Alcohol::Alcohol(const string name, const double density, const double volume)
	: liquid(name, density), volume(volume)
{
	Alcohol::counter++;
}

Alcohol::Alcohol(const Alcohol& s)
{
	liquid = s.liquid;
	volume = s.volume;
	Alcohol::counter++;
}

Alcohol::~Alcohol(void)
{
	Alcohol::counter--;
}

Alcohol& Alcohol::operator = (const Alcohol& s)
{
	liquid = s.liquid;
	volume = s.volume;
	return *this;
}

Alcohol::operator string () const
{
	stringstream ss;
	ss << "liquid = " << liquid << endl;
	ss << "volume = " << volume << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Alcohol& s)
{
	out << string(s);
	return out;
}

istream & operator >> (istream & in, Alcohol& s)
{
	double volume;
	cout << endl;
	cout << "liquid =  "; in >> s.liquid;
	cout << "volume =  "; in >> volume;
	s.setVolume(volume);
	return in;
}

Alcohol Alcohol::operator ++ (int)
{
	Alcohol s(*this);
	liquid++;
	return s;
}

Alcohol Alcohol::operator -- (int)
{
	Alcohol s(*this);
	liquid--;
	return s;
}

Alcohol& Alcohol::operator ++ ()
{
	++liquid;
	return *this;
}

Alcohol& Alcohol::operator -- ()
{
	--liquid;
	return *this;
}

int Alcohol::getCounter()
{
	return Alcohol::counter;
}

////////////////////////////////////////////////////////////
// class Liquid

int Alcohol::Liquid::counter = 0;

void Alcohol::Liquid::Init(string name, double density)
{
	setName(name);
	setDensity(density);
}

void Alcohol::Liquid::Display() const
{
	cout << "name = " << name << endl;
	cout << "density = " << density << endl;
}

void Alcohol::Liquid::Read()
{
	string name;
	double density;
	cout << endl;
	cout << "name = "; cin >> name;
	cout << "density = "; cin >> density;
	Init(name, density);
}

Alcohol::Liquid::Liquid()
	: name(""), density(0)
{
	Alcohol::Liquid::counter++;
}

Alcohol::Liquid::Liquid(const string name)
	: name(name), density(0)
{
	Alcohol::Liquid::counter++;
}

Alcohol::Liquid::Liquid(const double density)
	: name(""), density(density)
{
	Alcohol::Liquid::counter++;
}

Alcohol::Liquid::Liquid(const string name, const double density)
	: name(name), density(density)
{
	Alcohol::Liquid::counter++;
}

Alcohol::Liquid::Liquid(const Alcohol::Liquid& m)
	: name(m.name), density(m.density)
{
	Alcohol::Liquid::counter++;
}

Alcohol::Liquid::~Liquid(void)
{
	Alcohol::Liquid::counter--;
}

Alcohol::Liquid& Alcohol::Liquid::operator = (const Alcohol::Liquid& m)
{
	this->name = m.name;
	this->density = m.density;
	return *this;
}

Alcohol::Liquid::operator string () const
{
	stringstream ss;
	ss << "name = " << name << endl;
	ss << "density = " << density << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Alcohol::Liquid& m)
{
	out << string(m);
	return out;
}

istream & operator >> (istream & in, Alcohol::Liquid& m)
{
	string name;
	double density;
	cout << endl;
	cout << "name = "; in >> name;
	cout << "density = "; in >> density;
	m.setName(name);
	m.setDensity(density);
	return in;
}

Alcohol::Liquid& Alcohol::Liquid::operator ++ ()
{
	++density;
	return *this;
}

Alcohol::Liquid& Alcohol::Liquid::operator -- ()
{
	--density;
	return *this;
}

Alcohol::Liquid Alcohol::Liquid::operator ++ (int)
{
	Alcohol::Liquid t(*this);
	density++;
	return t;
}

Alcohol::Liquid Alcohol::Liquid::operator -- (int)
{
	Alcohol::Liquid t(*this);
	density--;
	return t;
}

int Alcohol::Liquid::getCounter()
{
	return Alcohol::Liquid::counter;
}
