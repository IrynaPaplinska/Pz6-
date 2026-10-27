#include <iostream>
#include <queue>
#include <string>
#include <cctype>

using namespace std;

int main() {
    queue<char> letters;

    // Рядок із символами (можете змінити за потреби)
    string text = "hello123world"; 

    for (int i = 0; i < text.length(); i++) {
        letters.push(text[i]);
    }

    int letterCount = 0;
    bool digitFound = false;

    while (!letters.empty()) {
        char c = letters.front();
        letters.pop();

        // Якщо зустріли цифру — зупиняємо пошук
        if (isdigit(c)) {
            digitFound = true;
            break;
        }

        // Якщо це літера, збільшуємо лічильник
        if (isalpha(c)) {
            letterCount++;
        }
    }

    if (digitFound) {
        cout << "Кількість літер, що стоять перед першою цифрою: " << letterCount << endl;
    } else {
        cout << "Цифр немає. Кількість літер у всьому рядку: " << letterCount << endl;
    }

    return 0;
}