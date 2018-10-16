#include <iostream>
#include<fstream>
using namespace std;

struct student{
string id;
string name;
int age;
char grade;
string gender;
int score;

};

int main()
{
ofstream benz;
benz.open("mercedes.txt");

double avgAge,avgScore;

benz<<"id"<<"name"<<"age"<<"gender"<<"grade"<<"score"<<endl;

student sample[5];

for(int i=0;i<5;i++)
{
cout<<"enter student id  ";
cin>>sample[i].id;

cout<<"enter student name  ";
cin>>sample[i].name;

cout<<"enter student age  ";
cin>>sample[i].age;

cout<<"enter student score ";
cin>>sample[i].score;

avgAge += sample[i].age;
avgScore += sample[i].score;


cout<<endl<<endl;

if(sample[i].score>=80 && sample[i].score<=100)
{
 sample[i].grade='A' ;
}
else if(sample[i].score>=70 && sample[i].score<80)
{
 sample[i].grade='B';
}
else if(sample[i].score>=60 && sample[i].score<70)
{
 sample[i].grade='C';
}
else if(sample[i].score>=50 && sample[i].score<60)
{
sample[i].grade='D';
}
else if(sample[i].score>=40 && sample[i].score<50)
{
sample[i].grade='E';
}
else if(sample[i].score>=0 && sample[i].score<40)
{
sample [i].grade='F';
}

benz<<i+1<<"."<<sample[i].id<<" "<<sample[i].name<<" "<<sample[i].gender<<" "<<sample[i].age<<" "<<sample[i].score<<endl;

}

benz<<"average age= "<<avgAge/5<<endl;
benz<<"average score= "<<avgScore/5<<endl;



   return  0;
}
