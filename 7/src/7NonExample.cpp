#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b)
    {
        width = a; height = b;
    }
    int area4()
    {
        return width*height;
    }
    int area3()
    {
        return width*height / 2;
    }
    double area1()
    {
        return 3.14*pow((height / 2), 2);
    }
    double circumference()
    {
        return 2 * 3.14*(height / 2);
    }
};

int main()
{
    string input;
    string shape;
    int height;
    int width;
    Polygon polygon;
    while (shape != "C" && shape != "R" && shape != "T")
    {
        cout << "Create a shape! Should it be a circle, triangle, or rectangle? ('C' or 'T' or 'R')" << endl;
        cin >> shape;
    }
    cout << "What should its height be?" << endl;
    cin >> height;
    cout << "What should its width be?" << endl;
    cin >> width;
    polygon.set_values(width, height);
    if (shape == "C")
    {
        cout << "Your circle's area is " << polygon.area1() << endl;
        cout << "Your circle's circumference is " << polygon.circumference() << endl;
    }
    else if (shape == "T")
    {
        cout << "Your triangle's area is " << polygon.area3() << endl;
    }
    else
    {
        cout << "Your rectangle's area is " << polygon.area4() << endl;
    }

    cin >> input;
    return 0;
}

