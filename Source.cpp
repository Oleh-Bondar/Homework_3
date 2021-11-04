#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    double x, count;
    cout << "Введите значение Х для функции sin(x): ";
    cin >> x;
    cout << "Введите точность вычислений: ";
    cin >> count;

    int factorial = 1;
    int fuctorial_num = 2;
    double powerx = x;
    double result = x;
    for (int i = 0; i < count; i++) {
        powerx *= x * x;
        factorial *= fuctorial_num * (fuctorial_num + 1);
            if (i % 2 == 0) {
                result -= powerx / factorial;
            }
            else {
                result += powerx / factorial;
            }
            fuctorial_num += 2;
    }
   
    cout << "Ваш результат: ";
    cout << result << endl;

    system("pause");
    return 0;
}
