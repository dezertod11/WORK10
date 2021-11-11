#include <iostream>
#include <windows.h>

class Lesson
{
protected:
    int writing_test;
    int oral_test;
    int scores_per_semestr;

public:
    virtual int final_score()
    {
        return oral_test + writing_test;
    }
};

class Math : public Lesson
{
public:
    virtual int final_score() override
    {
        return scores_per_semestr + oral_test + writing_test;
    };
};

class Physics : public Lesson
{
public:
    virtual int final_score() override
    {
        return scores_per_semestr + writing_test;
    };
};

int main() {
    return 0;
}
