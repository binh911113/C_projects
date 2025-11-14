#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include <string.h>

// Addition 
double add(double a, double b){
    return a + b;
}

// Subtraction
double subtract(double a, double b){
    return a - b;
}

// Multiplication 
double multiply(double a, double b){
    return a * b;
}

// Division
double divide(double a, double b){
    if (b == 0) {
        fprintf(stderr, "không thể chia cho 0! %s\n", strerror(EDOM));
        return NAN; // sao trả về 0? haỹ trả về NAN (Tra thư viện C tên 'math')(đã sửa)
    }
    return a / b;
}

// Operation
double operate(double a, double b, char operation){
    if(operation == '+'){
        return add(a, b);
    }
    else if(operation == '-'){
        return subtract(a, b);
    }
    else if(operation == '*'){
        return multiply(a, b);
    }
    else if(operation == '/'){
        return divide(a, b);
    }
    else {
        fprintf(stderr, "Phép toán không hợp lệ! %s\n", strerror(EDOM)); // print error chưa ổn. Dùng thư viện errno
        return NAN; // sao trả về 0? haỹ trả về NAN (Tra thư viện C tên 'math')(đã sửa)
    }
}

//  viết function để validate input cho operator (+ - * / )
int validate (char operator){
    return (operator =='+' || operator =='-' || operator =='*' || operator =='/');
}

int main(){
    double a, b, result;
    char operation;

    printf("nhập số thứ 1: ");
    scanf("%lf", &a);

    printf("nhập phép tính (+ - * /): ");
    scanf(" %c", &operation);
    
    printf("nhập số thứ 2: ");
    scanf("%lf", &b);

    result = operate(a, b, operation);
    printf("kết quả là: %lf\n", result);

    return 0;
}
