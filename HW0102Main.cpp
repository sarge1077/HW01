#include <iostream>
using namespace std;

#include "HW0102.h"
#include "HW0102.cpp"

int main(){
    int num1,num2,res;
    char opr;

    Add a;
    Sub s;
    Mul m;
    Div d;
    while (1)
    {
    cout<<"두 정수와 연산자를 입력하세요>>";
    cin>>num1;
    cin>>num2;
    cin>>opr;

    if(opr=='+'){
        a.setValue(num1,num2);
        res=a.calculate();
    }
    else if (opr=='-'){
        s.setValue(num1,num2);
        res=s.calculate();
    }
    else if (opr=='*'){
        m.setValue(num1,num2);
        res=m.calculate();
    }
    else if(opr=='/'){
        d.setValue(num1,num2);
        res=d.calculate();
    }
    
    cout<<res<<"\n";
    }
}