#include "righttriangle.h"

RightTriangle::RightTriangle(std::size_t leg)
{
    _leg = leg;
}

void RightTriangle::Draw()
{
    for (std::size_t i = 0; i != _leg; ++i)
    {
        for (std::size_t j = 0; j <= i; ++j)
        {
            std::cout << "*" << " ";
        }
        std::cout << std::endl;
    }
}

std::size_t RightTriangle::GetLeg() const
{
    return _leg;
}

void RightTriangle::SetLeg(std::size_t leg)
{
    _leg = leg;
}
