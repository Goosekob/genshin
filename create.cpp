#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outfile("my_file.txt");
    cout << "dorime";
    if (outfile.is_open()) {
        outfile << "Это текст, который мы записываем в файл.\n"; 
        outfile.close();
    }

    return 0;
}
