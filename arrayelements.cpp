#include <iostream>
using namespace std;
int main()
{
   int data[5];
   cout << "Enter elements: \n ";
   for(int i = 0; i < 5; ++i)
   cin >> data[i];
   cout<<"\n";
   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);
      return 0;
}


OUTPUT :
enter elements:
0
1
2
3
4

you entered:
0
1
2
3
4
