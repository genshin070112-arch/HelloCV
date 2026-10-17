#include <iostream>
#include "unitlib.h"

using namespace std;

void Menu(){
    cout << "请输入你想进行的操作：" << endl;
    cout << "1.摄氏度 -> 华氏度" << endl;
    cout << "2.华氏度 -> 摄氏度" << endl;
    cout << "3.米 -> 英尺" << endl;
    cout << "4.英尺 -> 米" << endl;
    cout << "5.磅 -> 千克" << endl;
    cout << "6.千克 -> 磅" << endl;
}

int main(){
    while (true){
        Menu();

        int choice = -1;
            if (!(cin >> choice)) {
                cerr << "输入不是数字，退出。\n";
                return 1;
            }
            if (choice == 0) {
                cout << "再见！\n";
                return 0;
            }
            if (choice < 1 || choice > 6) {
                cout << "无效选项，请重新输入。\n";
                continue;
            }

        cout << "请输入要转换的数值: ";
        double value = 0.0;
        if (!(cin >> value)) {
            cerr << "输入错误\n";
            return 1;
        }

        switch (choice) {
            case 1:
                cout << value << " 摄氏度 = "
                              << celsiusToFahrenheit(value) << " 华氏度\n";
                break;
            case 2:
                cout << value << " 华氏度 = "
                              << fahrenheitToCelsius(value) << " 摄氏度\n";
                break;
            case 3:
                cout << value << " 米 = "
                              << metersToFeet(value) << " 英尺\n";
                break;
            case 4:
                cout << value << " 英尺 = "
                              << feetToMeters(value) << " 米\n";
                break;
            case 5:
                cout << value << " 磅 = "
                              << poundsToKilograms(value) << " 千克\n";
                break;
            case 6:
                cout << value << " 千克 = "
                              << kilogramsToPounds(value) << " 磅\n";
                break;
        }
    }
    
    return 0;
}