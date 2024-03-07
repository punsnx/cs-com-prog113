#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
private:
    point center;
    double radius;
public:
    Circle(): radius(0){
        this->center.xPosition = 0;
        this->center.yPosition = 0;
    }
    Circle(point c,double r): center(c), radius(r){}
    double area(){
        double area;
        area = M_PI * pow(radius,2);
        return area;
    }
    double distanceFromCenter(point pt){
        double distance;
        double x1,y1,x2,y2;
        x1 = center.xPosition;x2 = pt.xPosition;
        y1 = center.yPosition;y2 = pt.yPosition;
        distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        return distance;
    }
    int contains(point pt){
        double distance = this->distanceFromCenter(pt);
        return (distance <= radius);
    }
};

int main()
{   
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    point p = {x1,y1};
    Circle c(p,10);
    point p1 = {x2,y2};
    cout << c.area() << " " << c.distanceFromCenter(p1) << " " << c.contains(p1) << endl;

   // สร้าง Object เพื่อทดสอบด้วยตัวเอง
}