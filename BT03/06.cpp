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
};


struct Sh
{
    Rect pos;
    string id;
    int dx, dy;
    
    void move()
    {
        pos.x += dx;
        pos.y += dy;
    }
   
};


void display(const Sh& ship)
{
    cout<<"Posistion: ("<<ship.pos.x<<", "<<ship.pos.y<<") \n";
    cout<<"Id: "<<ship.id<<endl;
}

int main()
{
    Sh ship1;
    ship1.pos.x = 20;
    ship1.pos.y = 15;
    ship1.pos.w = 10;
    ship1.pos.h = 15;
    ship1.id = "13x0d3d";
    ship1.dx = 2;
    ship1.dy = 3;

    Sh ship2;
    ship2.pos.x = 10;
    ship2.pos.y = 40;
    ship2.pos.w = 20;
    ship2.pos.h = 25;
    ship2.id = "12x0d3d";
    ship2.dx = 4;
    ship2.dy = 1;


    int loop; 
    cout<<"Times of moving: ";
    cin>>loop;

    for(int i=1; i<=loop; i++)
    {
        cout<<"Time "<<i<<":"<<endl;
        cout<<"\tShip 1:"<<endl;
        ship1.move();
        display(ship1);

        cout<<"\tShip 2:"<<endl;
        ship2.move();
        display(ship2);
    }
}
