#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("my_file.txt");

    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            cout << line << endl; 
        }
        infile.close();
        cout << "Файл my_file.txt успешно прочитан.\n";
    } else {
        cout << "Ошибка при открытии файла.\n";
    }

    return 0;
}
