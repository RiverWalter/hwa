//student.hpp
#pragma once
#include <iostream>
using namespace std;
class ClsStu
{
public:
    string Name;
    int Score;
    ClsStu(string aName, int aScore):
        Name(aName), Score(aScore) {}
    void Print();
};
