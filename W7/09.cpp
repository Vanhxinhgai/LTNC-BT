#include <iostream>
using namespace std;
struct Point {
    int x, y;
};
void p1(Point &point) {
    cout << &point.x << " " << &point.y << " " << &point << endl;;
    // Dia chi cua Point = dia chi cua x, dia chi x, y gan nhau
}
void p2(Point point) {
    cout << &point.x << " " << &point.y << " " << &point;
} 
int main() {
    Point p;
    p.x = 2;
    p.y = 2;
    p1(p);
    p2(p);
}
