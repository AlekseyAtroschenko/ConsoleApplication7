#include <iostream>
using namespace std; //Убрали std

/*Требуется определить, является ли данный год високосным.
(Напоминаю, что годд является високосным, если его номер кратен 4,
но не кратен 100, а также если он кратен 400 */

int main()
{
    setlocale(0, "");
    //int year;
    //cout << "Программа для выявления высокосного года\n Введите год: ";
    //cin >> year;
    //// (5/5 = 0) (5%2=5) (&& = И) (|| = ИЛИ)
    //if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    //    cout << "Год високосный";
    //else
    //    cout << "Год невисокосный";

    /*int a1;
    int a2;
    int b1;
    int b2;

    cout << "Введите строки Ладьи: ";
    cin >> a1;
    cout << "Введите номер столбца Ладьи: ";
    cin >> a2;
    cout << "Введите строку фигуры: ";
    cin >> b1;
    cout << "Введите номер столбца фигуры : ";
    cin >> b2;

    if (a1 == b1 || a2 == b2)
        cout << "Yes";
    else
        cout << "No";*/

    //int x1;
    //int x2;
    //int y1;
    //int y2;

    //cout << "Введите номер строки коня:";
    //cin >> x1;
    //cout << "Введите номер строки фигуры:";
    //cin >> x2;
    //cout << "Введите номер столбца коня:";
    //cin >> y1;
    //cout << "Введите номер столбца фигуры:";
    //cin >> y2;

    //if ((x1 == x2 - 2 && y1 == y1 - 1) || 
    //    (x1 == x2 + 2 && y1 == y1 + 1) ||
    //    (x1 == x2 + 2 && y1 == y1 - 1) ||
    //    (x1 == x2 - 2 && y1 == y1 + 1) || 
    //    (x1 == x2 - 1 && y1 == y1 - 2) || 
    //    (x1 == x2 + 1 && y1 == y1 + 2) || 
    //    (x1 == x2 + 1 && y1 == y1 - 2) || 
    //    (x1 == x2 - 1 && y1 == y1 + 2))
    //    cout << "Yes";
    //else
    //    cout << "No";
    //
    //int a, b, c;
    //cin >> a >> b >> c; // 3 2 1
    //if (a > b)swap(a, b); // a=2 b=3
    //if (a > c)swap(a, c); // a=2 c=1
    //if (b > c)swap(b, c); // b=3 c=1
    //cout << a << b << c;

 
    for (int i = 35; i <= 87; i++)
    {
        if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5)
        {
            cout << i;
            cout << endl;
        }
    }


}

