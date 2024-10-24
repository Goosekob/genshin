#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outfile("my_file.txt");

    if (outfile.is_open()) {
        outfile << "Это текст, который мы записываем в файл.\n"; 
        outfile.close();
    } else {
        cout << "Ошибка при открытии файла.\n";
    }

    return 0;
}
