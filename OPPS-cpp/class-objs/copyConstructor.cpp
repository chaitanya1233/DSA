#include <iostream>
#include <string>
#include <map>


using namespace std;


class Teacher{
    string name;
    string subject;
    int salary;


    // Normal constructor
    public:
            Teacher(string name,string subject,int salary)
            {
                this->salary = salary;
                this->name = name;
                this->subject = subject;
                cout<<"Data for Teacher class set successfully!"<<endl;
            }

            // Copy constructor.
            Teacher(const Teacher &obj)
            {
                this->name = obj.name;
                this->salary =obj.salary;
                this->subject = obj.subject;
                cout<<"Data for the copy Teacher class Successful!"<<endl;
            }



    //public:
    // void setSalary(int salary)
    // {
    //     this->salary = salary;
    //     std::cout<<"Salary set successfully!"<<endl;
    // }

    // public:
    // int getSalary()
    // {
    //     return salary;
    // }

    public:
    void getData()
    {
        map<string,string> mp;

        mp["Name"] = name;
        mp["Subject"] = subject;
        mp["Salary"] = salary;
        
        for(auto x : mp)
         {
            std::cout<<x.first<<":"<<x.second<<endl;
         }

    }
};

int main()
{
    // Call the original Constructor.   
    Teacher t1("Chaitanya","Conputer System and Architecture",2000);

    // Call the Copy constructor.
    Teacher t2 = t1;  // // invokes copy constructor


    // Set the salary for t1.
    // t1.setSalary(2000);
    // int salary = t1.getSalary();
    // std::cout<<"Salary is:"<<salary<<endl;

    // call original teacher 
    cout<<"Original Teacher:"<<endl;
    t1.getData();

    // Copy teacher
    cout<<"Copy Teacher:"<<endl;
    t2.getData();


    
    return 0;
}