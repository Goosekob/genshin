#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outfile("my_file.txt", ios::app);

    if (outfile.is_open()) {
        outfile << "Это текст, который будет добавлен в конец файла.\n";
        outfile.close(); 
        cout << "Текст добавлен в my_file.txt.\n";
    } else {
        cout << "Ошибка при открытии файла.\n";
    }

    return 0;
}
