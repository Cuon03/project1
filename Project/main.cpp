#include <iostream>
#include <windows.h>
#include <graphics.h>
#define MAX 20
#include <iomanip>

using namespace std;

extern "C++"
{
    void resizeConsole(int width, int height);
    void gotoxy(int x, int y);
    void textcolor (unsigned short color);
    void Tieude();
    void Menu();
    void Goi_mon(int STT[], int So_luong[], float Tong_tien, int So_mon);
    void In_bill (int STT[MAX], int So_luong[MAX], float& Tong_tien ,int& So_mon);
}

int main()
{
    int STT[MAX], So_luong[MAX], So_mon;
    float Tong_tien;

    resizeConsole(800, 600);
    Tieude();
    Menu();
    Goi_mon ( &STT[MAX], &So_luong[MAX], Tong_tien, So_mon);
    In_bill( &STT[MAX], &So_luong[MAX], Tong_tien, &So_mon);

    system("PAUSE");
    return 0;
}
