#include<stdio.h>
template<typename Type>
Type Min(Type a, Type b) {
	return static_cast<Type>(a + b);
}

int main() {
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(1.14f, 5.14f));
	printf("%lf\n", Min<double>(1.14, 5.14));
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n", Min<char>);

	return 0;
}