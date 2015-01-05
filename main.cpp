#include "geometry.h"
#include <iostream>
using namespace std;

void printAttributes(Polygon *pol)
{
    cout << "The area of the Polygon: " << pol->area() << endl;
    int size = pol->getNumSides(); 
    const PointArray *pa = pol->getPoints();
    for (int i = 0; i < size; i++)
    {    
        cout << "Point" << i + 1 << " (" << pa->get(i)->getX() << "; "<< pa->get(i)->getY() << ")" << endl;
    }
}

int main()
{
    cout << "Give me, please, lower-left positions of a Rectangle" << endl;
    int a, b, c, d, e, f;    
    cin >> a >> b;
    Point lowerLeft(a, b);
    cout << "Give me, please, upper-right positions of a Rectangle" << endl;
    cin >> c >> d;
    Point upperRight(c, d);
    Rectangle rect1(lowerLeft, upperRight);
    
    cout << "Give me, please, x positin of a Triangle" << endl;
    cin >> a >> b;
    cout << "Give me, please, y positin of a Triangle" << endl;
    cin >> c >> d;
    cout << "Give me, please, z positin of a Triangle" << endl;
    cin >> e >> f;
    Point pointx(a, b);
    Point pointy(c, d);
    Point pointz(e, f);
    Triangle tri1(pointx, pointy, pointz);
    
    cout << "Rectangle attributes: " << endl;
    printAttributes(&rect1);
    cout << "Triangle attributes: " << endl;
    printAttributes(&tri1);
}
