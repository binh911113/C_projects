#include <stdio.h>
#include <stdlib.h>

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
        printf("không thể chia cho 0!\n");
        return 0;
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
        printf("Phép toán không hợp lệ!\n");
        return 0;
    }
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
