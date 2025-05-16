#include <iostream>

//クラステンプレート
template <typename Type, typename Type2>
class TemplateClass {
public:
    // コンストラクタ
    TemplateClass(Type number1, Type2 number2) :
        Number1(number1), Number2(number2) {
    }

    Type Min()
    {
        if (Number1 < Number2)
            return static_cast<Type>(Number1);
        else
            return static_cast<Type>(Number2);
    }

private:
    Type Number1;
    Type2 Number2;
};

int main() {

    TemplateClass<int, float> intFloatTemplate(100, 50.0f);
    TemplateClass<int, double> intDoubleTemplate(80, 20.0);
    TemplateClass<float, int> floatIntTemplate(2.0f, 18);
    TemplateClass<float, double> floatDoubleTemplate(11.0f, 3.5);
    TemplateClass<double, int> doubleIntTemplate(234.0, 123);
    TemplateClass<double, float> doubleFloatTemplate(400.1, 500.2f);

    std::cout << intFloatTemplate.Min() << std::endl;
    std::cout << intDoubleTemplate.Min() << std::endl;
    std::cout << floatIntTemplate.Min() << std::endl;
    std::cout << floatDoubleTemplate.Min() << std::endl;
    std::cout << doubleIntTemplate.Min() << std::endl;
    std::cout << doubleFloatTemplate.Min() << std::endl;

        return 0;
}
