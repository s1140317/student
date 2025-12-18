#include <iostream>
using namespace std;

int main() {
    // 學生名字
    string name[5] = {
        "Amy", "Ben", "Cindy", "David", "Eva"
    };

    // 學生各科分數 (5個學生，每個學生有3個科目)
    int score[5][3] = {
        {80, 90, 85},
        {70, 75, 78},
        {88, 92, 95},
        {60, 65, 70},
        {90, 93, 89}
    };

    // 計算每個學生的總分並列出三個科目的分數
    for (int i = 0; i < 5; ++i) {
        int total = 0;
        cout << name[i] << "'s scores: ";
        
        // 顯示每個學生的科目分數
        for (int j = 0; j < 3; ++j) {
            cout << score[i][j] << " ";
            total += score[i][j];  // 累加分數
        }
        
        // 顯示學生的總分
        cout << "Total score: " << total << endl;
    }

    return 0;
}
\
