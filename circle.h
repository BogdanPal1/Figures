#ifndef CIRCLE_H
#define CIRCLE_H

#include "flatfigure.h"

/**
 * @brief The Circle class
 */
class Circle : public FlatFigure
{
public:
    /**
     * @brief Circle стандартный конструктор
     */
    Circle() = default;

    /**
     * @brief Circle конструктор с одним параметром
     * @param radius радиус
     */
    explicit Circle(double radius);

    /**
     * @brief ~Circle деструктор
     */
    ~Circle() override {}

    /**
     * @brief Draw отображает фигуру в консоле
     */
    virtual void Draw() override;

    /**
     * @brief GetRadius возвращает радиус окружности
     * @return radius радиус
     */
    double GetRadius() const;

    /**
     * @brief SetRadius устанавливает радиус окружности
     * @param radius радиус
     */
    void SetRadius(double radius);

private:
    double _radius = 0;
};

#endif // CIRCLE_H
