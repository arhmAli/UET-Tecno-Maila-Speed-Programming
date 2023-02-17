// Take an input from a user that is time
//hours "say 12:23:23"
//output that time in seconds


#include<iostream>

using namespace std;

int main(){
int hours=0;
int mins=0;
int secs=0;

cout<<"Enter the hours in time";
cin>>hours;
cout<<"Enter the minutes in time";
cin>>mins;
cout<<"Enter the seconds in time";
cin>>secs;

int totalSecs=(hours*3600)+(mins*60)+secs;
cout<<"The time in seconds is "<<totalSecs;
return 0;
}
