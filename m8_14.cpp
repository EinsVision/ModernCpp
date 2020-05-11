#include "projects.h"

//enum FruitType
//{ // �� enum type�� Ư���� class������ ����� �ȴ�.
//    APPLE, 
//    BANANA, 
//    CHERRY,
//};

class Fruit
{
public:
    enum class FruitType
    { // �� enum type�� Ư���� class������ ����� �ȴ�.
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
    // 8.14 Ŭ���� �ȿ� ���Ե� �ڷ��� nested types
    Fruit f1(Fruit::FruitType::APPLE);

    if (f1.getType() == Fruit::FruitType::APPLE)
    {
        cout << "Apple: " << endl;
    }

}