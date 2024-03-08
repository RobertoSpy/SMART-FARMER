#include <iostream>
#include <vector>
#include <string>

using namespace std;
int a[101][101], cal = 0, porc = 0, vaca = 0, oaie = 0, apa = 0;

void bordarematrice()
{
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 9; j++)
        {
            a[0][j] = -1;
            a[i][0] = -1;
            a[6][j] = -1;
            a[i][8] = -1;
        }
}
int i, j;
void citire()
{
    int m = -5, n, pozitie1, pozitie2, pozitie3, pozitie4;
    char piesa1, piesa2, piesa3, piesa4;
    int   q, l;
    i = 1;

    if (m == -5)
    {
        cout << "Va rog asezati piesele cum doriti:";
        m = 0;
    }

    cout << endl;
    int M = 1;
    while (M == 1)
    {
        M = 0;

        while (i < 6)
        {

            cout << "PE LINIA " << i << " ";
            cout << "CATE PIESE DORITI ?" << " ";

            do
            {
                cin >> n;
                if (n < 0 || n>5)cout << "NU PUTEM PUNE ATATEA PIESE, TREBUIE DIN [0,4]" << endl;

            } while (n < 0 || n>5);
            cout << endl;

            switch (i)
            {
            case 1:
                switch (n)
                {
                case 0:
                    cout << "PE LINIA " << i << " " << "NU VOM AVEA PIESE";
                    break;

                case 1:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;
                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    break;
                case 2:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;
                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;

                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    break;
                case 3:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);

                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie3;
                        if (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa3;
                        if (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;
                    if (piesa3 == 'A')apa++;
                    if (piesa3 == 'C')cal++;
                    if (piesa3 == 'V')vaca++;
                    if (piesa3 == 'P')porc++;
                    if (piesa3 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    if (pozitie3 == 1)a[i][1] = int(piesa3);
                    else if (pozitie3 == 3)a[i][3] = int(piesa3);
                    else if (pozitie3 == 5)a[i][5] = int(piesa3);
                    else if (pozitie3 == 7)a[i][7] = int(piesa3);
                    break;
                case 4:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";
                    cin >> pozitie1;
                    do
                    {
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;

                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";

                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie3;
                        if (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa3;
                        if (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A');



                    cout << endl;
                    do
                    {
                        cin >> pozitie4;
                        if (pozitie4 != 1 && pozitie4 != 3 && pozitie4 != 5 && pozitie4 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie4 != 1 && pozitie4 != 3 && pozitie4 != 5 && pozitie4 != 7);
                    cout << " ";

                    do
                    {
                        cin >> piesa4;
                        if (piesa4 != 'C' && piesa4 != 'V' && piesa4 != 'O' && piesa4 != 'P' && piesa4 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa4 != 'C' && piesa4 != 'V' && piesa4 != 'O' && piesa4 != 'P' && piesa4 != 'A');
                    cout << " ";
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;
                    if (piesa3 == 'A')apa++;
                    if (piesa3 == 'C')cal++;
                    if (piesa3 == 'V')vaca++;
                    if (piesa3 == 'P')porc++;
                    if (piesa3 == 'O')oaie++;
                    if (piesa4 == 'C')cal++;
                    if (piesa4 == 'V')vaca++;
                    if (piesa4 == 'P')porc++;
                    if (piesa4 == 'O')oaie++;
                    if (piesa4 == 'A')apa++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    if (pozitie3 == 1)a[i][1] = int(piesa3);
                    else if (pozitie3 == 3)a[i][3] = int(piesa3);
                    else if (pozitie3 == 5)a[i][5] = int(piesa3);
                    else if (pozitie3 == 7)a[i][7] = int(piesa3);
                    if (pozitie4 == 1)a[i][1] = int(piesa4);
                    else if (pozitie4 == 3)a[i][3] = int(piesa4);
                    else if (pozitie4 == 5)a[i][5] = int(piesa4);
                    else if (pozitie4 == 7)a[i][7] = int(piesa4);
                    break;
                default:
                    cout << "NUMAR INVALID DE PIESE" << endl;
                    break;
                }
                break;
            case 3:
                switch (n)
                {
                case 0:
                    cout << "PE LINIA " << i << " " << "NU VOM AVEA PIESE";
                    break;

                case 1:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;
                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    break;
                case 2:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;
                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;

                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    break;
                case 3:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);

                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie3;
                        if (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa3;
                        if (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;
                    if (piesa3 == 'A')apa++;
                    if (piesa3 == 'C')cal++;
                    if (piesa3 == 'V')vaca++;
                    if (piesa3 == 'P')porc++;
                    if (piesa3 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    if (pozitie3 == 1)a[i][1] = int(piesa3);
                    else if (pozitie3 == 3)a[i][3] = int(piesa3);
                    else if (pozitie3 == 5)a[i][5] = int(piesa3);
                    else if (pozitie3 == 7)a[i][7] = int(piesa3);
                    break;
                case 4:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";
                    cin >> pozitie1;
                    do
                    {
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;

                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";

                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie3;
                        if (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa3;
                        if (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A');



                    cout << endl;
                    do
                    {
                        cin >> pozitie4;
                        if (pozitie4 != 1 && pozitie4 != 3 && pozitie4 != 5 && pozitie4 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie4 != 1 && pozitie4 != 3 && pozitie4 != 5 && pozitie4 != 7);
                    cout << " ";

                    do
                    {
                        cin >> piesa4;
                        if (piesa4 != 'C' && piesa4 != 'V' && piesa4 != 'O' && piesa4 != 'P' && piesa4 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa4 != 'C' && piesa4 != 'V' && piesa4 != 'O' && piesa4 != 'P' && piesa4 != 'A');
                    cout << " ";

                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;
                    if (piesa3 == 'A')apa++;
                    if (piesa3 == 'C')cal++;
                    if (piesa3 == 'V')vaca++;
                    if (piesa3 == 'P')porc++;
                    if (piesa3 == 'O')oaie++;
                    if (piesa4 == 'C')cal++;
                    if (piesa4 == 'V')vaca++;
                    if (piesa4 == 'P')porc++;
                    if (piesa4 == 'O')oaie++;
                    if (piesa4 == 'A')apa++;

                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    if (pozitie3 == 1)a[i][1] = int(piesa3);
                    else if (pozitie3 == 3)a[i][3] = int(piesa3);
                    else if (pozitie3 == 5)a[i][5] = int(piesa3);
                    else if (pozitie3 == 7)a[i][7] = int(piesa3);
                    if (pozitie4 == 1)a[i][1] = int(piesa4);
                    else if (pozitie4 == 3)a[i][3] = int(piesa4);
                    else if (pozitie4 == 5)a[i][5] = int(piesa4);
                    else if (pozitie4 == 7)a[i][7] = int(piesa4);
                    break;
                default:
                    cout << "NUMAR INVALID DE PIESE" << endl;
                    break;
                }
                break;
            case 5:
                switch (n)
                {
                case 0:
                    cout << "PE LINIA " << i << " " << "NU VOM AVEA PIESE";
                    break;

                case 1:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;
                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    break;
                case 2:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;
                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;

                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    break;
                case 3:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";

                    do
                    {
                        cin >> pozitie1;
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);

                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie3;
                        if (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa3;
                        if (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A');
                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;
                    if (piesa3 == 'A')apa++;
                    if (piesa3 == 'C')cal++;
                    if (piesa3 == 'V')vaca++;
                    if (piesa3 == 'P')porc++;
                    if (piesa3 == 'O')oaie++;


                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    if (pozitie3 == 1)a[i][1] = int(piesa3);
                    else if (pozitie3 == 3)a[i][3] = int(piesa3);
                    else if (pozitie3 == 5)a[i][5] = int(piesa3);
                    else if (pozitie3 == 7)a[i][7] = int(piesa3);
                    break;
                case 4:
                    cout << "PE CE POZITIE DE PE LINIA " << i << "?(1,3,5,7), URMAT DE CE PIESA?" << " ";
                    cin >> pozitie1;
                    do
                    {
                        if (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie1 != 1 && pozitie1 != 3 && pozitie1 != 5 && pozitie1 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa1;
                        if (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa1 != 'C' && piesa1 != 'V' && piesa1 != 'O' && piesa1 != 'P' && piesa1 != 'A');
                    cout << endl;

                    do
                    {
                        cin >> pozitie2;
                        if (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie2 != 1 && pozitie2 != 3 && pozitie2 != 5 && pozitie2 != 7);
                    cout << " ";

                    do
                    {
                        cin >> piesa2;
                        if (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa2 != 'C' && piesa2 != 'V' && piesa2 != 'O' && piesa2 != 'P' && piesa2 != 'A');
                    cout << endl;
                    do
                    {
                        cin >> pozitie3;
                        if (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie3 != 1 && pozitie3 != 3 && pozitie3 != 5 && pozitie3 != 7);
                    cout << " ";
                    do
                    {
                        cin >> piesa3;
                        if (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa3 != 'C' && piesa3 != 'V' && piesa3 != 'O' && piesa3 != 'P' && piesa3 != 'A');



                    cout << endl;
                    do
                    {
                        cin >> pozitie4;
                        if (pozitie4 != 1 && pozitie4 != 3 && pozitie4 != 5 && pozitie4 != 7)cout << "UPS...ATI GRESIT INDICELE,REINCERCATI" << endl;

                    } while (pozitie4 != 1 && pozitie4 != 3 && pozitie4 != 5 && pozitie4 != 7);
                    cout << " ";

                    do
                    {
                        cin >> piesa4;
                        if (piesa4 != 'C' && piesa4 != 'V' && piesa4 != 'O' && piesa4 != 'P' && piesa4 != 'A')cout << "UPS...ATI GRESIT PIESA,REINCERCATI" << endl;

                    } while (piesa4 != 'C' && piesa4 != 'V' && piesa4 != 'O' && piesa4 != 'P' && piesa4 != 'A');
                    cout << " ";

                    if (piesa1 == 'A')apa++;
                    if (piesa1 == 'C')cal++;
                    if (piesa1 == 'V')vaca++;
                    if (piesa1 == 'P')porc++;
                    if (piesa1 == 'O')oaie++;
                    if (piesa2 == 'A')apa++;
                    if (piesa2 == 'C')cal++;
                    if (piesa2 == 'V')vaca++;
                    if (piesa2 == 'P')porc++;
                    if (piesa2 == 'O')oaie++;
                    if (piesa3 == 'A')apa++;
                    if (piesa3 == 'C')cal++;
                    if (piesa3 == 'V')vaca++;
                    if (piesa3 == 'P')porc++;
                    if (piesa3 == 'O')oaie++;
                    if (piesa4 == 'C')cal++;
                    if (piesa4 == 'V')vaca++;
                    if (piesa4 == 'P')porc++;
                    if (piesa4 == 'O')oaie++;
                    if (piesa4 == 'A')apa++;
                    if (pozitie1 == 1)a[i][1] = int(piesa1);
                    else if (pozitie1 == 3)a[i][3] = int(piesa1);
                    else if (pozitie1 == 5)a[i][5] = int(piesa1);
                    else if (pozitie1 == 7)a[i][7] = int(piesa1);
                    if (pozitie2 == 1)a[i][1] = int(piesa2);
                    else if (pozitie2 == 3)a[i][3] = int(piesa2);
                    else if (pozitie2 == 5)a[i][5] = int(piesa2);
                    else if (pozitie2 == 7)a[i][7] = int(piesa2);
                    if (pozitie3 == 1)a[i][1] = int(piesa3);
                    else if (pozitie3 == 3)a[i][3] = int(piesa3);
                    else if (pozitie3 == 5)a[i][5] = int(piesa3);
                    else if (pozitie3 == 7)a[i][7] = int(piesa3);
                    if (pozitie4 == 1)a[i][1] = int(piesa4);
                    else if (pozitie4 == 3)a[i][3] = int(piesa4);
                    else if (pozitie4 == 5)a[i][5] = int(piesa4);
                    else if (pozitie4 == 7)a[i][7] = int(piesa4);
                    break;
                default:
                    cout << "NUMAR INVALID DE PIESE" << endl;
                    break;
                }
                break;

            default:
                cout << "PE ACEASTA LINIE NU SE POT PUNE PIESE" << endl;
                break;
            }
            i += 2;

        }
        if (cal == 1 || vaca == 1 || oaie == 1 || porc == 1)
        {
            M = 1;
            i = 1;
            cout << " AMBELE PERECHI DE PIESE";
            cal = 0;
            vaca = 0;
            porc = 0;
            oaie = 0;
            apa = 0;
            for (q = 0; q < 7; q++)
                for (l = 0; l < 9; l++)
                    a[i][j] = 0;
        }
        else M = 0;
        if (cal > 2 || vaca > 2 || oaie > 2 || porc > 2)
        {
            M = 1;
            i = 1;
            cout << "VA RUGAM PUNETI DOAR 2 PIESE DE ACELASI TIP";
            cal = 0;
            vaca = 0;
            porc = 0;
            oaie = 0;
            apa = 0;
            for (q = 0; q < 7; q++)
                for (l = 0; l < 9; l++)
                    a[i][j] = 0;
        }
        else M = 0;



    }
}


struct piesa
{
    int lungime;
    int latime;
    int nume;
};

vector<piesa> piese
{
    {1,5,-1},
    {3,1,-1},
    {4,2,-1}
};
void afisareMatrice(int a[101][101])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}
bool verifgardlin(int i)
{
    if (i % 2 == 0)return true;
    return false;
}
bool verifgardcol(int j)
{
    if (j % 2 == 0)return true;
    return false;
}
void repar(int v[101][101])
{
    int i, j;
    for (i = 0; i <= 6; i++)
        for (j = 0; j <= 8; j++)
        {
            if (i % 2 == 1 && j % 2 == 1)
            {
               
                if (v[i][j] != -1 && v[i - 1][j] == -1 && v[i][j - 1] == -1)
                {
                    v[i - 1][j - 1] = -1;
                }
                
                if (v[i][j] != -1 && v[i - 1][j] == -1 && v[i][j + 1] == -1)
                {
                    v[i - 1][j + 1] = -1;
                }
                
                if (v[i][j] != -1 && v[i][j - 1] == -1 && v[i + 1][j] == -1)
                {
                    v[i + 1][j - 1] = -1;
                }
               
                if (v[i][j] != -1 && v[i][j + 1] == -1 && v[i + 1][j] == -1)
                {
                    v[i + 1][j + 1] = -1;
                }
            }
        }
}

int gard1(int a[101][101])
{
    repar(a);
    int i, j, ok, k;
    ok = 1;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 7; j++)
        {
            
            if (a[i][j] != 0 && a[i][j] != -1) 
            {
                for (k = j; a[i][k] != -1; k++) 
                {
                    if (a[i][k] != a[i][j] && a[i][k] != 0 && a[i][k] != -1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;
                    }
                    if (a[i][k] != -1)a[i][k] = a[i][j];
                }
                for (k = j; a[i][k] != -1; k--) 
                {
                    if (a[i][k] != a[i][j] && a[i][k] != 0 && a[i][k] != -1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;
                    }
                    if (a[i][k] != -1)a[i][k] = a[i][j];
                }
                for (k = i; a[k][j] != -1; k++) 
                {
                    if (a[k][j] != a[i][j] && a[k][j] != 0 && a[k][j] != -1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;
                    }
                    if (a[k][j] != -1)a[k][j] = a[i][j];
                }
                for (k = i; a[k][j] != -1; k--) 
                {
                    if (a[k][j] != a[i][j] && a[k][j] != 0 && a[k][j] != -1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;
                    }
                    if (a[k][j] != -1)a[k][j] = a[i][j];
                }
                int k1 = i;
                int k2 = j;
                while (a[k1][k2] != -1)
                {
                    k1--;
                    k2--;
                    if (a[k1][k2] != a[i][j] && a[k1][k2] != 0 && a[k1][k2] != -1)
                    {
                        {
                            ok = 0;
                            cout << "asezare incorecta a gardului" << endl;
                            return 0;
                        }
                    }
                    if (a[k1][k2] != -1) a[k1][k2] = a[i][j];
                }
                k1 = i;
                k2 = j;
                while (a[k1][k2] != -1)
                {
                    k1++;
                    k2++;
                    if (a[k1][k2] != a[i][j] && a[k1][k2] != 0 && a[k1][k2] != -1)
                    {
                        {
                            ok = 0;
                            cout << "asezare incorecta a gardului" << endl;
                            return 0;
                        }
                    }
                    if (a[k1][k2] != -1) a[k1][k2] = a[i][j];
                }
                k1 = i;
                k2 = j;
                while (a[k1][k2] != -1)
                {
                    k1++;
                    k2--;
                    if (a[k1][k2] != a[i][j] && a[k1][k2] != 0 && a[k1][k2] != -1)
                    {
                        {
                            ok = 0;
                            cout << "asezare incorecta a gardului" << endl;
                            return 0;
                        }
                    }
                    if (a[k1][k2] != -1) a[k1][k2] = a[i][j];
                }
                k1 = i;
                k2 = j;
                while (a[k1][k2] != -1)
                {
                    k1--;
                    k2++;
                    if (a[k1][k2] != a[i][j] && a[k1][k2] != 0 && a[k1][k2] != -1)
                    {
                        {
                            ok = 0;
                            cout << "asezare incorecta a gardului" << endl;
                            return 0;
                        }
                    }
                    if (a[k1][k2] != -1) a[k1][k2] = a[i][j];
                }
            }
        }
    
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 7; j++)
            if (a[i][j] == 0) gard1(a);
    if (ok) return 1;
}

int gard2(int a[101][101])
{
    repar(a);
    int i, j, ok, k;
    int nrap, apa = 65;
    ok = 1;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 7; j++)
        {
            
            if (a[i][j] > 0 && a[i][j] != 65) 
            {
                nrap = 0;
                for (k = j; a[i][k] != -1; k++) 
                {
                    if (a[i][k] == apa) nrap++;
                    if ((a[i][k] != a[i][j] && a[i][k] > 0 && a[i][k] != 65) || nrap > 1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;
                    }
                    if (a[i][k] == 0)a[i][k] = a[i][j];
                }
                for (k = j; a[i][k] != -1; k--) 
                {
                    if (a[i][k] == apa) nrap++;
                    if ((a[i][k] != a[i][j] && a[i][k] > 0 && a[i][k] != 65) || nrap > 1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;
                    }
                    if (a[i][k] == 0)a[i][k] = a[i][j];
                }
                for (k = i; a[k][j] != -1; k++) 
                {
                    if (a[k][j] == apa) nrap++;
                    if ((a[k][j] != a[i][j] && a[k][j] > 0 && a[k][j] != 65) || nrap > 1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;
                    }
                    if (a[k][j] == 0)a[k][j] = a[i][j];
                }
                for (k = i; a[k][j] != -1; k--) 
                {
                    if (a[k][j] == apa) nrap++;
                    if ((a[k][j] != a[i][j] && a[k][j] > 0 && a[k][j] != 65) || nrap > 1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;
                    }
                    if (a[k][j] == 0)a[k][j] = a[i][j];
                }
                int k1 = i;
                int k2 = j;
                while (a[k1][k2] != -1)
                {
                    k1--;
                    k2--;
                    if (a[k1][k2] == apa) nrap++;
                    if ((a[k1][k2] != a[i][j] && a[k1][k2] > 0 && a[k1][k2] != 65) || nrap > 1)
                    {
                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;

                    }
                    if (a[k1][k2] == 0) a[k1][k2] = a[i][j];
                }
                k1 = i;
                k2 = j;
                while (a[k1][k2] != -1)
                {
                    k1++;
                    k2++;
                    if (a[k1][k2] == apa) nrap++;
                    if ((a[k1][k2] != a[i][j] && a[k1][k2] > 0 && a[k1][k2] != 65) || nrap > 1)
                    {

                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;

                    }
                    if (a[k1][k2] == 0) a[k1][k2] = a[i][j];
                }
                k1 = i;
                k2 = j;
                while (a[k1][k2] != -1)
                {
                    k1++;
                    k2--;
                    if (a[k1][k2] == apa) nrap++;
                    if ((a[k1][k2] != a[i][j] && a[k1][k2] > 0 && a[k1][k2] != 65) || nrap > 1)
                    {

                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;

                    }
                    if (a[k1][k2] == 0) a[k1][k2] = a[i][j];
                }
                k1 = i;
                k2 = j;
                while (a[k1][k2] != -1)
                {
                    k1--;
                    k2++;
                    if (a[k1][k2] == apa) nrap++;
                    if ((a[k1][k2] != a[i][j] && a[k1][k2] > 0 && a[k1][k2] != 65) || nrap > 1)
                    {

                        ok = 0;
                        cout << "asezare incorecta a gardului" << endl;
                        return 0;

                    }
                    if (a[k1][k2] == 0) a[k1][k2] = a[i][j];
                }
            }

        }

   
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 7; j++)
            if (a[i][j] == 0) gard2(a);

    if (ok) return 1;
}

int main()
{

    const int nrLinii = 7;
    const int nrColoane = 9;

    citire();
    bordarematrice();
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    string poz1, poz2, poz3, h;
    int k = 0, l = 0, linie, coloana, r, e = 0, ok = 0, j = 0, c = 0, b[101][101];
    char orientare;
    for (const auto& piesa : piese)
    {
        if (c != 1)
        {
            l = 0;
            while (l == 0)
            {

                j = 0;

                r = 1;

                while (r != 0)
                {
                    r = 0;
                    cout << "Introduceti linia pentru P" << piesa.nume << ": ";
                    cin >> linie;

                    cout << "Introduceti coloana pentru P" << piesa.nume << ": ";
                    cin >> coloana;

                    cout << "Introduceti orientarea pentru P" << piesa.nume << " (H pentru orizontal, V pentru vertical, C pentru colt): ";
                    cin >> orientare;
                    if (orientare == 'H')
                        if (verifgardlin(linie) == false)
                        {
                            cout << "NU PUTEM PUNE GARD AICI, VA ROG REINCERCATI" << " ";
                            r = 1;
                        }
                        else r = 0;
                    else
                    {
                        if (orientare == 'V')

                            if (verifgardcol(coloana) == false)
                            {
                                cout << "NU PUTEM PUNE GARD AICI, VA ROG REINCERCATI" << " ";
                                r = 1;
                            }
                            else r = 0;
                    }

                    if (orientare == 'C' || orientare == 'H' || orientare == 'V')
                        r = 0;
                    else
                    {
                        cout << "NU PUTEM PUNE GARDUL IN ACEASTA POZITIE, VA RUGAM REINCERCATI" << " ";
                        r = 1;
                    }


                }

                if (orientare == 'H')
                {
                    if (piesa.latime > piesa.lungime)
                    {
                        if (coloana + piesa.latime > nrColoane - 1)
                        {
                            {
                                cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                            }

                        }

                        else
                        {
                            for (int i = 0; i < piesa.latime; ++i)
                            {
                                if (a[linie][coloana + i] == -1)j = 1;
                            }
                            if (j == 1)cout << "SE INTERSECTEAZA ALT GARD";
                            else
                            {
                                for (int i = 0; i < piesa.latime; ++i)
                                {
                                    a[linie][coloana + i] = piesa.nume;
                                }
                                l++;
                                afisareMatrice(a);
                                e++;
                                for (int w = 0; w <= 6; w++)
                                    for (int t = 0; t <= 8; t++)
                                        b[w][t] = a[w][t];
                                cout << "ESTE NIVEL CU APA?DA/NU";
                                cin >> h;
                                if (h == "DA")
                                    if (gard2(a) == 1)
                                    {
                                        {cout << "BRAVO"; c = 1; }
                                    }
                                    else {
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                a[w][t] = b[w][t];
                                    }
                                if (h == "NU")
                                    if (gard1(a) == 1)
                                    {
                                        {cout << "BRAVO"; c = 1; }
                                    }
                                    else {
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                a[w][t] = b[w][t];
                                    }

                            }
                        }
                    }
                    else
                    {
                        if (coloana + piesa.lungime > nrColoane - 1)
                        {
                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                        }
                        else
                        {
                            for (int i = 0; i < piesa.lungime; ++i)
                            {
                                if (a[linie][coloana + i] == -1) j = 1;
                            }
                            if (j == 1)cout << "SE INTERSECTEAZA ALT GARD";
                            else
                            {
                                for (int i = 0; i < piesa.lungime; ++i)
                                {
                                    a[linie][coloana + i] = piesa.nume;
                                }
                                l++;
                                afisareMatrice(a);
                                e++;
                                for (int w = 0; w <= 6; w++)
                                    for (int t = 0; t <= 8; t++)
                                        b[w][t] = a[w][t];
                                cout << "ESTE NIVEL CU APA?DA/NU";
                                cin >> h;
                                if (h == "DA")
                                    if (gard2(a) == 1)
                                    {
                                        cout << "BRAVO"; c = 1;
                                    }
                                    else {
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                a[w][t] = b[w][t];
                                    }
                                if (h == "NU")
                                    if (gard1(a) == 1)
                                    {
                                        cout << "BRAVO"; c = 1;
                                    }
                                    else {
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                a[w][t] = b[w][t];
                                    }
                            }
                        }
                    }


                }
                else if (orientare == 'V')
                {
                    if (piesa.lungime > piesa.latime)
                    {
                        if (linie + piesa.lungime > nrLinii - 1)
                        {
                            {
                                cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                            }
                        }
                        else
                        {
                            for (int i = 0; i < piesa.lungime; ++i)
                            {
                                if (a[linie + i][coloana] == -1) j = 1;
                            }
                            if (j == 1)cout << "SE INTERSECTEAZA ALT GARD";
                            else
                            {

                                for (int i = 0; i < piesa.lungime; ++i)
                                {
                                    a[linie + i][coloana] = piesa.nume;
                                }

                                l++;
                                afisareMatrice(a);
                                e++;
                                for (int w = 0; w <= 6; w++)
                                    for (int t = 0; t <= 8; t++)
                                        b[w][t] = a[w][t];
                                cout << "ESTE NIVEL CU APA?DA/NU";
                                cin >> h;
                                if (h == "DA")
                                    if (gard2(a) == 1)
                                    {
                                        cout << "BRAVO"; c = 1;
                                    }
                                    else {
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                a[w][t] = b[w][t];
                                    }
                                if (h == "NU")
                                    if (gard1(a) == 1)
                                    {
                                        cout << "BRAVO"; c = 1;
                                    }
                                    else {
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                a[w][t] = b[w][t];
                                    }
                            }
                        }
                    }

                    else
                    {
                        if (linie + piesa.latime > nrLinii - 1)
                        {
                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                        }
                        else
                        {
                            for (int i = 0; i < piesa.latime; ++i)
                            {
                                if (a[linie + i][coloana] == -1)  j = 1;
                            }
                            if (j == 1)cout << "SE INTERSECTEAZA ALT GARD";
                            else
                            {
                                for (int i = 0; i < piesa.latime; ++i)
                                {
                                    a[linie + i][coloana] = piesa.nume;
                                }
                                l++;
                                afisareMatrice(a);
                                e++;
                                for (int w = 0; w <= 6; w++)
                                    for (int t = 0; t <= 8; t++)
                                        b[w][t] = a[w][t];
                                cout << "ESTE NIVEL CU APA?DA/NU";
                                cin >> h;
                                if (h == "DA")
                                    if (gard2(a) == 1)
                                    {
                                        cout << "BRAVO"; c = 1;
                                    }
                                    else {
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                a[w][t] = b[w][t];
                                    }
                                if (h == "NU")
                                    if (gard1(a) == 1)
                                    {
                                        cout << "BRAVO"; c = 1;
                                    }
                                    else {
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                a[w][t] = b[w][t];
                                    }
                            }
                        }
                    }

                }
                else if (orientare == 'C')

                {
                    cout << "VRETI PIESA ORIZONTALA SAU VERTICALA(H, V)?";
                    cin >> poz1;

                    if (poz1 == "H")
                    {
                        if (verifgardlin(linie) == false)
                        {
                            cout << "UPS..NU PUTETI PUNE AICI...REINCERCATI";
                        }

                        else if (coloana + piesa.lungime > nrColoane - 1)
                        {
                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                        }
                        else
                        {
                            for (i = 0; i < piesa.lungime; i++)
                            {
                                if (a[linie][coloana + i] == -1)j = 1;
                            }
                            if (j == 1)
                            {
                                cout << "SE INTERSECTEAZA ALT GARD";
                            }
                            else
                            {
                                for (i = 0; i < piesa.lungime; i++)
                                {
                                    a[linie][coloana + i] = piesa.nume;
                                }
                                afisareMatrice(a);
                                cout << "CUM VRETI SA FIE ORIENTAT CAPUL PIESEI?IN STANGA SAU IN DREAPTA?(HV, HE)";
                                cin >> poz2;
                                cout << "CUM VRETI SA FIE ORIENTAT CAPUL PIESEI?IN SUS SAU IN JOS?(HN, HS)";
                                cin >> poz3;
                                if (poz2 == "HV")
                                {
                                    if (poz3 == "HN")
                                    {
                                        if (linie - piesa.latime + 1 <= 0)
                                        {
                                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                                        }
                                        else
                                        {

                                            for (i = 0; i < piesa.latime; i++)
                                                a[linie - i][coloana] = piesa.nume;

                                        }
                                        l++;
                                        afisareMatrice(a);
                                        e++;
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                b[w][t] = a[w][t];
                                        cout << "ESTE NIVEL CU APA?DA/NU";
                                        cin >> h;
                                        if (h == "DA")
                                            if (gard2(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                        if (h == "NU")
                                            if (gard1(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                    }
                                    else if (poz3 == "HS")
                                    {
                                        if (linie + piesa.latime > nrLinii - 1)
                                        {
                                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                                        }
                                        else
                                        {

                                            for (i = 0; i < piesa.latime; i++)
                                                a[linie + i][coloana] = piesa.nume;
                                        }
                                        l++;
                                        afisareMatrice(a);
                                        e++;
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                b[w][t] = a[w][t];
                                        cout << "ESTE NIVEL CU APA?DA/NU";
                                        cin >> h;
                                        if (h == "DA")
                                            if (gard2(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                        if (h == "NU")
                                            if (gard1(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                    }
                                }
                                else if (poz2 == "HE")
                                {
                                    if (poz3 == "HN")
                                    {
                                        if (linie - piesa.latime + 1 <= 0)
                                        {
                                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                                        }
                                        else
                                        {

                                            for (i = 0; i < piesa.latime; i++)
                                                a[linie - i][coloana + piesa.lungime - 1] = piesa.nume;

                                        }
                                        l++;
                                        afisareMatrice(a);
                                        e++;
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                b[w][t] = a[w][t];
                                        cout << "ESTE NIVEL CU APA?DA/NU";
                                        cin >> h;
                                        if (h == "DA")
                                            if (gard2(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                        if (h == "NU")
                                            if (gard1(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                    }
                                    else if (poz3 == "HS")
                                    {
                                        if (linie + piesa.latime > nrLinii - 1)
                                        {
                                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                                        }
                                        else
                                        {

                                            for (i = 0; i < piesa.latime; i++)
                                                a[linie + i][coloana + piesa.lungime - 1] = piesa.nume;
                                        }
                                        l++;
                                        afisareMatrice(a);
                                        e++;
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                b[w][t] = a[w][t];
                                        cout << "ESTE NIVEL CU APA?DA/NU";
                                        cin >> h;
                                        if (h == "DA")
                                            if (gard2(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                        if (h == "NU")
                                            if (gard1(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                    }
                                }
                            }
                        }
                    }
                    else if (poz1 == "V")
                    {
                        if (verifgardlin(coloana) == false)
                        {
                            cout << "UPS..NU PUTETI PUNE AICI...REINCERCATI";
                        }
                        else if (linie + piesa.lungime > nrLinii - 1)
                        {
                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                        }
                        else
                        {
                            for (i = 0; i < piesa.lungime; i++)
                                if (a[linie + i][coloana] == -1)j = 1;
                            if (j == 1)
                            {
                                cout << "SE INTERSECTEAZA GARDURILE";
                            }
                            else
                            {
                                for (i = 0; i < piesa.lungime; i++)
                                    a[linie + i][coloana] = piesa.nume;

                                afisareMatrice(a);
                                cout << "CUM VRETI SA FIE ORIENTAT CAPUL PIESEI?IN SUS SAU IN JOS?(VN, VS)";
                                cin >> poz2;
                                cout << "CUM VRETI SA FIE ORIENTAT CAPUL PIESEI?IN STANGA SAU IN DREAPTA?(VV, VE)";
                                cin >> poz3;
                                if (poz2 == "VN")
                                {
                                    if (poz3 == "VV")
                                    {
                                        if (coloana - piesa.latime < 0)
                                        {
                                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                                        }
                                        else
                                        {

                                            for (i = 0; i < piesa.latime; i++)
                                                a[linie][coloana - i] = piesa.nume;

                                        }
                                        l++;
                                        afisareMatrice(a);
                                        e++;
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                b[w][t] = a[w][t];
                                        cout << "ESTE NIVEL CU APA?DA/NU";
                                        cin >> h;
                                        if (h == "DA")
                                            if (gard2(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                        if (h == "NU")
                                            if (gard1(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                    }
                                    else if (poz3 == "VE")
                                    {
                                        if (coloana + piesa.latime > nrColoane - 1)
                                        {
                                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                                        }
                                        else
                                        {

                                            for (i = 0; i < piesa.latime; i++)
                                                a[linie][coloana + i] = piesa.nume;
                                        }
                                        l++;
                                        afisareMatrice(a);
                                        e++;
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                b[w][t] = a[w][t];
                                        cout << "ESTE NIVEL CU APA?DA/NU";
                                        cin >> h;
                                        if (h == "DA")
                                            if (gard2(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                        if (h == "NU")
                                            if (gard1(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                    }
                                }
                                else if (poz2 == "VS")
                                {
                                    if (poz3 == "VV")
                                    {
                                        if (coloana - piesa.latime + 1 <= 0)
                                        {
                                            cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                                        }
                                        else
                                        {


                                            for (i = 0; i < piesa.latime; i++)
                                                a[linie][coloana - i] = piesa.nume;

                                        }
                                        l++;
                                        afisareMatrice(a);
                                        e++;
                                        for (int w = 0; w <= 6; w++)
                                            for (int t = 0; t <= 8; t++)
                                                b[w][t] = a[w][t];
                                        cout << "ESTE NIVEL CU APA?DA/NU";
                                        cin >> h;
                                        if (h == "DA")
                                            if (gard2(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }
                                        if (h == "NU")
                                            if (gard1(a) == 1)
                                            {
                                                cout << "BRAVO"; c = 1;
                                            }
                                            else {
                                                for (int w = 0; w <= 6; w++)
                                                    for (int t = 0; t <= 8; t++)
                                                        a[w][t] = b[w][t];
                                            }

                                    }
                                }
                                else if (poz3 == "VE")
                                {
                                    if (coloana + piesa.latime > nrColoane - 1)
                                    {
                                        cout << "UPS..IESE DIN MATRICE...REINCERCATI";
                                    }
                                    else
                                    {
                                        for (i = 0; i < piesa.latime; i++)
                                            a[linie][coloana + i] = piesa.nume;
                                    }
                                    l++;
                                    afisareMatrice(a);
                                    e++;
                                    for (int w = 0; w <= 6; w++)
                                        for (int t = 0; t <= 8; t++)
                                            b[w][t] = a[w][t];
                                    cout << "ESTE NIVEL CU APA?DA/NU";
                                    cin >> h;
                                    if (h == "DA")
                                        if (gard2(a) == 1)
                                        {
                                            cout << "BRAVO"; c = 1;
                                        }
                                        else {
                                            for (int w = 0; w <= 6; w++)
                                                for (int t = 0; t <= 8; t++)
                                                    a[w][t] = b[w][t];
                                        }
                                    if (h == "NU")
                                        if (gard1(a) == 1)
                                        {
                                            cout << "BRAVO"; c = 1;
                                        }
                                        else {
                                            for (int w = 0; w <= 6; w++)
                                                for (int t = 0; t <= 8; t++)
                                                    a[w][t] = b[w][t];
                                        }
                                }
                            }
                        }
                    }
                }
            }


        }
        else break;
    }

    return 0;
}
