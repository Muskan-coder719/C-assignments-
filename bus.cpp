#include <conio.h>

#include <cstdio>

#include <iostream>

#include <string.h>

#include <cstdlib>

using namespace std;

static int p = 0;

class a

{

  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];

public:

  void install();

  void allotment();

  void empty();

  void show();

  void avail();

  void position(int i);

}

bus[10];

void vline(char ch)

{

  for (int i=80;i>0;i--)

  cout<<ch;

}

void a::install()

{

  cout<<"Enter bus no: ";

  cin>>bus[p].busn;

  cout<<"\nEnter Driver's name: ";

  cin>>bus[p].driver;

  cout<<"\nArrival time: ";

  cin>>bus[p].arrival;

  cout<<"\nDeparture: ";

  cin>>bus[p].depart;

  cout<<"\nFrom: \t\t\t";

  cin>>bus[p].from;

  cout<<"\nTo: \t\t\t";

  cin>>bus[p].to;

  bus[p].empty();

  p++;

}

void a::allotment()

{

  int seat;

  char number[5];

  top:

  cout<<"Bus no: ";

  cin>>number;

  int n;

  for(n=0;n<=p;n++)

  {

    if(strcmp(bus[n].busn, number)==0)

    break;

  }

  while(n<=p)

  {

    cout<<"\nSeat Number: ";

    cin>>seat;

    if(seat>32)

    {

      cout<<"\nThere are only 32 seats available in this bus.";

    }

    else

    {

    if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)

      {

        cout<<"Enter passanger's name: ";

        cin>>bus[n].seat[seat/4][(seat%4)-1];

        break;

      }

    else

      cout<<"The seat no. is already reserved.\n";

      }

      }

    if(n>p)

    {

      cout<<"Enter correct bus no.\n";

      goto top;

    }

  }


void a::empty()

{

  for(int i=0; i<8;i++)

  {

    for(int j=0;j<4;j++)

    {

      strcpy(bus[p].seat[i][j], "Empty");

    }

  }

}

void a::show()

{

  int n;

  char number[5];

  cout<<"Enter bus no: ";

  cin>>number;

  for(n=0;n<=p;n++)

  {

    if(strcmp(bus[n].busn, number)==0)

    break;

  }

while(n<=p)

{

  vline('*');

  cout<<"Bus no: \t"<<bus[n].busn

  <<"\nDriver: \t"<<bus[n].driver<<"\t\tArrival time: \t"

  <<bus[n].arrival<<"\tDeparture time:"<<bus[n].depart

  <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<

  bus[n].to<<"\n";

  vline('*');

  bus[0].position(n);

  int a=1;

  for (int i=0; i<8; i++)

  {

    for(int j=0;j<4;j++)

    {

      a++;

      if(strcmp(bus[n].seat[i][j],"Empty")!=0)

      cout<<"\nThe seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<".";

    }

  }

  break;

  }

  if(n>p)

    cout<<"Enter correct bus no: ";

}

void a::position(int l)

{

  int s=0;p=0;

  for (int i =0; i<8;i++)

  {

    cout<<"\n";

    for (int j = 0;j<4; j++)

    {

      s++;

      if(strcmp(bus[l].seat[i][j], "Empty")==0)

        {

          cout.width(5);

          cout.fill(' ');

          cout<<s<<".";

          cout.width(10);

          cout.fill(' ');

          cout<<bus[l].seat[i][j];

          p++;

        }

        else

        {

        cout.width(5);

        cout.fill(' ');

        cout<<s<<".";

        cout.width(10);

        cout.fill(' ');

        cout<<bus[l].seat[i][j];

        }

      }

    }

  cout<<"\n\nThere are "<<p<<" seats empty in Bus No: "<<bus[l].busn;

  }

void a::avail()

{


  for(int n=0;n<p;n++)

  {

    vline('*');

    cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver

    <<"\t\tArrival time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"

    <<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"

    <<bus[n].to<<"\n";

    vline('*');

    vline('_');

  }

}

int main()

{

system("cls");

int w;

while(1)

{

  cout<<"\n\n\n\n\n";

  cout<<"\t\t\t1.Install\n\t\t\t"

  <<"2.Reservation\n\t\t\t"

  <<"3.Show\n\t\t\t"

  <<"4.Buses Available. \n\t\t\t"

  <<"5.Exit";

  cout<<"\n\t\t\tEnter your choice:-> ";

  cin>>w;

  switch(w)

  {

    case 1:  bus[p].install();

      break;

    case 2:  bus[p].allotment();

      break;

    case 3:  bus[0].show();

      break;

    case 4:  bus[0].avail();

      break;

    case 5:  exit(0);

  }
}
return 0;
}
 
OUTPUT :





                        1.Install
                        2.Reservation
                        3.Show
                        4.Buses Available.
                        5.Exit
                        Enter your choice:-> 1
Enter bus no: 23

Enter Driver's name: rahul

Arrival time: 04:00

Departure: 04:15

From:                   jalandhar

To:                     delhi





                        1.Install
                        2.Reservation
                        3.Show
                        4.Buses Available.
                        5.Exit
                        Enter your choice:-> 2
Bus no: 23

Seat Number: 32
Enter passanger's name: MUSKAN





                        1.Install
                        2.Reservation
                        3.Show
                        4.Buses Available.
                        5.Exit
                        Enter your choice:-> 3
Enter bus no: 23
********************************************************************************Bus no:         14
Driver:         rahul           Arrival time:   04:0004:15jalandhar     Departure time:04:15jalandhar
From:           jalandhar               To:             delhi
********************************************************************************
    1.     Empty    2.     Empty    3.     Empty    4.     Empty
    5.     Empty    6.     Empty    7.     Empty    8.     Empty
    9.     Empty   10.     Empty   11.     Empty   12.     Empty
   13.     Empty   14.     Empty   15.     Empty   16.     Empty
   17.     Empty   18.     Empty   19.     Empty   20.     Empty
   21.     Empty   22.     Empty   23.     Empty   24.     Empty
   25.     Empty   26.     Empty   27.     Empty   28.     Empty
   29.     Empty   30.     Empty   31.     Empty   32.    MUSKAN

There are 31 seats empty in Bus No: 23
The seat no 32 is reserved for MUSKAN.




                       

                        1.Install
                        2.Reservation
                        3.Show
                        4.Buses Available.
                        5.Exit
                        Enter your choice:->5
                        

