//
//  main.cpp
//  nidhi
//
//  Created by Kumar Divya Rajat on 12/03/15.
//  Copyright (c) 2015 Kumar Divya Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class easy
{

    char quest[100][4][1];//why 3d array? The first [100] will store the question. The next 4 will store the answers and the next [1] will store the correct answer index. The correct answer index will be used to check whether the answer the user gave is correct or not.
    
private:// The input part will be private.
    void input()
    {
        cout<<"Enter the question to be inserted\n";
        
    }
    
    
};

class medium
{
public:
    char quest[100][4][1];
    
};

class difficult
{
public:
    char quest[100][4][1];
    
};

class a:public easy,public medium, public difficult
{
  
    
    
};

class  question
{
    int score;
    int ques_count;
    
};

class stat
{
    static int count;
    
    
};


int main()
{
    int choice;
    cout<<"QUIZ COMPETITION\n";
    cout<<"Total Questions-\t=15\n";
    cout<<"For each correct response, 1 mark will be awarded.\n";

    easy e[15];
   

     while(1)
     {
         cout<<"ENTER YOUR CHOICE\n";
         cout<<"1. Take the quiz  2. Highest Scores   3. Change questions\n";
         cin>>choice;
         switch(choice)
         {
             case 1: //quiz();//call the easy part//should return the score after every question
                     //
                     //if(score>=60%)
                     //call the medium part
                 
                     // if(score>=85%)
                     // call the difficult part
                     // at the end of quest_count=15, display the score and ask for the username to save the scores.
                 break;
                 
             case 2: //Read the highest score either from the file or the database and display it to the user.
                     //
                 break;
                 
             case 3: //This is the superuser/admin mode. Accessing this will require username and password.           Only the users who enter correct username and password can enter this section.
                     // Options include entering the questions, moving question from one group to the other, deleting quetsions, deleting scores, deleting users.
                 break;
                 
             default: exit(0);
                 
        }
     }

}
