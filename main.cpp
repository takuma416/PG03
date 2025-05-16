#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	if (a > b) {
		return static_cast<Type>(b);
	}
	else {
		return static_cast<Type>(a);
	}
}

char Min(char a, char b) {
	if ((a < '0' || a > '9') || (b < '0' || b > '9')) {
		printf("”ŽšˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");
		return 0; 
	}
	return (a > b) ? b : a;
}

int main() {
	printf("%d\n", Min<int>(128, 256));
	printf("%f\n", Min<float>(52.5f, 55.0f));
	printf("%lf\n", Min<double>(3.14159265, 2.7182818281));
	Min('a', '5');  

	return 0;
}