#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class entry
{
char ch[20];
public:

void displaydata();
void getdata();
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
                cout<<"WHAT TYPE OF ROOM DO YOU WANT \n";
                cout<<"1. LUXURY \n 2. SWEET \n 3. COTTAGE \n";
                cin>>t;
                switch(t)
                {
                     case 1:  int pl,b,s;
                              pl= 8000;
                              cout<<"NUMBER OF BEDS \n";
                              cin>>b;
                              cout<<"MAY WE KNOW THE EXACT STAY OF YOURS ";
                              cin>>s;
                              if(s<5)
                              {
                                  cout<<"YOUR BILL FOR THE STAY WILL BE - ";
                                  cout<<pl*s;
                              }
                              else
                                cout<<"DOESN'T MATCH WITH THE EARLIER DETAIL";
                              break;



                     case 2:  int ps;
                              ps= 5000;
                              cout<<"NUMBER OF BEDS\n";
                               cin>>b;
                              cout<<"MAY WE KNOW THE EXACT STAY OF YOURS";
                              cin>>s;
                              if(s<10)
                              {
                                  cout<<"YOUR BILL FOR THE STAY WILL BE - ";
                                  cout<<ps*s;
                              }
                              else
                                cout<<"DOESN'T MATCH WITH THE EARLIER DETAIL";
                              break;



                     case 3:  int pc;
                              pc= 3000;
                              cout<<"NUMBER OF BEDS \n";
                               cin>>b;
                              cout<<"MAY WE KNOW THE EXACT STAY OF YOURS";
                              cin>>s;
                              if(s>10)
                              {
                                  cout<<"YOUR BILL FOR THE STAY WILL BE - ";
                                  cout<<pc*s;
                              }
                              else
                                cout<<"DOESN'T MATCH WITH THE EARLIER DETAIL";
                              break;


                }
            }



void entry::getdata()
{
    int x;
    cout<<"how may i help you \n 1. STAY \n 2. FOOD \n 3. OTHER"<<endl;
    cin>>x;

    switch(x)
    {
       case 1:  int s,d,t,i;
        cout<<"HOW LONG DO YOU HAVE YOUR STAY \n"<<endl;
                cout<<"1.LESS THAN FIVE DAYS (and the exact duration) \n 2. LESS THAN TEN DAYS (and the exact duration)\n 3. MORE THAN TEN DAYS (and the exact duration)";
                cin>>s;
                switch(s)
                {
                    case 1:room();
                     break;
                    case 2:room();
                    break;
                    case 3:room();
                    break;
                }
    }

}
class food
{
    int f;
public:
    void fooddata();
    void nonveg();
    void veg();

};
void food::nonveg()
{
    int k;
    cout<<" NON-VEG MENU \n 1.CHICKEN MASALA 2.CHICKEN WINGS 3.CHICKEN POPCORN 4.CHICKEN KABABS \n";
    cin>>k;
    switch(k)
    {
    case 1:cout<<"YOUR TOTAL BILL IS :560"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM";
    break;
    case 2:cout<<"YOUR TOTAL BILL IS :800"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM";
    break;
    case 3:cout<<"YOUR TOTAL BILL IS :600"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM";
    break;
    case 4:cout<<"YOUR TOTAL BILL IS :900"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM";
    break;
    }
}
void food::veg()
{
    int v;
    cout<<" VEG MENU \n 1.MANCHURIAN 2.PANEER MASALA 3.MASALA DOSA 4.MOMOS \n";
    cin>>v;
    switch(v)
    {
    case 1:cout<<"YOUR TOTAL BILL IS:344"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM";
    break;
    case 2:cout<<"YOUR TOTAL BILL IS:400"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM";
    break;
    case 3:cout<<"YOUR TOTAL BILL IS:600"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM";
    break;
    case 4:cout<<"YOUR TOTAL BILL IS:200"<<endl;
    cout<<"ANYTHING ELSE SIR/MA'AM";
    break;
    }
}


void food::fooddata()
{
    cout<<"WHAT WOULD YOU LIKE TO PREFER 1. VEG 2. NON-VEG";
    cin>>f;
    switch(f)
           {
             case 1:veg();
             break;
             case 2:nonveg();
             break;
           }
}





int main()
{
entry d;
d.displaydata();
d.getdata();
food s;
s.fooddata();

return 0;

}


