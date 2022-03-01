#ifndef SQUARE_H
#define SQUARE_H

#include "flatfigure.h"

/**
 * @brief The Square class
 */
class Square : public FlatFigure
{
public:
    /**
     * @brief Square стандартный конструктор
     */
    Square() = default;

    /**
     * @brief Square конструктор с одним параметром
     * @param side длина стороны квадрата
     */
    explicit Square(std::size_t side);

    /**
     * @brief ~Square деструктор
     */
    ~Square() override {}

    /**
     * @brief Draw отображает фигуру в консоле
     */
    virtual void Draw() override;

    /**
     * @brief GetSide возвращает длину стороны квадрата
     * @return
     */
    std::size_t GetSide() const;

    /**
     * @brief SetSide устанавливает длину стороны квадрата
     * @param side
     */
    void SetSide(std::size_t side);

private:
    std::size_t _side = 0;
};

#endif // SQUARE_H
