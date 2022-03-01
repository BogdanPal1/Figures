#include "circle.h"
#include <cmath>

Circle::Circle(double radius)
{
    _radius = radius;
}

void Circle::Draw()
{
    if (_radius > 0)
    {
        for(int x = -_radius; x <= _radius; x++)
        {
          for(int y = -_radius; y <= _radius; y++)
          {
            int eq = x*x + y*y - _radius * _radius;
            printf(abs(eq) < 5 ? "*" : " ");
            std::cout << (std::abs(eq) < 5 ? "*" : " ");
          }
          std::cout << std::endl;
        }
    }
    else
    {
        std::cerr << "Ошибка: Невозможно отобразить окружность. Радиус меньше 1.\n";
    }

}

double Circle::GetRadius() const
{
    return _radius;
}

void Circle::SetRadius(double radius)
{
    _radius = radius;
}
