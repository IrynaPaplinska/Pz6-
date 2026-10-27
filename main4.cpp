#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Device {
    string name;
    int year;
};

int main() {
    queue<Device> devices;

    // Додаємо пристрої до черги (назва та рік випуску)
    devices.push({"Smartphone X", 2022});
    devices.push({"Old Printer", 2015});
    devices.push({"Laptop Pro", 2019});
    devices.push({"Tablet A", 2024});
    devices.push({"Monitor 24", 2018});

    cout << "Пристрої, випущені до 2020 року:\n";

    // Обходимо чергу та виводимо пристрої за умовою
    while (!devices.empty()) {
        Device d = devices.front();
        devices.pop();

        if (d.year < 2020) {
            cout << d.name << " - " << d.year << endl;
        }
    }

    return 0;
}