#include <iostream>

using namespace std;

    class student{
        public:
        string name;
        int age;
        bool gender;
    };

int main()
{
    student a;
    a.name = "a";
    a.age = 21;
    a.gender = 0;
    
    cout<<a.name<<endl<<a.age<<endl<<a.gender <<endl;
    

    return 0;
}