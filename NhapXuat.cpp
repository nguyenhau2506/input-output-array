#include<iostream>
using namespace std;

void NhapMang(int Mang[], int &n)
{
    cout << "Nhap so phan tu: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Mang [" << i << "]=";
        cin >> Mang[i];
    }
} 

void XuatMang(int Mang[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Mang [" << i << "]=" << Mang[i] << "\t";
    }
}
int main()
{
    int Mang[100] = {0};
    int n;
    NhapMang(Mang, n);
    XuatMang(Mang, n);
    return 0;
}