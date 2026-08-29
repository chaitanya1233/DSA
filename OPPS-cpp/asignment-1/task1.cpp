#include <iostream>
#include <string>

using namespace std;

class Student
{
    // Private members of the class student.
    int admno;
    string sname;
    float science;
    float eng;
    float math;
    float total = 0.0;

    // a function to calculate eng + math + science with float return type.
    public:
    float stotal()
    {
        return eng + math + science;
    }

    // Function to accept values for admno, sname, eng, science and invoke ctotal() to calculate 
    // otal.

    public:
    void takeData(int admno,string sname,float eng,float math,float science)
    {

        this->admno = admno;
        this->sname = sname;
        this->eng = eng;
        this->math = math;
        this->science = science;
        this->total = stotal();
    }

    //  Function to display all the data members on the screen.
    public:
    void showData()
    {
        cout<<"------------------------------------"<<endl;
        cout<<"Student information:"<<endl;
        cout<<"ADMNO:"<<admno<<endl;
        std::cout<<"SNAME:"<<sname<<endl;
        std::cout<<"-------------------------------"<<endl;
        std::cout<<"ACADMIC PERFORMANCE:"<<endl;
        std::cout<<"MATHS:"<<math<<endl;
        std::cout<<"SCIENCE:"<<science<<endl;
        std::cout<<"ENGLISH:"<<eng<<endl;
        cout<<"--------! THANK YOU !--------"<<endl;
        std::cout<<"-------------------------------"<<endl;
        
    }


};

int main()
{

    Student s;

    s.takeData(206,"Chaiyanya",97.0,98.7,99.4);

    s.showData();


    return 0;
}