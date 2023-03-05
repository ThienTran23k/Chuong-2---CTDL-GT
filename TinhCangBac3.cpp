#include<iostream>
#include <cmath>

using namespace std;

float CangBac3(float x)
{
	if(x == 0)
		return 0;
	if(x < 0)
		return (-CangBac3(-x));
	return (exp((log(x)/3)));
}
int main()
{
	float x;
	cout<< "\nNhap x: ";
	cin >> x;
	x = CangBac3(x);
	cout << "ket qua = " << x << endl  ;
	return 0;
}

