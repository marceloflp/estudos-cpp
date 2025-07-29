#include <iostream>

int main(){
    int idade;
    std:: string nome;
    
    std::cout << "Digite seu nome: ";
    std::cin >> nome;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cout << "Seu nome é " << nome << " e você tem "<< idade << " anos" << std::endl;

    return 0;
}