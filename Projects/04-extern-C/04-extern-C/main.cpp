//
//  main.cpp
//  04-extern-C
//
//  Created by FranklinTsang on 2019/8/15.
//  Copyright © 2019 FranklinTsang. All rights reserved.
//

/**
 1.被extern "C"修饰的代码会按照C语言的方式去编译
 2.由于C、C++编译规则的不同，在C、C++混合开发时，可能会经常出现以下操作
    2.1.C++在调用C语言API时，需要使用extern "C"修饰C语言的函数声明
    2.2.有时也会在编写C语言代码中直接使用extern “C” ，这样就可以直接被C++调用
    2.3.通过使用宏__cplusplus来区分C、C++环境 
 */

#include <iostream>
#include "calculator.h"

using namespace std;

#pragma mark - 方式1
extern "C" void funcA() {
    cout << "funcA()" << endl;
}

extern "C" void funcB(int age) { // C语言不支持函数重载
    cout << "funcB(int age) age = " << age << endl;
}

#pragma mark - 方式2
extern "C" {
    void funcC() {
        cout << "funcC()" << endl;
    }
    
    void funcD(int age) {
        cout << "funcD(int age) age = " << age << endl;
    }
}

#pragma mark - 方式3 函数声明
// 如果函数同时有声明和实现，要让函数声明被extern "C"修饰，函数实现可以不修饰
extern "C" void funcE();
extern "C" void funcF(int age);

#pragma mark - 方式4 函数声明
extern "C" {
    void funcG();
    void funcH(int age);
}

#pragma mark - 程序入口
int main(int argc, const char * argv[]) {

    funcA();
    funcB(18);

    funcC();
    funcD(19);
    
    funcE();
    funcF(20);
    
    funcG();
    funcH(21);
    
    cout << "10 + 20 = " << add(10, 20)  << endl;
    cout << "5 - 2 = " << sub(5, 2) << endl;

    return 0;
}

#pragma mark - 方式3 函数实现
void funcE() {
    cout << "funcE()" << endl;
}

void funcF(int age) {
    cout << "funcF(int age) age = " << age << endl;
}

#pragma mark - 方式4 函数实现
void funcG() {
    cout << "funcG()" << endl;
}

void funcH(int age) {
    cout << "funcH(int age) age = " << age << endl;
}
