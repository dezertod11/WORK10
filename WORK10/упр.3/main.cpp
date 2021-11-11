#include <iostream>
#include <string>
#include <windows.h>
#include <functional>

template<class Function, class ... Args >
void callFunction( Function function, Args ... args) {
    function(args...);

}

int function(int a, int b) {
    std::cout << "Функция вызвана!" << std::endl;
    std::cout <<  a << " " << b << std::endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
//    std::cout << " " << std::endl;
    int a{1};
    callFunction(function, 1, 2);
    return 0;
}
