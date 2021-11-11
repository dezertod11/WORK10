#include <iostream>
#include <string>
#include <windows.h>

template<class ... Args> // с выражением свёртки
auto dataVolume1(Args...args) {
    return (...+ sizeof(args));
}


template<class First> // без выражения свёртки
int dataVolume2(First first) {
    return sizeof(first);
}

template<class First, class ... Args>
int dataVolume2(First first, Args... args) {
    return (sizeof(first) + dataVolume2(args...));
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Вывод размера аргуметнтов функции в байтах с выражением свёртки: " << std::endl;
    std::cout << dataVolume1(0,  1, 1.2, "abcdef") << std::endl;
    std::cout << "\nВывод размера аргуметнтов функции в байтах без выражением свёртки: " << std::endl;
    std::cout << dataVolume2(0,  1, 1.2, "abcdef") << std::endl;
    return 0;
}
