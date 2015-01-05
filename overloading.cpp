#include <iostream>
using namespace std;

class Box
{
    public:
        double getVolume()
        {
            return length * width * breadth;
        }
        void setLength(double len)
        {
            length = len;
        }
        void setWidth(double wid)
        {
            width = wid;
        }
        void setBreadth(double bre)
        {
            breadth = bre;
        }
        Box operator+(const Box& b)
        {
            Box box;
            box.length = this->length + b.length;
            box.width = this->width + b.width;
            box.breadth = this->breadth + b.breadth;
            return box;
        }
    private:
        double length;
        double width;
        double breadth;
};

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;
    
    Box1.setLength(1.23);
    Box1.setWidth(1.5);
    Box1.setBreadth(2.1);
    
    Box2.setLength(2.23);
    Box2.setWidth(2.5);
    Box2.setBreadth(3.1);
    
    Box3 = Box1 + Box2;
    
    cout << "Box1 - volume - " << Box1.getVolume() << endl;
    cout << "Box2 - volume - " << Box2.getVolume() << endl;
    cout << "Box3 - volume - " << Box3.getVolume() << endl;
    
    return 0;
}
