#include"encrypt.h"
#include<fstream>
int main() {
    std::ifstream fin;
    fin.open("Text.txt");
    if (fin.is_open()) {
        std::ofstream sin;
        sin.open("newtext.txt");
        while (!fin.eof()) {
            std::string line;
            getline(fin, line);
            std::string tmp;
            for (int i = 0; i < line.length(); ++i) {
                if (line[i] != ' ' && line[i] != '\0') {
                    tmp += line[i];
                }
                else {
                    int x;
                    int a;
                    std::cout << "This is your text: " << tmp << " : If you want to code enter 0 else other number, and enter the fixed number" << std::endl;
                    std::cin >> a >> x;
                    if (a == 0) {
                        encrypt s(tmp, x);
                        sin << s.code();
                    }
                    else {
                        encrypt s(tmp, x);
                        sin << s.decode();
                    }
                }
            }
        }
        sin.close();
    }
    else {
        std::cout << "Failed to open the file" << std::endl;
    }
}