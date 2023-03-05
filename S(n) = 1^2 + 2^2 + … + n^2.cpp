#include <iostream>
using namespace std ;

int TinhSn(int n)
{
	if (n ==0)
		return 0;
	if (n==1)
		return 1;
	return TinhSn(n-1) + n*n;

}

int main(){
	int n;
	cout << " Nhap n : ";
	cin >> n;
	cout << " Ket qua = "<< TinhSn(n)<<endl ;
	return 0;
}