/**
 * geometry.h
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 */
class Point {
  int x, y;

 public:
  Point(int u = 0, int v = 0) : x(u), y(v) {}
  int getX() const {return x;}
  int getY() const {return y;}
  void setX(const int new_x) {x = new_x;}
  void setY(const int new_y) {y = new_y;}
};

class PointArray {
  int size;
  Point *points;
  void resize(int size);
    
 public:
  PointArray();
  PointArray(const Point pts[], const int size);
  PointArray(const PointArray &pv);
  ~PointArray();    
  void push_back(const Point &p);
  void insert(const int pos, const Point &p);
  void remove(const int pos);
  int getSize() const {return size;}
  void clear(); 
  Point *get(const int pos);
  const Point *get(const int pos) const; 
};

class Polygon {
 protected:
  PointArray pArr;
  static int objectCount;
  
 public:
  Polygon(const Point points[], const int size) : pArr(points, size) {++objectCount;}
  Polygon(const PointArray &passedArr) : pArr(passedArr) {++objectCount;} 
  ~Polygon() {--objectCount;}  
  virtual double area() const = 0;
  static int getNumPolygons() {return objectCount;}
  int getNumSides() const {return pArr.getSize();}
  const PointArray *getPoints() const {return &pArr;}  
};   

class Rectangle : public Polygon {
 public:
  Rectangle(const Point &a, const Point &b);
  Rectangle(const int a, const int b, const int c, const int d); 
  virtual double area() const;
};
 
class Triangle : public Polygon {
 public:
  Triangle(const Point &a, const Point &b, const Point &c);
  virtual double area() const;
};
