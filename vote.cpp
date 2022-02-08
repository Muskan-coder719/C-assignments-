#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"enter age of person : ";
	cin>>age;
	if(age>=18)
	{
		cout<<"person is elegible to vote";
	}
	else
	{
		cout<<"person is not elegible to vote";
		cout<<"\n after "<<18-age<<" years person can vote";
	}
	return 0;
}


OUTPUT :
enter age of person : 15
person is not elegible to vote 
after 3 years person can vote 
