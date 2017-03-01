// MyMathRef.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "MyDLL.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double a = 7.4;
    int b = 99;

    cout << "a + b = " <<
		MathFuncs::MyMathFuncs::Add(a, b) << endl;
    cout << "a - b = " <<
        MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
    cout << "a * b = " <<
        MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
    cout << "a / b = " <<
        MathFuncs::MyMathFuncs::Divide(a, b) << endl;

    try
    {
        cout << "a / 0 = " <<
            MathFuncs::MyMathFuncs::Divide(a, 0) << endl; 
    }
    catch (const invalid_argument &e) 
    {
        cout << "Caught exception: " << e.what() << endl; 
    }

    return 0;
}

