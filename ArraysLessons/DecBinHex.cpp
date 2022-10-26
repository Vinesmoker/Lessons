#include<iostream>
using namespace std;

//#define DEC_TO_BIN
//#define DEC_TO_HEX

void main ()
{
	setlocale(LC_ALL, "");

#ifdef DEC_TO_BIN
    int dec; int bin = 0; int buff = 1;
    cout << "������� ���������� �����: "; cin >> dec;
    while (dec)
    {
        bin += (dec % 2) * buff;
        buff *= 10;
        dec /= 2;
    }
    cout << bin << endl;
#endif // DEC_TO_BIN

#ifdef DEC_TO_HEX
    int dec;
    cout << "������� ���������� �����: "; cin >> dec;
    cout << dec << endl;
    const int n = 8;
    int hex[n] = {}; // ���� ������ ����� ������� HEX
    int i = 0;
    for (; dec; dec /= 16, i++)
    {
        hex[i] = dec % 16;
    }
    for (--i; i >= 0; --i)
    {
        switch (hex[i])
        {
        case 10:cout << "A"; break;
        case 11:cout << "B"; break;
        case 12:cout << "C"; break;
        case 13:cout << "D"; break;
        case 14:cout << "E"; break;
        case 15:cout << "F"; break;
        default:cout << hex[i];
        }
    }
    cout << endl;
#endif // DEC_TO_HEX


}