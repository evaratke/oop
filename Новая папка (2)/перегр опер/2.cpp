/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Point{
private:
  int x_;
  int y_;
public:
  Point(int x, int y) : x_(x), y_(y) {} 
  bool operator== (Point& point){ return (this->x_ == point.x_ && this->y_ == point.y_); }
  bool operator!= (Point& point){ return !(*this == point );}
  bool operator> (Point& point){ return ((pow(this->x_, 2) + pow(this->y_, 2)) > (pow(point.x_, 2) + pow(point.y_, 2)));}
  bool operator< (Point& point){return !(*this > point );}
  Point operator* (double k) const{ return Point(this->x_ * k, this->y_ * k);}
  string Tostring(Point& point){ return "(" + to_string(point.x_) + ", " + to_string(point.y_) + ")";}
};
int main (){
  Point point1(1, 2);
  Point point2(2, 3);
  cout << (point1 == point2) << endl;
  cout << (point1 != point2) << endl;
  cout << (point1 >  point2) << endl;
  cout << (point1 <  point2) << endl;
  Point point3 = point1 * 2;
  cout << point3.Tostring(point3);
  Point point4 = point2 * 3;
  cout << point4.Tostring(point4);
}*/