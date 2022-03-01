#include <vector>
#include <memory>
#include "square.h"
#include "circle.h"
#include "righttriangle.h"

void printFigure(const std::vector<std::unique_ptr<FlatFigure>>& vec)
{
    for (const auto& figure : vec)
    {
        figure->Draw();
        std::cout << "\n\n";
    }
}

int main()
{
    std::vector<std::unique_ptr<FlatFigure>> vec;
    vec.push_back(std::make_unique<Square>(10));
    vec.push_back(std::make_unique<RightTriangle>(10));
    vec.push_back(std::make_unique<Circle>(5));

    printFigure(vec);

    return 0;
}
