#include <iostream>
using namespace std;

class Enemy {
public:
    void Update();

    void tank(); // 接近
    void atack(); // 攻撃
    void contrall(); // 離脱

    // 関数ポインタテーブル
    static void (Enemy::* spFuncTable[])();

private:
    int index = 0;
};

void Enemy::tank() {
    cout << "敵が接近！" << endl;
}

void Enemy::atack() {
    cout << "敵が攻撃！" << endl;
}

void Enemy::contrall() {
    cout << "敵が離脱" << endl;
}

void Enemy::Update() {

    // 関数テーブルから関数を実行
    (this->*spFuncTable[index])();

    cout << "次の状態に移行 (0: はい、 他: いいえ)";
    int input;
    cin >> input;

    if (input == 0) {
        index = (index + 1) % 3;
    }
}

// メンバ関数ポインタテーブル
void (Enemy::* Enemy::spFuncTable[])() = {
    &Enemy::tank, // インデックス0
    &Enemy::atack,   // インデックス1
    &Enemy::contrall   // インデックス2
};

int main() {

    Enemy enemy;

    while (1)enemy.Update();

    return 0;
}




