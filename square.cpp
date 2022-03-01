#include "square.h"

Square::Square(std::size_t size)
{
    _side = size;
}

void Square::Draw()
{
    for (std::size_t i = 0; i != _side; ++i)
    {
        for (std::size_t j = 0; j < _side; ++j)
        {
            std::cout << "*" << " ";
        }
        std::cout << std::endl;
    }
}

std::size_t Square::GetSide() const
{
    return _side;
}

void Square::SetSide(std::size_t side)
{
    _side = side;
}
