#include <iostream>
using namespace std;

int main() {
    // 外層迴圈控制行數
    for (int i = 1; i <= 9; ++i) {
        // 內層迴圈控制列數
        for (int j = 1; j <= 9; ++j) {
            // 輸出每個乘法表的結果，格式對齊
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        // 每印完一行後換行
        cout << endl;
    }
    return 0;
}
