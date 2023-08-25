#include <iostream>

float salary()
{
    std::cout << "Please enter your salary (before CPF) > ";
    float sal;
    std::cin >> sal; 
    float cpf;
    cpf = sal * 0.37;
    float salAfterCPF= sal - cpf;
    std::cout << "Your salary is " << salAfterCPF << " after CPF. \n"; 
    std::cout << "Your CPF total is " << cpf << " \n";
    return 0;
}

int main() {
    std::cout << "Hello World! \n";
    salary();
    return 0;
}
