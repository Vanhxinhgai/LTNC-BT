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
anh
Cao Hải Anh
#include <bits/stdc++.h>
using namespace std;


struct Point
{
    int x, y;
};


struct Rect
{
    int x, y, w, h;

    bool Contains(const Point p)
    {
        if(p.x < x) 
            return false;
        if(p.x > x+w)
            return false;
        if(p.y < y)
            return false;
        if(p.y > y+h)
            return false;

        return true; 
    }
};



int main()
{
    Point point;
    point.x = 10;
    point.y = 12;

    Rect rectangle1;
    rectangle1.x = 1;
    rectangle1.y = 5;
    rectangle1.w = 8;
    rectangle1.h = 7;

    Rect rectangle2;
    rectangle2.x = 2;
    rectangle2.y = 5;
    rectangle2.w = 8;
    rectangle2.h = 7;

    cout<<rectangle1.Contains(point)<<endl;
    cout<<rectangle2.Contains(point)<<endl;
}
