#include <Circle.h>

#include <cmath>

Circle::Circle()
{
    setRadius(0.0);
}

Circle::Circle(double radius)
{
    setRadius(radius);
}

void Circle::setRadius(double rad)
{
    radius = rad;
    ference = 2 * M_PI * rad;
    area = M_PI * rad * rad;

}

void Circle::setFerence(double fer)
{
    ference = fer;
    radius = fer / (2 * M_PI);
    area = M_PI * radius * radius;
}

void Circle::setArea(double ar)
{
    area = ar;
    radius = sqrt(area/M_PI);
    ference = 2 * M_PI * radius;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getFerence()
{
    return ference;
}

double Circle::getArea()
{
    return area;
}
