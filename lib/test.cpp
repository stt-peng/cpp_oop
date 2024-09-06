#include <iostream>
#include "test.hpp"

int main()
{
    int radius = 5;

    circle_space::sayWho();

    circle_space::Circle circle(radius);
    std::cout << "Area of circle is " << circle.area() << std::endl;
    std::cout << "Circumference of circle is " << circle.circumference() << std::endl;
}
