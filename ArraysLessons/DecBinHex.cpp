#include<iostream>
using namespace std;

//#define DEC_TO_BIN

void main ()
{
	setlocale(LC_ALL, "");

    // »з DEC в BIN
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


    // »з DEC в HEX

    int dec;
    cout << "¬ведите дес€тичное число: "; cin >> dec;
    cout << dec << endl;
    const int n = 8;
    int hex[n] = {}; // Ётот массив будет хранить HEX
    int i = 0;
    for (; dec; dec /= 16, i++)
    {
        hex[i] = dec % 16;
    }
    for ( --i; i >= 0; --i)
    {
        cout << hex[i];
    }
    cout << endl;

}