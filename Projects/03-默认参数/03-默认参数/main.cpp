//
//  main.cpp
//  03-默认参数
//
//  Created by FranklinTsang on 2019/8/15.
//  Copyright © 2019 FranklinTsang. All rights reserved.
//

/**
 C++允许函数设置默认参数，在调用时可以根据情况省略实参。规则如下:
 1.默认参数只能按照右到左的顺序
 2.如果函数同时有声明、实现，默认参数只能放在函数声明中
 3.默认参数的值可以是常量、全局符号(全局变量、函数名)
    3.1.如果函数的实参经常是同一个值， 可以考虑使用默认参数
    3.2.函数重载、默认参数可能会产生冲突、二义性(建议优先选择使用默认参数)
 */

#include <iostream>

using namespace std;

int age = 33;

void test() {
    cout << "test()" << endl;
}

/**
 默认参数的函数

 @param a 参数1
 @param b 参数2
 @param c 参数3
 @param func 指向函数的指针
 */
void display(int a = 11,
             int b = 12,
             int c = age,
             void (*func)() = test) {
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "c is " << c << endl;
    func();
}

/**
 默认参数函数

 @param a 参数1
 @param b 参数2（默认参数）
 */
void display(int a, int b = 20) {
    cout << "a is " << a << endl;
}

/**
 重载函数

 @param a 参数
 */
void display(int a) {
    cout << "a is " << a << endl;
}

int main(int argc, const char * argv[]) {

    display();
    
    // 函数重载、默认参数可能会产生冲突、二义性(建议优先选择使用默认参数)
    // display(10);
    return 0;
}
