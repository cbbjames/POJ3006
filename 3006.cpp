//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool is_prime(int a) {
	if (a == 1) return false;
	for (int i = 2; i <= sqrt((double)a); i++) {
		if (a%i == 0) return false;
	}
	return true;
}
int m[1000000] = { 0 };
int main(){
	int a, b, c;
	while (cin >> a >> b >> c&&a != 0) {
		int cnt = 0;
		m[0] = a;
		if (is_prime(a)) cnt++;
		if (cnt == c) { cout << a << endl; continue; }

		for (int i = 1; i < 1000000; i++) {
			m[i] = m[i - 1] + b;
			if (is_prime(m[i])) cnt++;
			if (cnt == c) { cout << m[i] << endl; break; }
		}
	}
	return 0;
}