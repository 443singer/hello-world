#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	double x;
	scanf("%lf",&x);
	int zz = x;
	double xiaoshu = x-zz;
	printf("%d\n",zz);
	printf("%.6lf\n",xiaoshu);
}
