#include <iostream> 
using namespace std;

int Fibonaci(int n)
{
    if(n==0) 
		return 0 ;
    else if(n==1)
	 	return 1 ;
    return Fibonaci(n-1) + Fibonaci(n-2);
}
int main()
{
    int n;
    cout<< "Nhap vao so nguyen can tinh : " ;
    cin >> n;
	cout << "So hang thu " <<n << " cua day la : "  <<Fibonaci(n) << endl;
    return 0;
}