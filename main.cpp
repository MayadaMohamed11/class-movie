#include <iostream>

using namespace std;
class Movie
{
private :
    string Name_Movie;
    string MPAA;
    float Average_Rating;
public :
     static int counter0;
     static int counter1;
     static int counter2;
     static int counter3;
     static int counter4;
     static int counter5;
     Movie(string N_M,string M){
           Name_Movie=N_M;
           MPAA=M;

     }
     void addrating(int number){
        if(1<=number<=5){
            if(number==1){
                counter1+=1;// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II - Task 2
// Purpose: Calculate the rate for a movie ( how this movie look like between the people )
// Author:  Eng. Mayada Mohamed
// Date:    1 November 2018
// Version: 1.0

#include <iostream>

using namespace std;
class Movie
{
private :
    // member variables
    string Name_Movie;
    string MPAA;
    float Average_Rating;
public :
     static int counter0;
     static int counter1;
     static int counter2;
     static int counter3;
     static int counter4;
     static int counter5;
     // parametrized constructor
     Movie(string N_M,string M){
           Name_Movie=N_M;
           MPAA=M;

     }
     // Purpose : this function adding rate
     void addrating(int number){
        if(1<=number<=5){
            if(number==1){
                counter1+=1;
            }
            if(number==2){
                counter2+=1;
            }
            if(number==3){
                counter3+=1;
            }
            if(number==4){
                counter4+=1;
            }
            if(number==5){
                counter5+=1;
            }
          counter0+=1;
        }
        else
        cout<<"not valid"<<endl;
     }
     // purpose : this function to add number of people want rate
     void fun(){
     int numofrate1;
       cout<<"enter number of people want to rate:";
    cin>>numofrate1;
    int num1;
    for(int i=0;i<numofrate1;i++){
        cout<<"enter number between 1 to 5"<<endl;
        cout<<"1 (Terrible)"<<endl;
        cout<<"2 (Bad)"<<endl;
        cout<<"3 (OK)"<<endl;
        cout<<"4 (Good)"<<endl;
        cout<<"5 (Great)"<<endl;
        cin>>num1;
        addrating(num1);
    }
     }
     // Purpose : this function to calculate the average rate for the movie
     float calc_average_rating(){
        Average_Rating=(1*counter1+2*counter2+3*counter3+4*counter4+5*counter5)/(counter0*1.0);
           counter0=0;
           counter1=0;
           counter2=0;
           counter3=0;
           counter4=0;
           counter5=0;
        return Average_Rating;
     }
     // Purpose ; this function to print name of the movie and the average rate for it
     void printinfo(){
        fun();
        cout<<Name_Movie<<endl;
        cout<<MPAA<<endl;
        cout<<calc_average_rating()<<endl;

     }
};
int Movie::counter0=0;
int Movie::counter1=0;
int Movie::counter2=0;
int Movie::counter3=0;
int Movie::counter4=0;
int Movie::counter5=0;

int main()
{
    Movie M1("The Nun","PG");
    Movie M2("Conjuring","PG");
    M1.printinfo();
    M2.printinfo();
    return 0;
}

            }
            if(number==2){
                counter2+=1;
            }
            if(number==3){
                counter3+=1;
            }
            if(number==4){
                counter4+=1;
            }
            if(number==5){
                counter5+=1;
            }
          counter0+=1;
        }
        else
        cout<<"not valid"<<endl;
     }
     void fun(){
     int numofrate1;
       cout<<"enter number of people want to rate:";
    cin>>numofrate1;
    int num1;
    for(int i=0;i<numofrate1;i++){
        cout<<"enter number between 1 to 5"<<endl;
        cout<<"1 (Terrible)"<<endl;
        cout<<"2 (Bad)"<<endl;
        cout<<"3 (OK)"<<endl;
        cout<<"4 (Good)"<<endl;
        cout<<"5 (Great)"<<endl;
        cin>>num1;
        addrating(num1);
    }
     }
     float calc_average_rating(){
        Average_Rating=(1*counter1+2*counter2+3*counter3+4*counter4+5*counter5)/(counter0*1.0);
           counter0=0;
           counter1=0;
           counter2=0;
           counter3=0;
           counter4=0;
           counter5=0;
        return Average_Rating;
     }
     void printinfo(){
        fun();
        cout<<Name_Movie<<endl;
        cout<<MPAA<<endl;
        cout<<calc_average_rating()<<endl;

     }
};
int Movie::counter0=0;
int Movie::counter1=0;
int Movie::counter2=0;
int Movie::counter3=0;
int Movie::counter4=0;
int Movie::counter5=0;

int main()
{
    Movie M1("The Nun","PG");
    Movie M2("Conjuring","PG");
    M1.printinfo();
    M2.printinfo();
    return 0;
}
