/*
McKenna Cruz Peace
June 2nd, 2025
Lab 7: Switch and Case
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
cout<<"---------------------Example 1: switch-case------------"<<endl;
// switch-case to pick a day. The day is selected by number
// declare variable

int day;
string dayoff = "";
// collect the day
cout<<"Enter a day:"<<endl;
cout<<"1 for Monday:"<<endl;
cout<<"2 for Tuesday:"<<endl;
cout<<"3 for Wednesday:"<<endl;
cout<<"4 for Thursday:"<<endl;
cout<<"5 for Friday:"<<endl;
cin>>day;

// switch-case
switch (day)
{
case 1:
    dayoff = "Monday";
    break;

case 2:
    dayoff = "Tuesday";
    break;

case 3:
    dayoff = "Wednesday";
    break;

case 4: 
    dayoff = "Thursday";
    break;

case 5:
    dayoff = "Friday";
    break;
default:
    dayoff = "undefined";
    break;
}

// prompt result
cout<<"Your day off is = "<<dayoff<<endl;

cout<<"---------------------Example 2: switch-case------------"<<endl;
// use switch-case statement to pick a gender. Gender is selected with a character
// declare variables
char gender;
string selectgender = "";

// collect the gender
cout<<"Pick a gender: "<<endl;
cout<<"Enter m or M for male"<<endl;
cout<<"Enter f or F for female"<<endl;
cout<<"Enter o or O for other"<<endl;
cin >>gender;

switch (gender)
{
case 'm': case 'M':
    selectgender = "MALE";
    break;
case 'f': case 'F':
    selectgender = "FEMALE";
    break;

case 'o': case 'O':
    selectgender = "OTHER";
    break;
default:
    selectgender = "UNDEFINED";
    break;
}

// PROMPT RESULT
cout<<"Picked gender: "<<selectgender<<endl;

cout<<"-----------------Lab Exercise----------------"<<endl;

/*



Learning outcome: test student ability to use switch-case conditional statement in a C++ program. 

Class activity description: create a C++ code that will ask the user if the user wants to double the number. The user will type Y or y to select "yes" or N or to select

"no". The number is first collected by the program from the Terminal. 

The steps for the program are: 

    Ask the user to type a number. 

    Once the number is typed and entered, the program will ask the user if the user wants the number to be doubled. The user must type a character N or n for "no" or a character Y or y for "yes". Any other selections, the number will be reset to zero. 

    Depending on the selection from the previous step, if the user selected Y or y the program should use assignment operator to double the number. If the user selected N or n the program should keep the entered number. If the user selected any other characters, the number will be set to zero. 

    Prompt the result after the switch-case statement. The result should prompt as: 

    The nuumber is set to _________ 




*/
// declare variables
int number;
char response;


// collect response
cout<<"Enter a number: "<<endl;
cin>>number;

cout<<"Do you want the number doubled?"<<endl;
cout<<"Enter Y or y for Yes, or n or N for no ="<<endl;
cin>>response;

// switch-case
switch(response){

case 'n': case 'N':
    number;
    break;
case 'y': case 'Y':
    number *=2;
    break;

default:
    number = 0;
    break;
}

// prompt the result
cout<<"The number is set to: "<<number<<endl;
return 0;
}

/*

echo "# for_loops_c" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/anvpeace/for_loops_c.git
git push -u origin main

*/

