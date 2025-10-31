#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int A, B;
    
    // 輸入名字
    cout << "請輸入你的名字: ";
    cin >> name;
    
    cout << "你好, " << name << "!" << endl;
    
    // 輸入兩個數字
    cout << "請輸入兩個數字, 用空白隔開: ";
    cin >> A >> B;
    
    // 顯示輸入的數字
    cout << "你輸入的是: " << A << " 和 " << B << endl;
    
    return 0;
}
