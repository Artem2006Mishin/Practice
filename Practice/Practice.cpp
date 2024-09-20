#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    
    //1
    cout << "X Y" << endl;
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            cout << x << " " << y << " " << (x || y) << endl;
        }
    }

    //4
    int x, y, z, K;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z, cout << endl;
    if ((int)(x > 0) + (int)(y > 0) + (int)(z > 0) == 2)
        K = 1;
    else
        K = 0;
    cout << "K: " << K;

    //5
    int x, y, z, K;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z, cout << endl;

    if (x < y && x < z)
        cout << "Наименьшее X = " << x;
    if (y < x && y < z)
        cout << "Наименьшее Y = " << y;
    if (z < x && z < y)
        cout << "Наименьшее Z = " << z;

    //6
    float x, y;
    bool isHear = false;
    cout << "Введите X и Y: ";
    cin >> x >> y, cout << endl;

    if ((0 <= x && x <= 1 && 0 <= y && y <= (1 - x)) ||
        (-1 <= x && x <= 0 && 0 <= y && y <= (1 - (x * -1)))) {
        isHear = true;
    }
    cout << boolalpha << isHear;

    // 7 (C;D)
    int N, result = 0;
    float multiplier = 0.1f;
    cout << "Введите N: ", cin >> N;
    int n = N, proverka = N;

    while (n > 0) {
        n /= 10;
        multiplier *= 10;
    }
    while (N > 0) {
        result += N % 10 * multiplier;    multiplier /= 10;
        N /= 10;
    }

    cout << "Обратное число: " << result << endl;
    if (proverka == result)
        cout << "Палиндром";
    else
        cout << "Обычное число";

    //8
    int K, result = 0, count = 0;
    cout << "Введите K: ", cin >> K;
    int n = K;
    while (n > 0) {
        n /= 10;
        count++;
    }

    for (int i = 0; i < count; i++) {
        int p = 1;
        for (int j = 0; j < i; j++) p *= 2;
        result += K % 10 * p;
        K /= 10;
    }
    cout << "Результат: " << result;


}