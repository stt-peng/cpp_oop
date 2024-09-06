#include <ostream>

namespace circle_space
{

#define PI 3.142

    void sayWho()
    {
        std::cout << "I am a circle space" << std::endl;
    }

    class Circle
    {
    private:
        double radius;

    public:
        Circle(double radius) : radius(radius)
        {
            std::cout << "Circle created with radius " << radius << std::endl;
        }
        double area() const { return PI * radius * radius; }
        double circumference() const { return 2 * PI * radius; }
    };
}
