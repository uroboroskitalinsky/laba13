//
//  main.cpp
//  VVP13
//
//  Created by Роберт Скиталинский on 30.12.2021.
//

#include <iostream>
#include <cmath>
using namespace std;

//Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.
/*
int main(){
    float a,b;
    cin >> a;
    b = a * 0.1;
    cout << "0.1 кг стоит " << b << " рублей"<< endl << "0.2 кг стоит " << a * 0.2 << " рублей" << endl << "0.3 кг стоит " << a * 0.3<< " рублей" << endl << "0.4 кг стоит " << a * 0.4 << " рублей" << endl << "0.5 кг стоит " << a * 0.5 << " рублей" << endl << "0.6 кг стоит " << a * 0.6 << " рублей" << endl << "0.7 кг стоит " << a * 0.7 << " рублей" << endl << "0.8 кг стоит " << a * 0.8 << " рублей" << endl << "0.9 кг стоит " << a * 0.9 << " рублей" << endl << "1 кг стоит " << a * 1 << " рублей" << endl;
    return 0;
}


//Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).
int main(){
    int n;
    float z = 1;
    cin >> n;
    for (int i = 0; i <= n; i++){
        z *= 1.0+(float)i/10;
    }
    cout << z << endl;
}

//Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы
int main() {
     int x=0, s = 0;
     cout << "Целое чило N>0:";
     cin >> x;
     for (int i = 1; i <= x; i++)
     {
         s += (2 * i - 1);
         cout << s << endl;
     }
     cout << s << endl;
}

//Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN

int main() {
    float a=0, n=0, sum = 0;
    cout << "Введите А:";
    cin >> a;
    cout << "Введите N:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(a, i);
    }
    cout << sum << endl;
}
*/
// Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения
// 1 − A + A2 − A3 + . . . ± AN .
// Условный оператор не использовать.
int main(){
    int N, i, sum;
    float  A;
    cout << "Введите степень N > 0 : ";
    cin >> N;
    cout << "Введите вещественное число A : ";
    cin >> A;
    sum = 1;
    for (i = 1; i <= N; i++){
        sum = sum + pow(-A, i);
    }
    cout << "Ответ = " << sum << endl;
}

