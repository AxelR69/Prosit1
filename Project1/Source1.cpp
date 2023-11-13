#include <iostream>
#include "pch.h"

int CLcalcul::cpteObj = 0;

CLcalcul::CLcalcul() {
	n = 0;
	cpteObj++;
}

CLcalcul::CLcalcul(int val) {
	n = val;
	cpteObj++;
}
void CLcalcul::carre() {
	n = n * n;
}


void CLcalcul::setN(int val) {
	n = val;
}


int CLcalcul::getN(void ) {
	return n;
}