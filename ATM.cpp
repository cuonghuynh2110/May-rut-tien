#include<iostream>
#include<iomanip>
using namespace std;

void nhapMenhGia(double menhGia[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap menh gia X[" << i + 1 << "]: ";
		cin >> menhGia[i];
	}
}
void XacDinhSoToCuaTungMenhGia(double menhGia[], int n, int X[], int& nX, double soTien)
{
	int tien = soTien;
	for (int i = 0; i < n; i++)
	{
		int soTo = tien / menhGia[i];
		X[nX++] = soTo;
		tien = tien - (soTo * menhGia[i]);
	}
}
void Xuat(int X[], double menhGia[], int n)
{
	cout << "May se tra cho khach" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << left << setw(3) << X[i] << " to " << menhGia[i] << " dong" << endl;
	}
}
int main()
{
	double money = 0;
	double menhGia[100]; // mảng chứa số loại mệnh giá
	int n1 = 0;
	int X[100]; //Mảng chứa số tờ của từng loại mệnh giá
	int n2 = 0;
	cout << "Nhap so tien: "; cin >> money;
	cout << "Nhap so menh gia: "; cin >> n1;
	nhapMenhGia(menhGia, n1);
	XacDinhSoToCuaTungMenhGia(menhGia, n1, X, n2, money);
	Xuat(X, menhGia, n1);
}