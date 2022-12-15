#include <iostream>
#define yeet(a) throw(a)

int add(int a, int b) {
    int res = a + b;
    if (res == 8200)
        yeet(res);
    return a + b;
}

int  multiply(int a, int b) {
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum = add(sum, a);
    };
    if (sum == 8200)
        yeet(sum);
    return sum;
}

int  pow(int a, int b) {
    int exponent = 1;
    for (int i = 0; i < b; i++) {
        exponent = multiply(exponent, a);
    };
    if (exponent == 8200)
        yeet(exponent);
    return exponent;
}

int main(void) {
    try
    {
        std::cout << add(4200,4000) << std::endl;
    }
    catch (int err)
    {
        std::cerr << "This user is not authorized to access 8200 , please enter different numbers, or try to get clearance in 1 year\n";
    }
    catch (...) {
        std::cerr << "ERROR. fix it!!!!";
    }
    
}