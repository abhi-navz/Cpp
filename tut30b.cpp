// ************finding distance between two cartesina points**********
// using parmaterized constructor:

#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int, int);

    void display(void)
    {
        cout << "the given point is (" << x << "," << y << ")" << endl;
    }

    friend void distance_bw_points(point p1, point p2);
};

point::point(int a, int b)
{
    x = a;
    y = b;
}
void distance_bw_points(point p1, point p2)
{
    float x_diff = (p1.x - p2.x);
    float y_diff = (p1.y - p2.y);
    float dist = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "The distance between two points is " << dist << endl;
}

int main()
{
    point p1(4, 6);
    point p2(2, 7);
    point p3(2, 8);
    point p4(2, 9);

    distance_bw_points(p1, p2);
    distance_bw_points(p1, p4);
    distance_bw_points(p1, p3);
    distance_bw_points(p2, p4);
    distance_bw_points(p2, p3);
    distance_bw_points(p2, p2);
    return 0;
}