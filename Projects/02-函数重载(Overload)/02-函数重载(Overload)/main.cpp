//
//  main.cpp
//  02-函数重载(Overload)
//
//  Created by FranklinTsang on 2019/8/15.
//  Copyright © 2019 FranklinTsang. All rights reserved.
//

/**
 1.规则
 1.1.函数名相同
 1.2.参数个数不同、参数类型不同、参数顺序不同
 
 2.注意
 2.1.返回值类型与函数重载无关
 2.2.调用函数时，实参的隐式类型转换可能会产生二义性
 
 3.本质：采用了name mangling或者叫name decoration技术
 3.1.C++编译器默认会对符号名(比如函数名)进行改编、修饰，有些地方翻译为“命名倾轧”
 3.2.重载时会生成多个不同的函数名，不同编译器(MSVC、g++)有不同的生成规则
 3.3.通过IDA打开【VS_Release_禁止优化】可以看到
 */
#include <iostream>
using namespace std;

void display() {
    cout << "display()" << endl;
}

void display(int a) {
    cout << "display(int a)" << endl;
}

void display(long a) {
    cout << "display(long a)" << endl;
}

void display(double a) {
    cout << "display(double a)" << endl;
}

int main(int argc, const char * argv[]) {

    display();
    display(10);
    display(10L);
    display(10.1);
    
    getchar();
    return 0;
}
