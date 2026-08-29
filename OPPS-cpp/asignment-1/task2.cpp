#include <iostream>

using namespace std; 


class Batsman
{

    // Private members 
    int bcode;  
    string bname;
    int innings;
    int notout;
    int runs;

    float batavg;


    //  Function to compute batavg

    float calcAvg()
    {
        this->batavg = runs/(innings-notout);
        return batavg;
    }   


    // Function to accept value from bcode, name, innings, notout and invoke the function 
    //  calcavg()
    public:
    void readData(int bcode,string bname, int innings, int notout, int runs)
    {
        this->bcode = bcode;
        this->bname = bname;
        this->innings = innings;
        this->notout = notout;
        this->runs = runs;
    }

    public:
    void displayData()
    {

        cout<<"------------------------------------"<<endl;
        cout<<"Player Information:"<<endl;
        cout<<"PLAYER NAME:"<<bname<<endl;
        std::cout<<"PLAYER CODE:"<<bcode<<endl;
        std::cout<<"-------------------------------"<<endl;
        std::cout<<"PLAYER CARD:"<<endl;
        std::cout<<"INNINGS PLAYED:"<<innings<<endl;
        std::cout<<"RUNS:"<<runs<<endl;
        std::cout<<"NOT-OUT"<<notout<<endl;
        std::cout<<"AVERAGE:"<<batavg<<endl;
        cout<<"--------! THANK YOU !--------"<<endl;
        std::cout<<"-------------------------------"<<endl;        

    }
};

int main()
{

    Batsman b;

    b.readData(18,"Virat Kohli",87,67,13000);
    b.displayData();
    return 0;
}