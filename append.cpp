#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outfile("my_file.txt", ios::app);

    if (outfile.is_open()) {
        outfile.close(); 
    } else {
    }

    return 0;
}
