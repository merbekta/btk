#include "Kutuphane.h"

Mat::Mat(int a,int b) : a(a),b(b) {}

int Mat::topla() {
	return this->a + this->b;
}

int topla(int a, int b) {
	return a + b;
}