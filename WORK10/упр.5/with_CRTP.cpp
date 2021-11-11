#include <iostream>
#include <windows.h>

template<class Derived>
class Lesson
{
public:
    int final_score()
    {
        self()->final_score_Impl();
    }

protected:
    int writing_test;
    int oral_test;
    int scores_per_semestr;
    
private:
    Derived* self() {
        return static_cast<Derived*>(this);
    }
};

class Math : public Lesson<Math>
{
public:
    int final_score_Impl()
    {
        return scores_per_semestr + oral_test + writing_test;
    };
};

class Physics : public Lesson<Math>
{
public:
    int final_score_Impl()
    {
        return scores_per_semestr + writing_test;
    };
};

int main() {
    return 0;
}
