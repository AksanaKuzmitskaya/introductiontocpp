#include <iostream>
using namespace std;

class Point {
 private:
  int x, y;
    
 public:
  Point(int u, int v) : x(u), y(v) {}
  int getX() {return x;}
  int getY() {return y;}
  void setX(int newX);
};

void Point::setX(int newX) {x = newX;}

int main() {
  Point p(5, 3);
  p.setX(0);
  cout << p.getX() << " " << p.getY()<< "\n";
  return 0;
}