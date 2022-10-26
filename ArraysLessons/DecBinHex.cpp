#include<iostream>
using namespace std;

//#define DEC_TO_BIN
#define DEC_TO_HEX_FOR_SWITCH

void main ()
{
	setlocale(LC_ALL, "");

#ifdef DEC_TO_BIN
    int dec; int bin = 0; int buff = 1;
    cout << "¬ведите дес€тичное число: "; cin >> dec;
    while (dec)
    {
        bin += (dec % 2) * buff;
        buff *= 10;
        dec /= 2;
    }
    cout << bin << endl;
#endif // DEC_TO_BIN

#ifdef DEC_TO_HEX_FOR_SWITCH
    int dec;
    cout << "¬ведите дес€тичное число: "; cin >> dec;
    cout << dec << endl;
    const int n = 8;
    char hex[n] = {}; // Ётот массив будет хранить HEX
    int i = 0;
    for (; dec; dec /= 16, i++)
    {
        hex[i] = dec % 16; 
    }
    for (--i; i >= 0; --i)
    {
        /*
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
        */

        //if (hex[i] < 10)cout << hex[i]; else cout << char(hex[i] + 55);
        //(hex[i] < 10) ? cout << hex[i] : cout << char(hex[i] + 55);
        //cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
        //cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
        hex[i] += hex[i] < 10 ? 48 : 55; cout << hex[i];
    }
    cout << endl;
#endif // DEC_TO_HEX_FOR_SWITCH
}