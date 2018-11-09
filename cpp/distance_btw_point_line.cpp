// Example program
#include <iostream>
#include <math.h>

struct Point
{
  double x;
  double y;
};

double distance_btw_point_line(Point po, Point p1, Point p2){
    double x, y, Mo, Mn, K1, K2;
    double distance;
    
    Mo = (p2.y-p1.y)/(p2.x-p1.x); //slope of line between p1 to p2
    Mn = -Mo;
    
    K1=Mo*p1.x-p1.y;
    
    K2=Mn*po.x-po.y;
    
    x = (K1-K2)/(2*Mo);
    
    y = (-K1-K2)/2;
    
    distance = sqrt((po.x-x)*(po.x-x)+(po.y-y)*(po.y-y));
    
    return distance;
}
Point hit_point_line(Point po, Point p1, Point p2){
    double Mo, Mn, K1, K2;
    Point p;

    Mo = (p2.y-p1.y)/(p2.x-p1.x); //slope of line between p1 to p2
    Mn = -Mo;
    
    K1=Mo*p1.x-p1.y;
    
    K2=Mn*po.x-po.y;
    
    p.x = (K1-K2)/(2*Mo);
    
    p.y = (-K1-K2)/2;
    
    return p;
}

int main()
{
  Point A = {0,0};
  Point B1 = {4,0};
  Point B2 = {0,4};
  double dist = distance_btw_point_line(A,B1,B2);
  Point hp = hit_point_line(A,B1,B2);
  printf("Hit Point = (%2.2f , %2.2f) \n",hp.x,hp.y);
  printf("Distance: %2.2f",dist);
}
