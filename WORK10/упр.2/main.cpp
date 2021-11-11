#include <iostream>
#include <string>
#include <windows.h>

template<class T, class ... Args>
T* f(Args ... args) {
    T* ptr = new T(args...);
    std::cout << "ptr: " << ptr << std::endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << " " << std::endl;
    f<int>(1);
    return 0;
}
