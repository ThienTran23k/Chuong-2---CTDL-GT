#include <iostream>
using namespace std;

long TinhGiaiThua(int n)
{
   if(n<=1) 
   		return 1;
   return TinhGiaiThua(n - 1) * n;
}

int main()
{
    int n, S;
	cout << " Nhap n = " ;
	cin >> n ;
    S = TinhGiaiThua(n);
    cout << "S = " << S << endl ;
    return 0;
}