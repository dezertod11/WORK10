#include <iostream>
#include <windows.h>
#include <functional>

template<class Derived>
class Base {
public:
    void print()
    {
        self()->printImplementation();
    }

    Derived* self()
    {
        return static_cast<Derived*> (this);
    }
};

class Derived : public Base<Derived> {
public:
    void printImplementation()
    {
        std::cout << "print() from Derived" << std::endl;
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    Derived d;
    d.print();

    return 0;
}
