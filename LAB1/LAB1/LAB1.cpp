#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    int y;
    int z;
    cout << "Введите первый катет: ";
    cin >> x;
    cout << "Введите второй катет: ";
    cin >> y;
    z = pow(pow(x, 2) + pow(y, 2), 0.5);
    cout << "Гипотенуза = " << z << endl;
    cout << "Периметр треугольника = " << x + y + z;
    return 0;
    
    
}
