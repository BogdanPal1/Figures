#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

/**
 * @brief The Figure abstract class
 */
class FlatFigure
{
public:
    /**
     * @brief ~FlatFigure деструктор
     */
    virtual ~FlatFigure();

    /**
     * @brief Draw отображает фигуру в консоле
     */
    virtual void Draw() = 0;
};

#endif // FIGURE_H
