#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    double x, count;
    cin >> x;
    cin >> count;

    int factorial = 1;
    double powerx = x;
    double result = x;
    int j = 2;
    for (int i = 0; i < count; i++) {
            if (i % 2 == 0) {
                powerx *= x * x;
                factorial *= j * (j + 1);
                result -= powerx / factorial;
            }
            else {
                powerx *= x * x;
                factorial *= j * (j + 1);
                result += powerx / factorial;
            }

            j += 2;
    }
   
    cout << result << endl;

    system("pause");
    return 0;
}
