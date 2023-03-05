#include <iostream>
using namespace std;

int Tong(int* a, int n)
{
    if ( n == 0)
    	return 0; 
    if ( a[n] % 2 == 0)
        return Tong(a, n-1) + a[n];
    return Tong(a, n-1) + 0;
}
int main()
{
    int n;
    cout << "Nhap gia tri  n: ";
    cin >> n;
    int* a = new int[n];
    for (int i = 1; i <= n; i++) 
    {
        cout << "Nhap a[ " << i <<" ] = ";
        cin >> a[i] ;
    }
    cout << "tong chan = " << Tong(a, n)<< endl;
	return 0;
}