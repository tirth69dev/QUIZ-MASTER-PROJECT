#include <iostream>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <algorithm>
#include <string>
#include <limits>   
using namespace std;

string name;
vector<pair<string,int>> highScores;

int main(){
    while(true){
    cout << "============================" << endl;
    cout << "============================" << endl;
    cout << "       QUIZ MASTER    " << endl;
    cout << "============================" << endl;
    cout << "============================" << endl;

    cout << "0. Enter Your Name" << endl;
    cout << "1. Choose Category" << endl;
    cout << "2. View High Score" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
    cout << endl;
    cout << "Enter Your Choice:";
    
    

    int choice;
    cin >> choice;

    if(choice == 0){
        string name;
        cout << "Enter Your Name:";
        cin >> name;
        cout << "WELCOME!" << name << endl;

    }

    else if(choice == 1){
        cout << "====================" << endl;
        cout << "====================" << endl;
        cout << "     CATEGORIES     " << endl;
        cout << "====================" << endl;
        cout << "====================" << endl;
        cout << endl;
        cout << endl;
        cout << "1. C++" << endl;
        cout << "2. General Knowledge" << endl;
        cout << "3. Football" << endl;
        cout << "4. How Well Do You Know Me?" << endl;
        cout << endl;
        cout << "Enter Your Choice:" << endl;
        int choice;
        cin >> choice;

        if(choice == 1){
            int score = 0;
            cout << "C++ Quiz Selected" << endl;
            cout << endl;
            cout << endl;
            cout << "Q1) Which STL container stores unique elements in sorted order?" << endl;
            cout << endl;
            cout << "1) set " << endl;
            cout << "2) map " << endl;
            cout << "3) pair " << endl;
            cout << "4) vector " << endl;
            cout << endl;
            cout << endl;
            int answer1;
            cout << "Enter Your Choice" << endl;
            cin >> answer1;
            if(answer1 == 1){
                cout << "CORRECT ANSWER!" << endl;
                score++;
            }
            else if(answer1 == 2){
                cout << "INCORRECT ANSWER!" << endl;
            }
            else if(answer1 == 3){
                cout << "INCORRECT ANSWER!" << endl;
            }
            else if(answer1 == 4){
                cout << "INCORRECT ANSWER!" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q2) What does push_back() do when used with a vector?" << endl;
            cout << endl;
            cout << "1) Removes the first element" << endl;
            cout << "2) Adds an element to the end" << endl;
            cout << "3) Sorts the vector" << endl;
            cout << "4) Removes The Last Element" << endl;
            int answer2;
            cout << "Enter Your Answer" << endl;
            cin >> answer2;
            if(answer2 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer2 == 2){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer2 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer2 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q3) What does v.size() return for a vector v?" << endl;
            cout << endl;
            cout << "1) The last index" << endl;
            cout << "2) The Memory size in bytes" << endl;
            cout << "3) The Number of elements" << endl;
            cout << "4) The capacity of vector" << endl;
            int answer3;
            cout << "Enter Your Answer" << endl;
            cin >> answer3;
            if(answer3 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer3 == 2){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer3 == 3){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer3 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q4) What is the default behavior of priority_queue<int> in C++?" << endl;
            cout << endl;
            cout << "1) Min-heap" << endl;
            cout << "2) Max-heap" << endl;
            cout << "3) FIFO Queue" << endl;
            cout << "4) Random Order" << endl;
            int answer4;
            cout << "Enter Your Answer" << endl;
            cin >> answer4;
            if(answer4 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer4 == 2){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer4 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer4 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q5) vector<int> v = {10, 20, 30, 40}; reverse(v.begin(), v.end());" << endl;
            cout << "What will v contain afterward?" << endl;
            cout << endl;
            cout << "1) 10 20 30 40" << endl;
            cout << "2) 40 30 20 10" << endl;
            cout << "3) 20 10 40 30" << endl;
            cout << "4) 30 40 10 20" << endl;
            int answer5;
            cout << "Enter Your Answer" << endl;
            cin >> answer5;
            if(answer5 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer5 == 2){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer5 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer5 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << "============================" << endl;
            cout << "        QUIZ OVER" << endl;
            cout << "============================" << endl;

            cout << "Player: " << name << endl;
            cout << "Your Score: " << score << "/5" << endl;
            cout << "Thanks For Playing <3" << endl;

            highScores.push_back({name,score});



        }
        else if(choice == 2){
            int score = 0;
            cout << "General Knowledge Quiz Selected" << endl;
            cout << endl;
            cout << endl;
            cout << "Q1. Which is the largest ocean on Earth?" << endl;
            cout << "1) Atlantic Ocean" << endl;
            cout << "2) Indian Ocean" << endl;
            cout << "3) Pacific Ocean" << endl;
            cout << "4) Arctic Ocean" << endl;
            cout << endl;
            cout << endl;
            int answer21;
            cout << "Enter Your Answer" << endl;
            cin >> answer21;
            cout << endl;
            if(answer21 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer21 == 2){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer21 == 3){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer21 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q2. What is the chemical symbol for gold?" << endl;
            cout << "1) Ag" << endl;
            cout << "2) Au" << endl;
            cout << "3) Fe" << endl;
            cout << "4) Gl" << endl;
            cout << endl;
            cout << endl;
            int answer22;
            cout << "Enter Your Answer" << endl;
            cin >> answer22;
            if(answer22 == 1){
                cout << endl;
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer22 == 2){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer22 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer22 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q3) Which element has the highest melting point of all elements?" << endl;
            cout << endl;
            cout << "1) Carbon " << endl;
            cout << "2) Tungsten" << endl;
            cout << "3) Osmium" << endl;
            cout << "4) Rhenium" << endl;
            cout << endl;
            int answer23;
            cout << "Enter Your Answer" << endl;
            cin >> answer23;
            if(answer23 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer23 == 2){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer23 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer23 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q4) The Antikythera mechanism, discovered in a shipwreck, is primarily associated with which ancient civilization?" << endl;
            cout << endl;
            cout << "1) Roman" << endl;
            cout << "2) Egyptian" << endl;
            cout << "3) Greek" << endl;
            cout << "4) Persian" << endl;
            cout << endl;
            cout << endl;
            int answer24;
            cout << "Enter Your Answer" << endl;
            cin >> answer24;
            if(answer24 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer24 == 2){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer24 == 3){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer24 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q5) Which physicist is credited with discovering the neutron in 1932?" << endl;
            cout << endl;
            cout << endl;
            cout << "1) Ernest Rutherford" << endl;
            cout << "2) J.J Thomson" << endl;
            cout << "3) James Chadwick" << endl;
            cout << "4) Neils Bohr" << endl;
            cout << endl;
            cout << endl;
            int answer25;
            cout << "Enter Your Answer" << endl;
            cin >> answer25;
            if(answer25 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer25 == 2){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer25 == 3){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer25 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << "============================" << endl;
            cout << "        QUIZ OVER" << endl;
            cout << "============================" << endl;

            cout << "Player: " << name << endl;
            cout << "Your Score: " << score << "/5" << endl;
            cout << "Thanks for Playing <3" << endl;

            highScores.push_back({name,score});



            
        }
        else if(choice == 3){
            cout << "Football Quiz Selected" << endl;
            int score = 0;
            cout << endl;
            cout << endl;
            cout << "Q1. Which country won the 2022 FIFA World Cup?" << endl;
            cout << endl;
            cout << "1) France" << endl;
            cout << "2) Germany" << endl;
            cout << "3) Argentina" << endl;
            cout << "4) Spain" << endl;
            cout << endl;
            int answer31;
            cout << "Enter Your Answer" << endl;
            cin >> answer31;
            cout << endl;
            if(answer31 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer31 == 2){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer31 == 3){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer31 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q2) Who has won the most Ballon d'Or awards?" << endl;
            cout << endl;
            cout << "1) Cristiano Ronaldo" << endl;
            cout << "2) Lionel Messi " << endl;
            cout << "3) Neymar" << endl;
            cout << "4) Zidane" << endl;
            cout << endl;
            int answer32;
            cout << "Enter Your Answer" << endl;
            cin >> answer32;
            if(answer32 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer32 == 2){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer32 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer32 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q3) Which player scored a hat-trick in the 2022 World Cup final?" << endl;
            cout << endl;
            cout << "1) Kylian Mbappe" << endl;
            cout << "2) Lionel Messi" << endl;
            cout << "3) Osumane Dembele" << endl;
            cout << "4) Angel Di Maria" << endl;
            cout << endl;
            cout << endl;
            int answer33;
            cout << "Enter Your Answer" << endl;
            cin >> answer33;
            if(answer33 == 1){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer33 == 2){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer33 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer33 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q4) Who won the Golden Boot at the 2018 FIFA World Cup?" << endl;
            cout << endl;
            cout << "1) Romelu Lukaku" << endl;
            cout << "2) Kylian Mbappe" << endl;
            cout << "3) Antoine Griezmaan" << endl;
            cout << "4) Harry Kane" << endl;
            cout << endl;
            cout << endl;
            int answer34;
            cout << "Enter Your Answer:" << endl;
            cin >> answer34;
            if(answer34 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer34 == 2){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer34 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer34 == 4){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q5) Which club did Erling Haaland play for immediately before joining Manchester City?" << endl;
            cout << endl;
            cout << "1) RB Leipzig" << endl;
            cout << "2) Borussia Dortmund" << endl;
            cout << "3) Salzburg" << endl;
            cout << "4) Bayer Leverkusen" << endl;
            cout << endl;
            int answer35;
            cout << "Enter Your Answer:" << endl;
            cin >> answer35;
            if(answer35 == 1){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer35 == 2){
                cout << "CORRECT ANSWER" << endl;
                score++;
            }
            else if(answer35 == 3){
                cout << "INCORRECT ANSWER" << endl;
            }
            else if(answer35 == 4){
                cout << "INCORRECT ANSWER" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "============================" << endl;
            cout << "        QUIZ OVER" << endl;
            cout << "============================" << endl;

            cout << "Player: " << name << endl;
            cout << "Your Score: " << score << "/5" << endl;
            cout << "Thanks for Playing <3" << endl;

            highScores.push_back({name,score});

        }
        else if(choice == 4){
            int score = 0;
            cout << "How Well Do You Know Me?" << endl;
            cout << endl;
            cout << endl;
            cout << "1) Which Genre is My Favourite?" << endl;
            cout << endl;
            cout << "1) Detective/Mystery" << endl;
            cout << "2) Thriller/Crime" << endl;
            cout << "3) Horror" << endl;
            cout << "4) Romance" << endl;
            cout << endl;
            cout << "Enter Your Answer:" << endl;
            int answer41;
            cin >> answer41;
            cout << endl;
            if(answer41 == 1){
                cout << "CORRECT ANSWER! <3 " << endl;
                score++;
            }
            else if(answer41 == 2){
                cout << "INCORRECT ANSWER! :(" << endl;
            }
            else if(answer41 == 3){
                cout << "INCORRECT ANSWER! :(" << endl;
            }
            else if(answer41 == 4){
                cout << "INCORRECT ANSWER! :(" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q2) When Is My Birthday?" << endl;
            cout << endl;
            cout << "1) 5 May 2009" << endl;
            cout << "2) 8 December 2009" << endl;
            cout << "3) 10 January 2009" << endl;
            cout << "4) 8 November 2009" << endl;
            cout << endl;
            cout << endl;
            cout << "Enter Your Answer:" << endl;
            cout << endl;
            int answer42;
            cin >> answer42;
            cout << endl;
            if(answer42 == 1){
                cout << "INCORRECT ANSWER! :<" << endl;
            }
            else if(answer42 == 2){
                cout << "INCORRECT ANSWER! :<" << endl;
            }
            else if(answer42 == 3){
                cout << "CORRECT ANSWER <3" << endl;
                score++;
            }
            else if(answer42 == 4){
                cout << "INCORRECT ANSWER :<" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q3) Which Describes Me Better" << endl;
            cout << endl;
            cout << "1) Plans Everything" << endl;
            cout << "2) Goes With The Flow" << endl;
            cout << "3) Overthinks Decision" << endl;
            cout << "4) Makes the decision at the last second" << endl;
            cout << endl;
            cout << endl;
            cout << "Enter Your Answer:" << endl;
            int answer43;
            cin >> answer43;
            if(answer43 == 1){
                cout << "CORRECT ANSWER! <3" << endl;
                score++;
            }
            else if(answer43 == 2){
                cout << "INCORRECT ANSWER :<" <<  endl;
            }
            else if(answer43 == 3){
                cout << "INCORRECT ANSWER :<" << endl;
            }
            else if(answer43 == 4){
                cout << "INCORRECT ANSWER :<" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q4) What kind of person would I probably become in a zombie apocalypse?" << endl;
            cout << endl;
            cout << "1) Leader" << endl;
            cout << "2) Strategist" << endl;
            cout << "3) Lone Survivor" << endl;
            cout << "4) Dies first trying to do something dumb" << endl;
            cout << endl;
            cout << "Enter Your Answer:" << endl;
            int answer44;
            cin >> answer44;
            if(answer44 == 1){
                cout << "INCORRECT ANSWER! :<" << endl;
            }
            else if(answer44 == 2){
                cout << "CORRECT  ANSWER <3" << endl;
                score++;
            }
            else if(answer44 == 3){
                cout << "INCORRECT ANSWER! :<" << endl;
            }
            else if(answer44 == 4){
                cout << "INCORRECT ANSWER :<" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "Q5) When I make an important decision, which approach describes me best?" << endl;
            cout << endl;
            cout << "1) Practical -- What makes the most sense"<< endl;
            cout << "2) Emotional -- What feels right" << endl;
            cout << "3) Intuitive -- Something tells me this is right" << endl;
            cout << "4) Balanced  -- What makes sense, what feels right, and what happens long-term" << endl;
            cout << endl;
            cout << endl;
            cout << "Enter Your Answer:" << endl;
            int answer45;
            cin >> answer45;
            if(answer45 == 1){
                cout << "INCORRECT ANSWER! :<" << endl;
            }
            else if(answer45 == 2){
                cout << "CORRECT  ANSWER <3" << endl;
                score++;
            }
            else if(answer45 == 3){
                cout << "INCORRECT ANSWER! :<" << endl;
            }
            else if(answer45 == 4){
                cout << "INCORRECT ANSWER :<" << endl;
            }
            else{
                cout << "INVALID INPUT" << endl;
            }
            cout << endl;
            cout << endl;
            cout << "============================" << endl;
            cout << "        QUIZ OVER" << endl;
            cout << "============================" << endl;

            cout << "Player: " << name << endl;
            cout << "Your Score: " << score << "/5" << endl;
            cout << "Thanks for Playing <3" << endl;

            highScores.push_back({name,score});

        }
        else{
            cout << "!!!INVALID CATEGORY!!!" << endl;
        }
    }
    
    else if(choice == 2){
        cout << "===========" << endl;
        cout << "===========" << endl;
        cout << "High Scores" << endl;
        cout << "===========" << endl;
        cout << "===========" << endl;

        for(auto x : highScores){
            cout << "Player" << name << x.first << " : " << x.second << "/5" << endl;
        }

    
    }
    
    else if(choice == 3){
        cout << "Thanks For Playing" << endl;
        break;

    }
    else{
        cout << "!!!INVALID INPUT!!!" << endl;
    }
}}




