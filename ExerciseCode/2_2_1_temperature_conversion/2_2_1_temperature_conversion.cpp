/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：2_2_1_temperature_conversion.cpp
* 摘 要：将华氏温度转化为摄氏温度
*
* 当前版本：1.0
* 作 者：赖鑫涛
* 完成日期：2024年3月8日
* e-mail:jacktaolai@cug.edu.cn
*
* 取代版本：0.0
* 原作者 ：赖鑫涛
* 完成日期：2024年3月24日
*********************************************/

#include <iostream>
using namespace std;

float TemperatureConversion(float tempeture_f) {
    float tempeture_c = (tempeture_f - 32) * 5 / 9;
    //注意此处5/9千万不能打括号，否者会按int型进行运算
    return tempeture_c;
}

int main(){
    float tempeture_f = 0;
    cout << "Please enter a Fahrenheit temperature:";
    cin >> tempeture_f;
    cout << "The temperature in Celsius is:" << TemperatureConversion(tempeture_f);
    return 0;
}

