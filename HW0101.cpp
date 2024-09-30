#include <iostream>
using namespace std;

class Add{
private:
    int a,b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Sub{
private:
    int a,b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Mul{
private:
    int a,b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Div{
private:
    int a,b;
public:
    void setValue(int x, int y);
    int calculate();
};

void Add::setValue(int x, int y){
    a=x;
    b=y;
}

void Sub::setValue(int x, int y){
    a=x;
    b=y;
}

void Mul::setValue(int x, int y){
    a=x;
    b=y;
}

void Div::setValue(int x, int y){
    a=x;
    b=y;
}

int Add::calculate(){
    return a+b;
}

int Sub::calculate(){
    return a-b;
}

int Mul::calculate(){
    return a*b;
}

int Div::calculate(){
    return a/b;
}

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