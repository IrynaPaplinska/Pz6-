#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> source;
    queue<int> result;

    // Формуємо чергу чисел від 1 до 180
    for (int i = 1; i <= 180; ++i) {
        source.push(i);
    }

    // Витягуємо числа з черги та фільтруємо їх
    while (!source.empty()) {
        int x = source.front();
        source.pop();

        // Перевіряємо умову: ділиться на 9 або на 11 без остачі
        if (x % 9 == 0 || x % 11 == 0) {
            result.push(x);
        }
    }

    cout << "Числа, що діляться на 9 або 11: ";

    // Виводимо результат із нової черги
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }

    cout << endl;

    return 0;
}