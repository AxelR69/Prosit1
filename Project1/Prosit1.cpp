#include "Calcul.h"
#include <cmath>
Calcul::Calcul(void)
{
	this->ini_obj(0, 0, 0, 0);
}
Calcul::Calcul(int x1, int x2, int y1, int y2)
{
	this->ini_obj(x1, y1, x2, y2);
}
void Calcul::ini_obj(int x1, int x2, int y1, int y2)
{
	this->set_x1(x1);
	this->set_x2(x2);
	this->set_y1(y1);
	this->set_y2(y2);
}
double Calcul::calculateDistance(void)
{
	double calcul = sqrt(pow(get_x1() - get_x2(), 2) + pow(get_y1() - get_y2(), 2));
	return calcul;
}

void Calcul::set_x1(int x1)
{
	this->x1 = x1;
}
void Calcul::set_x2(int x2)
{
	this->x2 = x2;
}
void Calcul::set_y1(int y1)
{
	this->y1 = y1;
}
void Calcul::set_y2(int y2)
{
	this->y2 = y2;
}
int Calcul::get_x1(void)
{
	return this->x1;
}
int Calcul::get_x2(void)
{
	return this->x2;
}
int Calcul::get_y1(void)
{
	return this->y1;
}
int Calcul::get_y2(void)
{
	return this->y2;
}