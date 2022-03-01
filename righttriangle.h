#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "flatfigure.h"

/**
 * @brief The RightTriangle class
 */
class RightTriangle : public FlatFigure
{
public:
    /**
     * @brief RightTriangle конструктор
     */
    RightTriangle() = default;

    /**
     * @brief RightTriangle конструктор с одним параметром
     * @param leg
     */
    explicit RightTriangle(std::size_t leg);

    /**
     * @brief ~RightTriangle деструктор
     */
    ~RightTriangle() override {}

    /**
     * @brief Draw отображает фигуру в консоле
     */
    virtual void Draw() override;

    /**
     * @brief GetLeg возвращает значение стороны
     * @return
     */
    std::size_t GetLeg() const;

    /**
     * @brief SetLeg устанавливает значение стороны
     * @param leg
     */
    void SetLeg(std::size_t leg);

private:
    std::size_t _leg = 0;
};

#endif // RIGHTTRIANGLE_H
