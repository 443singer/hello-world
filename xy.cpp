#include <cstdio>
#include <iostream>
using namespace std;
const double eps = 1e-5;
double a11,a12,a21,a22,b1,b2,x1,x2;
int main() {
	cin >> a11 >> a12 >> b1;
	cin >> a21 >> a22 >> b2;
/*	if(a11<eps) {
		if(a12<eps) {
			if(b1<eps) {
				if(a22<eps)*/
	//不妨设有唯一解
	x1 = (a11*a22-a21*a12)/(a11*b2-a21*b1);
	x2 = (a12*a21-a22*a11)/(a12*b2-a22*b1);
	cout << x1 << endl << x2;

}
