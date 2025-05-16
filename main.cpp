#include <stdio.h>

template<typename Type>

Type Min(Type a, Type b) {
	if (a > b) {
		return static_cast<Type>(b);
	}
	else {
		return static_cast<Type>(a);
	}
}

int main() {
	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("%lf\n", Min<double>(3.14159265, 2.7182818281));
	printf("%c\n", Min<char>('a', 'b'));
}