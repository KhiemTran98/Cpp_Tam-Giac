#include<iostream>
#include<conio.h>
#include"CTamGiac.h"
using namespace std;
void main()
{
	//CTamGiac* tg = new CTamGiac();
	//cout << "Nhap 3 canh tam giac" << endl;
	//tg->Nhap();
	CTamGiac* tg = new CTamGiac(1, 1, 1);
	if (tg->LaHopLe())
	{
		cout << "\nChu vi: " << tg->TinhChuVi();
		cout << "\nDien tich: " << tg->TinhDienTich();
		cout << "\nDay la tam giac ";
		int loaiTG = tg->LaLoaiTamGiac();
		switch (loaiTG)
		{
		case 0:
			cout << "deu";
			break;
		case 1:
			cout << "vuong can";
			break;
		case 2:
			cout << "vuong";
			break;
		case 3:
			cout << "can";
			break;
		default:
			cout << "thuong";
			break;
		}
	}
	else
		cout << "\nTam giac khong hop le";
	delete tg;
	_getch();
}