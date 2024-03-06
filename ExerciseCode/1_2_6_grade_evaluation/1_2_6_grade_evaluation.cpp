/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：1_2_6_grade_evaluation
* 摘 要：感觉选择的图形求解面积
*
* 当前版本：1.0
* 作 者：赖鑫涛
* 完成日期：2024年3月5日
* e-mail:jacktaolai@cug.edu.cn
*
* 取代版本：1.0
* 原作者 ：赖鑫涛
* 完成日期：2024年3月6日
*********************************************/

#include <iostream>
using namespace std;

int main() {
    float score;

    // 提示用户输入成绩
    cout << "请输入您的成绩：";
    cin >> score;

    // 根据成绩范围输出评语
    if (90 <= score <= 100) {
        cout << "优秀" << endl;
    }
    else if (60 <= score < 90) {
        cout << "良好" << endl;
    }
    else if (0 <= score < 60) {
        cout << "不及格" << endl;
    }
    else {
        cout << "请输入正确的分数";
    }
}