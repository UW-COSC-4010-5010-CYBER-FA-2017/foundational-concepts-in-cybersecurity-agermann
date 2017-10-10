#include <iostream>
#include <string>

using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b)
    {
        width = a; height = b;
    }
};

class Rectangle : public Polygon {
public:
    int area()
    {
        return width*height;
    }
};

class Triangle : public Polygon {
public:
    int area()
    {
        return width*height / 2;
    }
};



int main()
{
    string input;
    string shape;
    int height;
    int width;

    while (shape != "R" && shape != "T")
    {
        cout << "Create a shape! Should it be a rectangle or triangle? ('R' or 'T')" << endl;
        cin >> shape;
    }
    cout << "What should its height be?" << endl;
    cin >> height;
    cout << "What should its width be?" << endl;
    cin >> width;
    if (shape == "R")
    {
        Rectangle rect;
        rect.set_values(width, height);
        cout << "Your rectangle's area is: " << rect.area() << endl;
    }
    else
    {
        Triangle tri;
        tri.set_values(width, height);
        cout << "Your triangle's area is " << tri.area() << endl;
    }

    cin >> input;
    return 0;
}

