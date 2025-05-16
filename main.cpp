#include <iostream>

//クラステンプレート
template <typename Type, typename Type2>
class TemplateClass {
public:
    // コンストラクタ
    TemplateClass(Type number1, Type2 number2) :
        /*変数A*/(number1), /*変数B*/(number2) {
    }

    Type Min()
    {
        if (/*変数A*/ < /*変数B*/)
            return static_cast<Type>(/*変数A*/);
        else
            return static_cast<Type>(/*変数B*/);
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

    std::cout << "int(100)　と float(50.0f) を比べて小さい数字を返す：
        " << /*intFloatテンプレート*/.Min() << std::endl;

        std::cout << "int(80)　と double(20.0) を比べて小さい数字を返す：
        " << /*intDoubleテンプレート*/.Min() << std::endl;

        std::cout << "float(2.0f)　と int(18) を比べて小さい数字を返す：
        " << /*FloatIntテンプレート*/.Min() << std::endl;

        std::cout << "float(11.0f)　と double(3.5) を比べて小さい数字を返す：
        " << /*FloatDoubleテンプレート*/.Min() << std::endl;

        std::cout << "double(234.0)　と int(123) を比べて小さい数字を返す：
        " << /*DoubleIntテンプレート*/.Min() << std::endl;

        std::cout << "double(400.1)　と float(500.2) を比べて小さい数字を返す：
        " << /*DoubleFloatテンプレート*/.Min() << std::endl;

        return 0;
}
