#include <iostream>
#include <iomanip>

int main() {
    double height, weight, bmi;

    std::cout << "請輸入身高(cm): ";
    std::cin >> height;

    std::cout << "請輸入體重(kg): ";
    std::cin >> weight;

    // 輸入檢查
    if (height <= 0 || weight <= 0) {
        std::cout << "輸入錯誤！身高與體重必須為正數。" << std::endl;
        return 1;
    }

    // 將身高轉換為公尺
    height /= 100.0;

    // 計算 BMI
    bmi = weight / (height * height);

    // 設定小數點格式
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "您的 BMI = " << bmi << std::endl;

    // BMI 判斷
    if (bmi < 18.5)
        std::cout << "體重過輕\n";
    else if (bmi < 24)
        std::cout << "正常範圍\n";
    else if (bmi < 27)
        std::cout << "過重\n";
    else
        std::cout << "肥胖\n";

    return 0;
}