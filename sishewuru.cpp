#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
double x;
long long mi10[20];
inline void solve_nz(int n) {
	double ans;
	long long tmp = x/mi10[n];
	if(tmp%10>=5) ans = (double)(tmp - tmp%10 + 10) * mi10[n];
	else ans = (double)(tmp - tmp%10) * mi10[n];
	printf("答案是\n");
	cout << ans << endl;
}
inline void solve_nf(int n) {
	double ans;
	double tmp1 = x*mi10[-n];
	long long tmp = tmp1;
	if(tmp%10>=5) ans = (double)(tmp - tmp%10 + 10)/mi10[-n];
	else ans = (double)(tmp - tmp%10)/mi10[-n];
	printf("答案是\n");
	printf("%.6f\n",ans);
}
int main() {
	printf("请输入x\n");
	scanf("%lf",&x);
	printf("请输入想要四舍五入x的第几位\n");
	int n;
	cin >> n;
	mi10[0] = 1;
	for(int i = 1 ; i <= 15 ; ++i) mi10[i] = mi10[i-1]*10;
	if(n>0) solve_nz(n);
	else solve_nf(n);
}
