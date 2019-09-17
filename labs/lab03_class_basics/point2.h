#include <iostream>
using namespace std;

class Point2 {
    int x;
    int y;
  public:
    Point2(int x = 0, int y = 0);

    float DistanceBetween(Point2 p){
      return 1.0;
    }
    int Quadrant(){
      return 1;
    }
    void Print(){
      cout << x << " " << y;
    }
};
