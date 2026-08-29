#include <iostream>
#include <string>
#include <map>


using namespace std;


class Teacher{
    string name;
    string subject;
    int salary;

    public:
    Teacher(string name,string subject)
    {
        this->name = name;
        this->subject = subject;
    }

    public:
    void setSalary(int salary)
    {
        this->salary = salary;
        std::cout<<"Salary set successfully!"<<endl;
    }

    public:
    int getSalary()
    {
        return salary;
    }

    public:
    map<string ,string> getData()
    {
        map<string,string> mp;

        mp["Name"] = name;
        mp["Subject"] = subject;
        return mp;
    }
};

int main()
{
    
    Teacher t("Chaitanya","Conputer System and Architecture.");

    t.setSalary(2000);
    int salary = t.getSalary();

    std::cout<<"Salary is:"<<salary<<endl;

    map<string,string> mp = t.getData();

    for(auto x : mp)
    {
        std::cout<<x.first<<":"<<x.second<<endl;
    }

    
    return 0;
}