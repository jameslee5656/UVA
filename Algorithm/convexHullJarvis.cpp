// Jarvis algorithm
// #include "matplotlibcpp.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include <time.h>
using namespace std;
struct Point{
    int x, y;
};
int orientation(Point p, Point q, Point r){
    int value = (q.y - p.y) * (r.x - q.x)  - (r.y - q.y) * (q.x - p.x);
    if (value == 0) return 0; // a line
    return (value > 0)?1:2; // clockwise or  counterclockwise
}
// prints convexHull
void convexHull(Point points [], int n){
    vector<Point> hull;
    int leftMost = 0;
    for (int i = 1; i < n; i++){
        if (points[leftMost].x > points[i].x){
            leftMost = i;
        }
    }
    int p = leftMost, q, r, t;

    do{
        hull.push_back(points[p]);
        // Search for a point 'q' such that orientation(p, x, 
        // q) is counterclockwise for all points 'x'. The idea 
        // is to keep track of last visited most counterclock- 
        // wise point in q. If any point 'i' is more counterclock- 
        // wise than q, then update q. 
        q = (p + 1)%n;
        // p = (p + 1)%n;
        for (int i = 0; i < n; i ++){
            if (orientation(points[p],points[i],points[q]) == 2){
                q = i;
            }
        }
        // iterate next point d
        p = q;
        
    }while(p != leftMost);
    for (int i = 0; i < hull.size(); i++){
        cout << hull[i].y << " " << hull[i].x << " ";
    }
    cout << endl;
    
}
int main(void){
    // srand( (unsigned)time(NULL) );
    // Point points[20];
    // for (int i = 0; i < 20; i++){
    //     points[i].y = int(rand() % 50);
    //     points[i].x = int(rand() % 50);
    // }
    // convexHull(points,20);
    Point points[] = {{0, 3}, {2, 2}, {1, 1}, {2, 1}, 
                      {3, 0}, {0, 0}, {3, 3}}; 
    int n = sizeof(points)/sizeof(points[0]); 
    cout << points[0].x << endl;
    convexHull(points, 7 ); 
    return 0; 
}