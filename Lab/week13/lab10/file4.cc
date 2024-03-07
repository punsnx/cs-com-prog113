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
    double xc,yc,x,y,r;
    cout << "Center of Circle: ";
    cin >> xc >> yc;
    cout << "Radius of Circle: ";
    cin >> r;
    cout << "Point to Check: ";
    cin >> x >> y;
    point c = {xc,yc},p = {x,y};
    Circle circle(c,r);
    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" << p.xPosition << ", " << p.yPosition << ") is " << circle.distanceFromCenter(p) << endl;
    if (circle.contains(p)){
        cout << "This circle contains this point." << endl;
        return 0;
    }
    cout << "This point is not in this circle." << endl;
    return 0;
}