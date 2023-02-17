//You are given to solve the problem using file handling
//Ask the user to enter the marks of the 10 students
//store these marks in different variable 
//store this in a file and whhen u read the specific file
//It should give u the average of students

// Take an input from a user that is time
//hours "say 12:23:23"
//output that time in seconds


#include<iostream>

using namespace std;

int main(){
int marks[]={};
int sum=0;

for(int i=0;i<=10;i++){
    cout<<"Enter the marks of the student"<<endl;
    cin>>marks[i];
    
}
for(int j=0;j<=10;j++){
    sum=marks[j]+marks[j+1];
}
cout<<"SUM IS"<<sum;
return 0;
}
