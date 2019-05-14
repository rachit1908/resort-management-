#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

class entry
{
char ch[20];
public:

void displaydata();
void getdataa();
 void checkpost1();
 void checkpost2();
};
void entry::displaydata()
{
    cout<<"enter your comment"<<endl;
cin>>ch;
cout<<"*****************************************************************************"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*       *     * ***** *    ***** ***** *     * *****                        *"<<endl;
cout<<"*       *     * *     *    *     *   * **   ** *                            *"<<endl;
cout<<"*       *  *  * *     *    *     *   * * * * * *                            *"<<endl;
cout<<"*       *  *  * ***** *    *     *   * *  *  * *****                        *"<<endl;
cout<<"*       * * * * *     *    *     *   * *  *  * *                            *"<<endl;
cout<<"*       * * * * *     *    *     *   * *     * *                            *"<<endl;
cout<<"*        *   *  ***** **** ***** ***** *     * *****                        *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                     PROJECT BY-                                           *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                SALONI SHARMA & RACHIT SONI                                *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*		   IN GUIDANCE OF-                                          *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*				  MR.MUKESH GILUKA                          *"<<endl;
cout<<"*							                    *"<<endl;
cout<<"*****************************************************************************"<<endl;

}
//void room();
                void room()
                {
                    int t;
                cout<<"WHAT TYPE OF ROOM DO YOU WANT \n"<<endl;
                cout<<"1. LUXURY \n 2. SWEET \n 3. COTTAGE \n"<<endl;
                cin>>t;
                switch(t)
                {
                     case 1:  int pl,b,s;
                              pl= 8000;
                              cout<<"NUMBER OF BEDS \n"<<endl;
                              cin>>b;
                              cout<<"MAY WE KNOW THE EXACT STAY OF YOURS "<<endl;
                              cin>>s;
                              if(s<5)
                              {
                                  cout<<"YOUR BILL FOR THE STAY WILL BE - "<<endl;
                                  cout<<pl*s;
                              }
                              else
                                cout<<"DOESN'T MATCH WITH THE EARLIER DETAIL"<<endl;
                              break;



                     case 2:  int ps;
                              ps= 5000;
                              cout<<"NUMBER OF BEDS\n"<<endl;
                               cin>>b;
                              cout<<"MAY WE KNOW THE EXACT STAY OF YOURS"<<endl;
                              cin>>s;
                              if(s<10)
                              {
                                  cout<<"YOUR BILL FOR THE STAY WILL BE - "<<endl;
                                  cout<<ps*s<<endl;
                              }
                              else
                                cout<<"DOESN'T MATCH WITH THE EARLIER DETAIL"<<endl;
                              break;



                     case 3:  int pc;
                              pc= 3000;
                              cout<<"NUMBER OF BEDS \n"<<endl;
                               cin>>b;
                              cout<<"MAY WE KNOW THE EXACT STAY OF YOURS"<<endl;
                              cin>>s;
                              if(s>10)
                              {
                                  cout<<"YOUR BILL FOR THE STAY WILL BE - "<<endl;
                                  cout<<pc*s;
                              }
                              else
                                cout<<"DOESN'T MATCH WITH THE EARLIER DETAIL"<<endl;
                              break;


                }
            }
            void entry::checkpost1()
            {
            	char ch[10];
            	cout<<"DO YOU WANT TO GO FOR THE FOOD SECTION";
            	
			}




  class food
{
    int f;
public:
    void fooddata();
    void nonveg();
    void veg();


};



class travel
{
    int t,x,q;
    char ch[20];
    public:

    void traveldata();
};    


void entry::getdataa()
{
    system("pause");
    system("cls");
    int x;
    cout<<"how may i help you \n 1. STAY \n 2. FOOD \n 3. TRAVEL"<<endl;
    cin>>x;
    
    switch(x)
    {
       case 1:  int s,d,t,i;
        cout<<"HOW LONG DO YOU HAVE YOUR STAY \n"<<endl;
                cout<<"1.LESS THAN FIVE DAYS (and the exact duration) \n 2. LESS THAN TEN DAYS (and the exact duration)\n 3. MORE THAN TEN DAYS (and the exact duration) \n"<<endl;
                cin>>s;
                cout<<endl;
                switch(s)
                {
                    case 1:room();
                     break;
                    case 2:room();
                    break;
                    case 3:room();
                    break;
                }
                system("pause");
                system("cls");
                char c;
                cout<<"DO YOU WANT TO GO FOR THE FOOD \n PRESS Y OR N \n";
                cin>>c;
                if(c=='Y')
                {
                food k;
                k.fooddata();
                }
                else 
                {
                	entry e;
                	e.getdataa()	;			}
                break;
			
		case 2: food f;
		        f.fooddata();
				break;
				
		case 3: travel g;
		        g.traveldata()	;
				 break;    

}

}
void food::nonveg()
{
    int k;
    cout<<" NON-VEG MENU \n 1.CHICKEN MASALA 2.CHICKEN WINGS 3.CHICKEN POPCORN 4.CHICKEN KABABS \n"<<endl;
    cin>>k;
    switch(k)
    {
    case 1:cout<<"YOUR TOTAL BILL IS :560"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM"<<endl;
    break;
    case 2:cout<<"YOUR TOTAL BILL IS :800"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM"<<endl;
    break;
    case 3:cout<<"YOUR TOTAL BILL IS :600"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM"<<endl;
    break;
    case 4:cout<<"YOUR TOTAL BILL IS :900"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM"<<endl;
    break;
    }
}
void food::veg()
{
    int v;
    cout<<" VEG MENU \n 1.MANCHURIAN 2.PANEER MASALA 3.MASALA DOSA 4.MOMOS \n"<<endl;
    cin>>v;
    switch(v)
    {
    case 1:cout<<"YOUR TOTAL BILL IS:344"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM"<<endl;
    break;
    case 2:cout<<"YOUR TOTAL BILL IS:400"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM"<<endl;
    break;
    case 3:cout<<"YOUR TOTAL BILL IS:600"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM"<<endl;
    break;
    case 4:cout<<"YOUR TOTAL BILL IS:200"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM"<<endl;

   break;
    }
}


void food::fooddata()
{
    system("pause");
    system("cls");
    cout<<"WHAT WOULD YOU LIKE TO PREFER 1. VEG 2. NON-VEG"<<endl;
    cin>>f;
    switch(f)
           {
             case 1:veg();
             break;
             case 2:nonveg();
             break;
           }
}

void travel::traveldata()
{
    system("pause");
    system("cls");

    cout<<"DO YOU WANT ROAM IN OUR CITY"<<endl;
    cin>>ch;
    cout<<"WELL THAT'S A GREAT IDEA "<<endl;
    cout<<"WHICH PLACES DO YOU WANT TO VISIT  \n 1.TAJ PALACE 2.TEA GARDEN 3.MUSEUM"<<endl;
    cin>>x;
    cout<<"OK!! WOULD YOU LIKE TO TAKE A CAB"<<endl;
        char ch[20];

        cin>>ch;

    switch(x)
    {
       case 1: cout<<"WHAT WOULD YOU LIKE TO TAKE \n 1.MINI 2.MICRO 3.SEDAN 4.SUV"<<endl;
        cin>>q;
        switch(q)
    {

        case 1:cout<<"CHARGES FOR MINI :30RS/KM"<<endl;
        break;
        case 2:cout<<"CHARGES FOR MICRO :40RS/KM"<<endl;
        break;
        case 3:cout<<"CHARGES FOR SEDAN :50RS/KM"<<endl;
        break;
        case 4:cout<<"CHARGES FOR SUV :70RS/KM"<<endl;
        break;
    }

            
        case 2:cout<<"WHAT WOULD YOU LIKE TO TAKE \n 1.MINI 2.MICRO 3.SEDAN 4.SUV"<<endl;
        cin>>q;
        switch(q)
    {

        case 1:cout<<"CHARGES FOR MINI :50RS/KM"<<endl;
        break;
        case 2:cout<<"CHARGES FOR MICRO :60RS/KM"<<endl;
        break;
        case 3:cout<<"CHARGES FOR SEDAN :70RS/KM"<<endl;
        break;
        case 4:cout<<"CHARGES FOR SUV :80RS/KM"<<endl;
        break;
    }

    

               
        case 3:cout<<"WHAT WOULD YOU LIKE TO TAKE \n 1.MINI 2.MICRO 3.SEDAN 4.SUV"<<endl;
        cin>>q;
        switch(q)
    {

        case 1:cout<<"CHARGES FOR MINI :60/KM"<<endl;
        break;
        case 2:cout<<"CHARGES FOR MICRO :70/KM"<<endl;
        break;
        case 3:cout<<"CHARGES FOR SEDAN :80/KM"<<endl;



        break;
        case 4:cout<<"CHARGES FOR SUV :90/KM"<<endl;
        break;
    }

    
}
}

class online
{
    int x;
public:
    void start();
    void welcome();
    
    void arrival();
    int check();
};

class hotel
{
	int room_no;
	char name[30];
	char address[50];
	char phone[10];
	
	public:
	void main_menu();	
	void add();	
	void display();	
	void rooms();	
	void edit();	
	int check(int);	
	void modify(int);
	void delete_rec(int);	
};
void online::start()
{
    system("pause");
    system("cls");
cout<<"NOW BUILDING A PROGRAM FOR ONLINE BOOKING OF HOTEL"<<endl<<endl<<endl<<endl;
}
void online::welcome()
{
    cout<<"\t\tWELCOME TO\n\n\n";
	cout<<"***************************************************\n";
	cout<<"*   ***** *   * *****    ***** ***** ***** *****  *\n";
	cout<<"*   *   * *   * *        *     *     *   * *   *  *\n";
	cout<<"*   *   * *   * *****    ***** ***** ***** *****  *\n";
	cout<<"*   *  ** *   * *            * *     * *   *   *  *\n";
	cout<<"*   ***** ***** *****    ***** ***** *   * *   *  *\n";
	cout<<"*        *                                        *\n";
	cout<<"***************************************************"<<endl;
	cout<<"\nWelcome to Que Sera! \t"<<endl;
	cout<<"\nRanked as one of the best resorts in the world, Que Sera is situated in the beautiful escape of the Maldives. \t"<<endl;
	cout<<"\nWe welcome you to join us on this earthly paradise, and experience the chance of a lifetime. \t"<<endl;
}

//void online::getdata()
//{


 
void hotel::main_menu()
{
	int choice;
	
	while(choice!=5)
	{
	
		cout<<"\n1.ROOM BOOKING";
		cout<<"\n2.CUSTOMER RECORD";
		cout<<"\n3.ALLOTTED ROOM";
		cout<<"\n4.EDIT RECORD";
		cout<<"\n5.EXIT";
		cout<<"\nENTER YOUR CHOICE: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: add();
					break;
			case 2: display();
					break;
			case 3: rooms();
					break;
			case 4: edit();
					break;
			case 5: break;
			default:
					{
						cout<<"\n\n\t\t\tWrong choice!!!";
						cout<<"\n\t\t\tPress any key to continue!!";
						getch();
					}
		}
	}
}
 
void hotel::add()
{
	system("cls");
	int r,flag;
	ofstream fout("Record.dat",ios::app);
	
	cout<<"\n Enter Customer Detalis";
	cout<<"\n **********************";
	cout<<"\n\n Room no: ";
	cin>>r;
	flag=check(r);
	
	if(flag)
		cout<<"\n Sorry..!!!Room is already booked";
	else
	{
		room_no=r;
		cout<<" Name: ";
		cin>>name;
		cout<<" Address: ";
		cin>>address;
		cout<<" Phone No: ";
		cin>>phone;
		fout.write((char*)this,sizeof(hotel));
		cout<<"\n Room is booked!!!";
	}
	
	cout<<"\n Press any key to continue!!";
	getch();
	fout.close();
}
 
void hotel::display()
{
	system("cls");
	ifstream fin("Record.dat",ios::in);
	int r,flag;
	cout<<"\n Enter room no: ";
	cin>>r;
	
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			system("cls");
			cout<<"\n Cusromer Details";
			cout<<"\n ****************";
			cout<<"\n\n Room no: "<<room_no;
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone no: "<<phone;
			flag=1;
			break;
		}
	}
	
	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant!!";
		
	cout<<"\n\n Press any key to continue!!";
	getch();
	fin.close();
}
 
void hotel::rooms()
{
    
	system("cls");
	ifstream fin("Record.dat",ios::in);
	cout<<"\n\t\t\tList Of Rooms Allotted";
	cout<<"\n\t\t\t*********************";
	cout<<"\n\n Room No.\tName\t\tAddress\t\tPhone No.\n";
	
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		cout<<"\n\n "<<room_no<<"\t\t"<<name;
		cout<<"\t\t"<<address<<"\t\t"<<phone;
	}
	
	cout<<"\n\n\n\t\t\tPress any key to continue!!";
	getch();
	fin.close();
}
 
void hotel::edit()
{
	system("cls");
	int choice,r;
	
	cout<<"\n EDIT MENU";
	cout<<"\n *********";
	cout<<"\n\n 1.Modify Customer Record";
	cout<<"\n 2.Delete Customer Record";
	
	cout<<"\n Enter your choice: ";
	cin>>choice;
	
	system("cls");
	cout<<"\n Enter room no: ";
	cin>>r;
	
	switch(choice)
	{
		case 1: modify(r);
				break;
		case 2: delete_rec(r);
				break;
		default: cout<<"\n Wrong Choice!!";
	}
	
	cout<<"\n Press any key to continue!!!";
	getch();
}
 
int hotel::check(int r)
{
	int flag=0;
	ifstream fin("Record.dat",ios::in);
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			flag=1;
				break;
		}
	}
	
	fin.close();
	return(flag);
}
 
void hotel::modify(int r)
{
	long pos,flag=0;
	fstream file("Record.dat",ios::in|ios::out|ios::binary);
	
	while(!file.eof())
	{
		pos=file.tellg();
		file.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			cout<<"\n Enter New Details";
			cout<<"\n *****************";
			cout<<" \n Address: ";
			gets(address);
			cout<<"\n Name";
			gets(name);
			cout<<" \n Phone no: ";
			gets(phone);
			
			file.seekg(pos);
			file.write((char*)this,sizeof(hotel));
			cout<<"\n Record is modified!!";
			flag=1;
			break;
		}
	}
	
	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant!!";
		
	file.close();
}
 
void hotel::delete_rec(int r)
{
	int flag=0;
	char ch;
	ifstream fin("Record.dat",ios::in);
	ofstream fout("temp.dat",ios::out);
	
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Pone No: "<<phone;
			cout<<"\n\n Do you want to delete this record(y/n): ";
			cin>>ch;
			
			if(ch=='n')
			fout.write((char*)this,sizeof(hotel));
			
			flag=1;
		}
		else
			fout.write((char*)this,sizeof(hotel));
	}
	
	fin.close();
	fout.close();
	
	if(flag==0)
		cout<<"\n Sorry room no. not found or vacant!!";
	else
	{
		remove("Record.dat");
		rename("temp.dat","Record.dat");
	}
}
 

 



void online::arrival()
{
    int date1,month1,year1,year2,month2,date2,o;
    cout<<"ENTER DATE FOR CHECKIN:";
    cout<<"ENTER THE DATE IN THE FORMAT :DD/MM/YY"<<endl;
    cin>>date1>>month1>>year1;
    cout<<"CHECKIN:"<<date1<<"/"<<month1<<"/"<<year1<<endl;
    cout<<"ENTER DATE FOR CHECKOUT:"<<endl;
    cin>>date2>>month2>>year2;
    cout<<"CHECKOUT:"<<date2<<"/"<<month2<<"/"<<year2<<endl;
    cout<<"EXPECTED TIME TO CHECK IN : \n 1. 8.00AM TO 12.00PM \n 2. 12.00PM TO 3.00PM \n 3. 3.00PM TO 6.00PM"<<endl;
    cin>>o;
    switch(o)
    {
        case 1:cout<<"OK!! THANKYOSU FOR YOUR TIME \n WE WILL SEE THAT YOU WON'T FACE ANY PROBLEM REGARDING THIS ";
        break;
        case 2:cout<<"OK!! THANKYOU FOR YOUR TIME  \n  WE WILL SEE THAT YOU WON'T FACE ANY PROBLEM REGARDING THIS ";
         break;
        case 3:cout<<"OK!! THANKYOU FOR YOUR TIME   \n  WE WILL SEE THAT YOU WON'T FACE ANY PROBLEM REGARDING THIS ";
         break;
        case 4:cout<<"OK!! THANKYOU FOR YOUR TIME  \n  WE WILL SEE THAT YOU WON'T FACE ANY PROBLEM REGARDING THIS ";
         break;
    }
}
    bool loggedin()
{
    string username,password,un,pw;

    cout<<"ENTER USERNAME :";
    cin>>username;
    cout<<"ENTER PASSWORD:";
    cin>>password;

    ifstream read("project.dat");
    getline(read,un);
    getline(read,pw);
    if(un==username&&pw==password)
    {
        return true;

    }
    else{
        return false;
    }

}

int online::check()
{
 system("pause");
    system("cls");
 int choice;
    cout<<"1: REGISTER\n 2:LOGIN\nYOUR CHOICE:";
    cin>>choice;
    if(choice==1)
    {
        string username,password;
        cout<<"SELECT A USERNAME";
        cin>>username;
        cout<<"SELECT A PASSWORD";
        cin>>password;

        ofstream file;
        file.open("project.dat");
        file<<username<<endl<<password;
        file.close();
        check();


    }
    else if(choice==2)
    {

        bool status=loggedin();
        if(!status)
        {

            cout<<"false login!"<<endl;
            system("pause");
            return 0;
        }
        else{
            cout<<"SUCCESSFULLY LOGGED IN"<<endl;
            system("pause");
            return 1;

        }
    }
}

void rating()
{
	int r,i;
	cout<<"\n \n \n CAN WE HAVE THE RATING";
	cin>>r;
	if(r<7)
	{
	for(i=0;i<r;i++)
	{
		cout<<"*";
	}
    }
    else
    {
	cout<<"\n \n \n THIS IS NOT A VALID RATING ,PLEASE RE ENTER";
    rating();
    }
}


int main()
{
	
entry d;
d.displaydata();
d.getdataa();
food s;
s.fooddata();
travel t;
t.traveldata();
online m;
m.start();
m.welcome();
hotel h;
h.main_menu();
m.check();
m.arrival();
rating();
return 0;
}



