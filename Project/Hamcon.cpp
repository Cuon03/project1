#include <iostream>
#include <windows.h>
#include <graphics.h>
#include <iomanip>
#define MAX 20

using namespace std;


void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textcolor (unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}


void Tieude()
{
    SetConsoleTitle("CHUONG TRINH MENU DO AN ");
    char str[] = " CHAO MUNG BAN DEN VOI QUAN AN CUA CHUNG TOI \n\n";
    int len= strlen(str);
    gotoxy(25,7);
    textcolor(14);
    for (int i = 0; i<len; i++)
    {
        cout<<str[i];
        Sleep(100);
    }
    textcolor(15);

    char str1[] = " XIN MOI BAN GOI MON AN \n\n";
    int len1= strlen(str1);
    gotoxy(33,10);
    textcolor(14);
    for (int i = 0; i<len1; i++)
    {
        cout<<str1[i];
        Sleep(100);
    }
    textcolor(15);
    system("CLS");
}

void Menu()
{
    gotoxy(40,2);
    textcolor(11);
    cout<< " ====== MENU ====== "<< endl;
    textcolor(15);
    for( int i= 0; i< 10; i++)
    {
        gotoxy(10,i+5);
        switch (i)
        {
            case 0:
            {
                cout << i+1<< ") Bun dau mam tom    40.000 VND"<< endl;
                break;
            }
            case 1:
            {
                cout << i+1<< ") Pho bo             30.000 VND"<< endl;
                break;
            }
            case 2:
            {
                cout << i+1<< ") Pho ga             30.000 VND"<< endl;
                break;
            }
            case 3:
            {
                cout << i+1<< ") Bun rieu cua       30.000 VND"<< endl;
                break;
            }
            case 4:
            {
                cout << i+1<< ") Bun bo Hue         30.000 VND"<< endl;
                break;
            }
            case 5:
            {
                cout << i+1<< ") Banh da cua        30.000 VND"<< endl;
                break;
            }
            case 6:
            {
                cout << i+1<< ") Com ga             25.000 VND"<< endl;
                break;
            }
            case 7:
            {
                cout << i+1<< ") Com rang dua bo    25.000 VND"<< endl;
                break;
            }
            case 8:
            {
                cout << i+1<< ") Mi xao hai san     25.000 VND"<< endl;
                break;
            }
            case 9:
            {
                cout << i+1<< ") Mi xao thit bo    20.000 VND"<< endl;
                break;
            }

            default:
                break;
        }
    }

    for( int i= 10; i< 20; i++)
    {
        gotoxy(60,i-5);
        //cout<< i+1<< endl;
        switch (i)
        {
            case 10:
            {
                cout << i+1<< ") Bia Ha Noi         10.000 VND"<< endl;
                break;
            }
            case 11:
            {
                cout << i+1<< ") Bia Sai Gon        10.000 VND"<< endl;
                break;
            }
            case 12:
            {
                cout << i+1<< ") Sinh to xoai       30.000 VND"<< endl;
                break;
            }
            case 13:
            {
                cout << i+1<< ") Sinh to dua hau    30.000 VND"<< endl;
                break;
            }
            case 14:
            {
                cout << i+1<< ") Sinh to bo         30.000 VND"<< endl;
                break;
            }
            case 15:
            {
                cout << i+1<< ") Nuoc chanh         20.000 VND"<< endl;
                break;
            }
            case 16:
            {
                cout << i+1<< ") Nuoc chanh leo     25.000 VND"<< endl;
                break;
            }
            case 17:
            {
                cout << i+1<< ") Nuoc dua           30.000 VND"<< endl;
                break;
            }
            case 18:
            {
                cout << i+1<< ") Nuoc cam ep        30.000 VND"<< endl;
                break;
            }
            case 19:
            {
                cout << i+1<< ") Nuoc loc           5.000 VND"<< endl;
                break;
            }

            default:
                break;
        }
    }
}

void Goi_mon(int STT[], int So_luong[], float Tong_tien, int So_mon)
{
    //int So_mon;
    //int STT[MAX];
    //int So_luong[MAX];
    //float Tong_tien= 0;
    gotoxy(10, 16);
    cout<< "=================================================================================="<< endl;
    gotoxy(40,17);
    textcolor(11);
    cout<< " ====== GOI MON ====== "<< endl;
    textcolor(15);
    gotoxy(35,18);
    cout<< "(XIN MOI BAN NHAP STT CUA MON AN)";

    gotoxy(10, 19);
    cout<< " Hay nhap so mon ban muon goi: ";
    gotoxy (45, 19);
    cin>> So_mon;

    gotoxy(10, 20);
    cout<< "STT";
    gotoxy(30, 20);
    cout<< " Ten mon";
    gotoxy(60, 20);
    cout<< "So luong";

    for(int i= 0; i< So_mon; i++)
    {

        gotoxy(10, 21+i);
        cin>> STT[i];
        if (STT[i] == 1)
        {
            gotoxy(30, 21+i);
            cout<< " Bun dau mam tom";
        }
        else if ( STT[i] ==  2)
        {
            gotoxy(30, 21+i);
            cout<< " Pho bo";
        }
        else if ( STT[i] ==  3)
        {
            gotoxy(30, 21+i);
            cout<< " Pho ga";
        }
        else if ( STT[i] ==  4)
        {
            gotoxy(30, 21+i);
            cout<< " Bun rieu cua";
        }
        else if ( STT[i] ==  5)
        {
            gotoxy(30, 21+i);
            cout<< " Bun bo Hue";
        }
        else if ( STT[i] ==  6)
        {
            gotoxy(30, 21+i);
            cout<< " Banh da cua";
        }
        else if ( STT[i] ==  7)
        {
            gotoxy(30, 21+i);
            cout<< " Com ga";
        }
        else if ( STT[i] ==  8)
        {
            gotoxy(30, 21+i);
            cout<< " Com rang dua bo";
        }
        else if ( STT[i] ==  9)
        {
            gotoxy(30, 21+i);
            cout<< " Mi xao hai san";
        }
        else if ( STT[i] == 10)
        {
            gotoxy(30, 21+i);
            cout<< " Mi xao thit bo";
        }
        else if ( STT[i] ==  11)
        {
            gotoxy(30, 21+i);
            cout<< " Bia Ha Noi";
        }
        else if ( STT[i] ==  12)
        {
            gotoxy(30, 21+i);
            cout<< " Bia Sai Gon";
        }
        else if ( STT[i] ==  13)
        {
            gotoxy(30, 21+i);
            cout<< " Sinh to xoai";
        }
        else if ( STT[i] ==  14)
        {
            gotoxy(30, 21+i);
            cout<< " Sinh to dua hau";
        }
        else if ( STT[i] ==  15)
        {
            gotoxy(30, 21+i);
            cout<< " Sinh to bo";
        }
        else if ( STT[i] ==  16)
        {
            gotoxy(30, 21+i);
            cout<< " Nuoc chanh";
        }
        else if ( STT[i] ==  17 )
        {
            gotoxy(30, 21+i);
            cout<< " Nuoc chanh leo";
        }
        else if ( STT[i] ==  18)
        {
            gotoxy(30, 21+i);
            cout<< " Nuoc dua";
        }
        else if ( STT[i] ==  19)
        {
            gotoxy(30, 21+i);
            cout<< " Nuoc cam ep";
        }
        else if ( STT[i] ==  20)
        {
            gotoxy(30, 21+i);
            cout<< " Nuoc loc";
        }
    }

    for(int j= 0; j< So_mon; j++)
    {
        gotoxy(60, 21+ j);
        cin>> So_luong[j];
    }

    for (int k=0; k< So_mon; k++)
    {
        //cout<< STT[k]<< " "<< So_luong[k]<< endl;
        if (STT[k]== 1)
        {
            Tong_tien+= 40.000* So_luong[k];
        }
        else if (STT[k]== 2)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 3)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 4)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 5)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 6)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 7)
        {
            Tong_tien+= 25.000* So_luong[k];
        }
        else if (STT[k]== 8)
        {
            Tong_tien+= 25.000* So_luong[k];
        }
        else if (STT[k]== 9)
        {
            Tong_tien+= 25.000* So_luong[k];
        }
        else if (STT[k]== 10)
        {
            Tong_tien+= 20.000* So_luong[k];
        }
        else if (STT[k]== 11)
        {
            Tong_tien+= 10.000* So_luong[k];
        }
        else if (STT[k]== 12)
        {
            Tong_tien+= 10.000* So_luong[k];
        }
        else if (STT[k]== 13)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 14)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 15)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 16)
        {
            Tong_tien+= 20.000* So_luong[k];
        }
        else if (STT[k]== 17)
        {
            Tong_tien+= 25.000* So_luong[k];
        }
        else if (STT[k]== 18)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 19)
        {
            Tong_tien+= 30.000* So_luong[k];
        }
        else if (STT[k]== 20)
        {
            Tong_tien+= 5.000* So_luong[k];
        }
    }
    cout<< fixed<< setprecision(3) <<Tong_tien << "(VND)"<< endl;
    system("cls");


}




void In_bill (int STT[MAX], int So_luong[MAX], float& Tong_tien ,int& So_mon)
{
    gotoxy(35, 1);
    textcolor(11);
    cout<< " === HOA DON THANH TOAN === \n";

    textcolor(15);

    gotoxy(0,3);
    for (int i=0; i< 100; i++)
    {
        cout<< "=";
    }
    cout<< '\n';

    gotoxy(5, 4);
    cout<< " STT ";
    gotoxy(0,5);
    for( int i= 0; i< 100; i++)
    {
        cout<< "=";
    }



    gotoxy(20, 4);
    cout<< " TEN MON";

    gotoxy( 50, 4);
    cout<< " SO LUONG";

    gotoxy(80, 4);

    cout<< " SO TIEN";

    for( int i=0; i< So_mon; i++)
    {
        gotoxy(7, 6+ i);
        cout<< i+1<< endl;
    }

    for(int i= 0; i< So_mon; i++)
    {

        if (STT[i] == 1)
        {
            gotoxy(20, 6+i);
            cout<< " Bun dau mam tom";
        }
        else if ( STT[i] ==  2)
        {
            gotoxy(20, 6+i);
            cout<< " Pho bo";
        }
        else if ( STT[i] ==  3)
        {
            gotoxy(20, 6+i);
            cout<< " Pho ga";
        }
        else if ( STT[i] ==  4)
        {
            gotoxy(20, 6+i);
            cout<< " Bun rieu cua";
        }
        else if ( STT[i] ==  5)
        {
            gotoxy(20, 6+i);
            cout<< " Bun bo Hue";
        }
        else if ( STT[i] ==  6)
        {
            gotoxy(20, 6+i);
            cout<< " Banh da cua";
        }
        else if ( STT[i] ==  7)
        {
            gotoxy(20, 6+i);
            cout<< " Com ga";
        }
        else if ( STT[i] ==  8)
        {
            gotoxy(20, 6+i);
            cout<< " Com rang dua bo";
        }
        else if ( STT[i] ==  9)
        {
            gotoxy(20, 6+i);
            cout<< " Mi xao hai san";
        }
        else if ( STT[i] == 10)
        {
            gotoxy(20, 6+i);
            cout<< " Mi xao thit bo";
        }
        else if ( STT[i] ==  11)
        {
            gotoxy(20, 6+i);
            cout<< " Bia Ha Noi";
        }
        else if ( STT[i] ==  12)
        {
            gotoxy(20, 6+i);
            cout<< " Bia Sai Gon";
        }
        else if ( STT[i] ==  13)
        {
            gotoxy(20, 6+i);
            cout<< " Sinh to xoai";
        }
        else if ( STT[i] ==  14)
        {
            gotoxy(20, 6+i);
            cout<< " Sinh to dua hau";
        }
        else if ( STT[i] ==  15)
        {
            gotoxy(20, 6+i);
            cout<< " Sinh to bo";
        }
        else if ( STT[i] ==  16)
        {
            gotoxy(20, 6+i);
            cout<< " Nuoc chanh";
        }
        else if ( STT[i] ==  17 )
        {
            gotoxy(20, 6+i);
            cout<< " Nuoc chanh leo";
        }
        else if ( STT[i] ==  18)
        {
            gotoxy(20, 6+i);
            cout<< " Nuoc dua";
        }
        else if ( STT[i] ==  19)
        {
            gotoxy(20, 6+i);
            cout<< " Nuoc cam ep";
        }
        else if ( STT[i] ==  20)
        {
            gotoxy(20, 6+i);
            cout<< " Nuoc loc";
        }
    }

    for(int j= 0; j< So_mon; j++)
    {
        gotoxy(55, 6+ j);
        cout<< So_luong[j];
    }

}

