#include <stdio.h>
#include <ctype.h> // isdigitを使うために必要

// 一般的なテンプレート関数
template<typename Type>
Type Min(Type a, Type b) {
    return (a > b) ? b : a;
}

// char 型専用のオーバーロード
char Min(char a, char b) {
    if (!isdigit(a) || !isdigit(b)) {
        printf("数字以外は代入できません\n");
        return 0;  // エラー時の適当な戻り値（'\0'）
    }
    return (a > b) ? b : a;
}

int main() {
    printf("%d\n", Min<int>(1, 2));
    printf("%f\n", Min<float>(1.0f, 2.0f));
    printf("%lf\n", Min<double>(3.14159265, 2.7182818281));

    // char のテスト（数字）
    printf("%c\n", Min('3', '5'));

    // char のテスト（数字以外）
    Min('A', 'B');

    return 0;
}
