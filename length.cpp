#include <iostream>
using namespace std;

class Point {
 public:
  double x, y;
};

class Vector {
 public:
  Point start, end;
};

int main() {
  Vector vector1;
  vector1.start.x = 0.1;
  vector1.start.y = 0.2;
  cout << vector1.start.x << endl;
}
