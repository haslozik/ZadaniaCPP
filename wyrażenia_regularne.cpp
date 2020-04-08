#include <iostream>
#include <fstream>
#include <regex>
using namespace std;

class sprawdzenie {
       ifstream f1;
       ofstream f2;
public:
        sprawdzenie();
        ~sprawdzenie();
    void match();
};
sprawdzenie::sprawdzenie() {
    f1.open("C:\a.txt");
    f2.open("C:\b.txt");
}
void sprawdzenie::match() {
    string input;
        regex regularne("[0-9]{2}-[0-9]{3}");
        while(!f1.eof()) {
            f1>>input;
            if(regex_match(input,regularne)) {
                f2<<input<<endl;
            }
        }
}
sprawdzenie::~sprawdzenie() {
    f1.close();
    f2.close();
}

int main() {
    sprawdzenie s1;
    s1.match();
    return 0;
}
