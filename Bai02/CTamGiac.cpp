#include<iostream>
#include"CTamGiac.h"
using namespace std;
CTamGiac::CTamGiac()
{
	a = b = c = 0;
}
CTamGiac::CTamGiac(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
CTamGiac::~CTamGiac() {}
void CTamGiac::Nhap()
{
	cout << "Nhap canh a: ";
	cin >> a;
	cout << "Nhap canh b: ";
	cin >> b;
	cout << "Nhap canh c: ";
	cin >> c;
}
bool CTamGiac::LaHopLe()
{
	if (a + b <= c)
		return false;
	if (a + c <= b)
		return false;
	if (b + c <= a)
		return false;
	return true;
}
double CTamGiac::TinhChuVi()
{
	return a + b + c;
}
double CTamGiac::TinhDienTich()
{
	double p = TinhChuVi() / 2;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}
int CTamGiac::LaLoaiTamGiac()
{
	if (a == b && b == c)
		return 0;
	bool LaTGCan = false;
	if (a == b || b == c || a == c)
		LaTGCan = true;
	bool LaTGVuong = false;
	if (a*a + b*b == c*c)
		LaTGVuong = true;
	if (b*b + c*c == a*a)
		LaTGVuong = true;
	if (a*a + c*c == b*b)
		LaTGVuong = true;
	if (LaTGVuong && LaTGCan)
		return 1;
	if (LaTGVuong)
		return 2;
	if (LaTGCan)
		return 3;
	return 4;
}