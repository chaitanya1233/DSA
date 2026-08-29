#include <iostream>
#include <map>


using namespace std;

class Teacher{

    // By default all the members of the class are private.

    public:
            string name;
            string dept;
            string subject;
            
    private:
            int salary;

    // Define a constructor to get the values.
    public:   // -> Make constructor public to access., otherwise it will throw error.
    Teacher(string name,string dept, string subject,int salary)
    {
        this->salary = salary;
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }

    // get salary 
    int getSalary()
    {
        return salary;
    }

    // Get name,department and subject of teacher.
    map<string,string>  getData()
    {
        map<string,string> mp;

        mp["Name"] = name;
        mp["Subject"] = subject;
        mp["department"] = dept;
        return mp;
    }

};

int main()
{

    Teacher t1("Chavan Sir","Information Technology","OPPS",20000);

    int salary = t1.getSalary();
    std::cout<<"Salary is:"<<salary<<endl;

    map<string,string> mp = t1.getData();

    for(auto s : mp)
    {
        std::cout<<s.first<<":"<<s.second<<endl<<endl;
    }
    return 0;
}