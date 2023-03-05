#include <iostream>
using namespace std;

long TinhTong(int n)
{
    if(n == 0)
        return 0;
    return TinhTong(n - 1) + n;
}

int main()
{
    int n, S;
	cout << " Nhap n = " ;
	cin >> n ;
    S = TinhTong(n);
    cout << "S = " << S << endl ;
    return 0;
}