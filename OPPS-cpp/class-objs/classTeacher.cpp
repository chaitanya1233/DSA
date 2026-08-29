#include <iostream>
#include <string>

using namespace std;

class Teacher{

    // Members of the classs- class Variables.
    public:
            string name;
            string dept;
            string subject;
            
    
    private:
            double salary;
};

int main()
{

    Teacher t;

    // Assign some name to the teacher t 
    t.name = "Chaitanya Kale";

    // Store name of the teacher.
    string name = t.name;

    // Get the name of teacher.
    std::cout<<"Name of teacher is:"<<name<<endl;

    

    return 0;
}