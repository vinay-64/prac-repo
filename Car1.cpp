#include<bits/stdc++.h>  //IMPORTING FILES
#include<iostream>      //IMPORTING HEADER FILES
using namespace std;          //IMPORTING NAMESPACE
#include<stdlib.h>
class Car        //CREATING CAR
{
	public:      //DECLARING VARIABLE SECTION
		string Brand;
		string Model;
		int Year;
		int Price;
	public:      //DECLARING METHODS
		void set(string b,string m,int y,int p)     //METHOD FOR SETTING VARIABLES
		{
			Brand=b;
			Model=m;
			Year=y;
			Price=p;
		}
		void display()            //METHOD FOR DISPLAYING VARIABLES 
		{
			cout<<"Brand:"<<Brand<<endl;
			cout<<"Model:"<<Model<<endl;
			cout<<"Year:"<<Year<<endl;
			cout<<"Price(RM):"<<Price<<endl;
		}
		void display1()     //METHOD FOR DISPLAY VARIABLES
		{
			cout<<"Model:"<<Model<<endl;
			cout<<"Year:"<<Year<<endl;
			cout<<"Price(RM):"<<Price<<endl;
		}
};
int main()     //MAIN METHOD
{
	int n;     //VARIABLE DECLARATION
	cout<<"Enter number of cars(Max 10)"<<endl;
	cin>>n;
	int i;
	Car obj[n];
	int n1=n;
	for(i=0;i<n;i++)     //INPUTTING VARIABLES AND METHODS
	{
		string Brand,Model;   
		int Year,Price;
		cout<<"Input car No "<<i+1<<endl;
		cout<<"Brand:";
		getline(cin,Brand);
		while(Brand.length()==0)  //SCANNING
		{
			getline(cin,Brand);
		}
		cout<<"Model:";
		getline(cin,Model);
		while(Model.length()==0)
		{
			getline(cin,Model);
		}
		cout<<"Year:";
		cin>>Year;
		cout<<"Price:";
		cin>>Price;
		obj[i].set(Brand,Model,Year,Price);
	}
	while(1)      //THIS LOOP WILL CONTINUES UPTO C==YES
	{
		char c;
		cout<<"Do you wish to continue (y/n)";
		cin>>c;
		if(c=='y')   //IF C==Y
		{
			int ch;
			cout<<"What do you wish to do ? 1-add new , 2-display info , 3-modify info :";
			cin>>ch;
			if(ch==2)      //HERE  2 INDICATES DISPLAYING DETAILS OF THE CAR
			{	string b;
			    int i,flag=0,ind=-1; 
				cout<<"insert the car brand you wish to display :";    //GIVING BRAND
				getline(cin,b);
				while(b.length()==0)
				{
					getline(cin,b);
				}
				for(i=0;i<n1;i++)    //CHECKING IF THE GIVEN BRAND MATCHES WITH EXISTING BRAND
				{
					if(obj[i].Brand==b)  
					{
						flag=1;
						ind=i;
						break;
					}
				}
				if(flag==1)
				{
					cout<<"found match!"<<endl;
					obj[ind].display1();     //IF MATCH THEN DISPLAY
				}
				else
				{
					cout<<"match not found";   //ELSE NO MATCH
				}
			}
			if(ch==1)  //IF CH==1 INDICATES INSERTING THE NEW ITEMS
			{
				string Brand,Model;
				int Year,Price;
				cout<<"Input car No 1"<<endl;
				cout<<"Brand:";
				getline(cin,Brand);
				while(Brand.length()==0)
				{
					getline(cin,Brand);
				}
				cout<<"Model:";
				getline(cin,Model);
				while(Model.length()==0)
				{
					getline(cin,Model);
				}
				cout<<"Year:";
				cin>>Year;
				cout<<"Price:";
				cin>>Price;
				obj[n1].set(Brand,Model,Year,Price);
				n1+=1;
			}
			if(ch==3)  //HERE CH=3 INDICTAES MODIFICATION
			{
				string br;
				int i1,flag1=0,ind1=-1; 
				cout<<"insert the car brand you wish to modify :";    //GIVING BRAND
				getline(cin,br);
				while(br.length()==0)
				{
					getline(cin,br);
				}
				for(i1=0;i1<n1;i1++)     //CHECKING IF THE GIVEN BRAND MATCHES WITH EXISTING BRAND
				{
					if(obj[i1].Brand==br)
					{
						flag1=1;
						ind1=i1;
						break;
					}
				}
				if(flag1==1)       //IF MATCH FOUNDS THEN MODIFY THE OBJECT VARIABLE 
				{
					cout<<"found match!"<<endl;
					int yr;
					cout<<"enter year to modify";
					cin>>yr;
					obj[ind1].Year=yr;
				}
				else     //ELSE NO MATCH FOUND
				{
					cout<<"match not found";    
				}
			}
		}
		else    //IF CH==n THEN BREAK THE LOOP
		{
			break;
		}		
	}
	return 0;
}
