#include <iostream>
#include<iomanip>
using namespace std;
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
    getTime()
    {
    cout << "Enter time:" << endl;
    cout << "Hours=   ";
	   cin>>hh;        
	  cout << "\n Minutes=  ";          
	   cin >> mm;
    cout << "\n Seconds=  ";          
	   cin >> ss;
    }
    convertIntoSeconds()
    {
    seconds = hh*3600 + mm*60 + ss;
    }
    displayTime()
    {
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss ;
    cout << "\n Time in total seconds: " << seconds;
    }
};
int main()
{
    Time t; 
    t.getTime();
    t.convertIntoSeconds();
    t.displayTime();
    return 0;
}


OUTPUT :
Enter time:
Hours=   1

 Minutes=  1

 Seconds=  6
The time is = 01:01:06
 Time in total seconds: 3666
