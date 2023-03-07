#include<iostream>
#define MAX 50
using namespace std;

void nhap (float a[], int &n){
	do{
		cout << "\nNhap so phan tu: " ;
		cin >> n ;
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
		}while(n <= 0 || n > MAX);
	
	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap a[ " << i << " ]: ";
		cin >> a[i];
	}
}



void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "\n";
	}
}

int demDuong(float a[], int n)
	{
	if(n == 0)
		return 0;
	int dem = demDuong(a, n - 1);
	if(a[n - 1] > 0)
		dem++;
	return dem ;
	}
int main()
{
	int n;
	float a[MAX];
	nhap(a, n);
	xuat(a, n);
	int dem = demDuong(a, n);
	cout << "\nCo " <<dem <<  " so duong \n";
	return 0;
}

