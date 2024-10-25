#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outfile("my_file.txt");
    cout << "dorime interimo adapare dorime";
    if (outfile.is_open()) {
        outfile << ".\n"; 
        outfile.close();
    }

    return 0;
}
