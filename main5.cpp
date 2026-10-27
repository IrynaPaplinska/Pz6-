#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Структура для поштового відправлення
struct Mail {
    int number;
    string type; // "лист" або "посилка"
};

int main() {
    queue<Mail> mailQueue;

    // Додаємо відправлення до черги (номер і тип)
    mailQueue.push({101, "лист"});
    mailQueue.push({102, "лист"});
    mailQueue.push({103, "посилка"});
    mailQueue.push({104, "лист"});
    mailQueue.push({105, "посилка"});

    cout << "Опрацювання листів, що стоять на початку черги:\n";

    // Опрацьовуємо всі листи, які знаходяться на початку черги
    while (!mailQueue.empty() && mailQueue.front().type == "лист") {
        Mail m = mailQueue.front();
        mailQueue.pop();
        cout << "Оброблено відправлення №" << m.number << " (Тип: " << m.type << ")\n";
    }

    cout << "\nЗалишок черги після опрацювання:\n";
    while (!mailQueue.empty()) {
        Mail m = mailQueue.front();
        mailQueue.pop();
        cout << "Відправлення №" << m.number << " [Тип: " << m.type << "]\n";
    }

    return 0;
}