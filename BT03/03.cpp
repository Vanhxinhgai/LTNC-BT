include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void modifyByValue(Point p) {
    p.x = 99;
    p.y = 100;
}

void modifyByReference(Point &p) {
    p.x = 2;
    p.y = 3;
}

int main() {
    Point point = {1, 4};

    cout << "Before modifyByValue: " << point.x << " " << point.y << endl;
    modifyByValue(point);
    cout << "After modifyByValue: " << point.x << " " << point.y << endl;

    cout << "Before modifyByReference: " << point.x << " " << point.y << endl;
    modifyByReference(point);
    cout << "After modifyByReference: " << point.x << " " << point.y << endl;

    return 0;
}
anh
Cao Hải Anh
include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void modifyByValue(Point p) {
    p.x = 99;
    p.y = 100;
}

void modifyByReference(Point &p) {
    p.x = 2;
    p.y = 3;
}

int main() {
    Point point = {1, 4};

    cout << "Before modifyByValue: " << point.x << " " << point.y << endl;
    modifyByValue(point);
    cout << "After modifyByValue: " << point.x << " " << point.y << endl;

    cout << "Before modifyByReference: " << point.x << " " << point.y << endl;
    modifyByReference(point);
    cout << "After modifyByReference: " << point.x << " " << point.y << endl;

    return 0;
}
anh
Cao Hải Anh
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

Point mid_point(const Point &p1, const Point &p2) {
    Point midPoint;
    midPoint.x = (p1.x + p2.x) / 2;
    midPoint.y = (p1.y + p2.y) / 2;
    return midPoint;
}

void printPoint(Point p)
{
    cout<<p.x<<" "<<p.y<<endl;
}

int main() {
    Point point1 = {10, 5};
    Point point2 = {4, 1};

    Point midpoint = mid_point(point1, point2);

    cout << "Midpoint: ";
    printPoint(midpoint);

    return 0;
}
