#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    queue<int> numbers;

    // Додаємо 18 цілих чисел до черги
    numbers.push(12);
    numbers.push(45);
    numbers.push(3);
    numbers.push(89);
    numbers.push(23);
    numbers.push(56);
    numbers.push(78);
    numbers.push(1);
    numbers.push(90);
    numbers.push(34);
    numbers.push(67);
    numbers.push(21);
    numbers.push(43);
    numbers.push(88);
    numbers.push(15);
    numbers.push(76);
    numbers.push(54);
    numbers.push(32);

    int min_val = 0;
    int max_val = 0;
    bool first = true;

    // Проходимо по черзі, витягуючи елементи
    while (!numbers.empty()) {
        int x = numbers.front();
        numbers.pop();

        if (first) {
            min_val = x;
            max_val = x;
            first = false;
        } else {
            if (x < min_val) {
                min_val = x;
            }
            if (x > max_val) {
                max_val = x;
            }
        }
    }

    cout << "Найбільший елемент: " << max_val << endl;
    cout << "Найменший елемент: " << min_val << endl;
    cout << "Різниця між найбільшим і найменшим: " << (max_val - min_val) << endl;

    return 0;
}
