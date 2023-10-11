#include <iostream>
#include<string>

int main() {
    setlocale(LC_ALL, "Rus");
    std::cout << "Введите строку: ";
    std::string input;
    std::getline(std::cin, input);

    std::cout << "Строка наоборот: ";
    for (std::string::reverse_iterator it = input.rbegin(); it != input.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << "Ты маладец!" << std::endl;
    std::cout << std::endl;
    return 0;
}
