#include <iostream>
using namespace std;
constexpr int NELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    cout << "1-100 ertekek duplazasa"  << endl;
    for (int i = 0; i < NELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < NELEMENTS; i++)
    {
        cout << "Ertek:" << endl;
    }    
    cout << "Atlag szamitasa: " << endl;
    int atlag;
    for (int i = 0; i < NELEMENTS; i++)
    {
        atlag += b[i];
    };
    atlag /= NELEMENTS;
    cout << "Atlag: " << atlag << endl;

    cout << "remelem jol aludtal Dave" << endl;
    
    return 0;
}
