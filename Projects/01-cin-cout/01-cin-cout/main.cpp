//
//  main.cpp
//  01-cin-cout
//
//  Created by FranklinTsang on 2019/8/15.
//  Copyright © 2019 FranklinTsang. All rights reserved.
//

/**
 C++中常使用cin、cout进行控制台的输入、输出
 cin用的右移运算符>>，cout用的是左移运算符<<
 endl是换行的意思
 */
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    cout << "Hello";
    cout << endl;
    cout << "World!\n";
    
    // 合并写法
    cout << "Hello" << endl << "World!\n";
    
    cout << "请输入数值" << endl;
    int value;
    cin >> value;       
    
    cout << "您输入的数值是：" << value << endl;
    
    getchar();          // 让程序中断，不直接退出，等待键盘输入
    return 0;
}
