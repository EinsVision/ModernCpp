#include "projects.h"

//enum FruitType
//{ // 이 enum type은 특정한 class에서만 사용이 된다.
//    APPLE, 
//    BANANA, 
//    CHERRY,
//};

class Fruit
{
public:
    enum class FruitType
    { // 이 enum type은 특정한 class에서만 사용이 된다.
        APPLE,
        BANANA,
        CHERRY,
    };
private:
    FruitType f_type;

public:
    Fruit(FruitType type)
        :f_type(type)
    {}

    FruitType getType()
    {
        return f_type;
    }
};

void Projects_8::m8_14()
{
    // 8.14 클래스 안에 포함된 자료형 nested types
    Fruit f1(Fruit::FruitType::APPLE);

    if (f1.getType() == Fruit::FruitType::APPLE)
    {
        cout << "Apple: " << endl;
    }

}