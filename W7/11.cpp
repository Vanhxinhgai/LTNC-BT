#include <iostream>
#include <cstring>

using namespace std;

struct String {
    int n;
    char* c;

    String(const char* c) {
        n = strlen(c);
        this->c = new char[n + 1];
        for (int i = 0; i < n; i++) {
            this->c[i] = c[i];
        }
        this->c[n] = '\0';
    }

    ~String() {
        delete[] c;
        c = nullptr;
    }

    void print() const {
        cout << c << endl;
    }

    void append(const char* c) {
        char* tmp = new char[n + strlen(c) + 1];
        for (int i = 0; i < n; i++) {
            tmp[i] = this->c[i];
        }
        for (int i = 0; i < strlen(c); i++) {
            tmp[i + n] = c[i];
        }
        tmp[n + strlen(c)] = '\0';
        delete[] this->c;
        this->c = tmp;
        n += strlen(c);
    }
};

int main() {
    String s("Hello");
    s.print();
    s.append(" there");
    s.print();
}
