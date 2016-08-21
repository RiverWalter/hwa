#include <iostream>
#include <vector>
#include "include/student.hpp"
void TestStu();
using namespace std;
int main()
{
    TestStu();
    //cout << "Hello world!" << endl;
}
void TestStu()
{
    vector<ClsStu> stu{{"Bob",80},{"Mary",90},
        {"Martin",100}};
    for (auto s:stu)
        s.Print();
}
