#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
void GetOutput();
void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	    {
			for(j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			    }
		    }
	    }
	cout<<"after bubble sort elements are:"<<endl;
}
void selection_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++) 		//i+1 compares first element with second element
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"after selection sort elements are:"<<endl;	
}
void insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];				//first unsorted element 
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];			//big value
			j--;		
		}
		a[j+1]=temp;   			//small value
	}
	cout<<"after insertion sort elements are :"<<endl;
}

void run_again()
	{
	string input;
	cout<<"\n do you want to sort another array(yes/no):";
	cin>>input;
	if(input== "yes")
		{
	  		GetOutput();	
		}
	else
		{
			cout<<"EXIT THE PROGRAM !";
		}
	}
int main()
{
	GetOutput();
	getche();
}
void GetOutput()
{
	int choice,n,i;
	cout<<"sorting methods :";
	cout<<"\n 1. Bubble sort \n2.selection sort \n3.insertion sort ";
	cout<<"\n enter your choice:";
	cin>>choice;
	cout<<"enter size of array :";
	cin>>n;
	int a[n];
	cout<<"enter elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	switch(choice)
	{
		case 1:
			bubble_sort(a,n);
			break;
		case 2:
			selection_sort(a,n);
			break;
		case 3:
			insertion_sort(a,n);
			break;
		default :
			cout<<"wrong input !"<<"\n please select from 1-3 options";
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	run_again();
}
	
