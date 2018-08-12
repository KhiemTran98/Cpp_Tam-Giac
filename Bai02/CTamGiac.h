class CTamGiac
{
private:
	double a, b, c;
public:
	CTamGiac();
	CTamGiac(double a, double b, double c);
	~CTamGiac();
	void Nhap();
	void Xuat();
	bool LaHopLe();
	double TinhChuVi();
	double TinhDienTich();
	int LaLoaiTamGiac();
};