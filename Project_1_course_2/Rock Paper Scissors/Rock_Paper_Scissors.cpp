#include <ctime>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;
enum Suggested{
    rock = 1,paper = 2 , scissors = 3
};
enum GameResult {
    WINNER = 1,
    TIED = 2,
    TOSS = 3
};
struct counter{
    short playerWin  = 0;
    short computerWin  = 0;
    short draw   = 0;

};
short readuser()
{
    short number;
    do
    {
        cout << "How many Rounds (1 to 10): ";
        cin >> number;

    } while(number < 1 || number > 10);

    return number;
}
Suggested numberread()
{
    short choice;
    do{
    cout << "Your choice: [1]:rock , [2]:paper , [3]:scissors ? ";
    cin>>choice;
    }while(choice < 1 || choice > 3);
    return (Suggested)choice;
}
Suggested roundnmber()
{
    return (Suggested)(rand() % 3 + 1);
}
GameResult check_winner(Suggested computer, Suggested user)
{
    if(user == paper && computer == rock 
        || user == rock && computer ==  scissors 
        || user == scissors && computer == paper)
        {
            return GameResult::WINNER;
        }
    else if(computer == user)
    {
        return  GameResult::TIED;
    }
        return   GameResult::TOSS;
}
string getChoiceName(Suggested user)
{
    switch(user)
    {
        case rock:
            return "rock";
        case paper:
            return "paper";
        case scissors:
            return "scissors";
        default:
            return "unknown";  
    }
}
void counterwiandtiandto(counter &cou ,Suggested computer, Suggested user)
{
    short result = check_winner(computer,user);
    if(result == GameResult::WINNER)
    {
        cou.playerWin++;
    }
    else if(result == GameResult::TIED)
    {
        cou.draw++;
    }
    else{
        cou.computerWin ++; 
      
    }
}
void colorscreen(GameResult  result)
{
    if(result == GameResult::WINNER)
    {
        system("color 0A");    
    }
    else if(result == GameResult::TIED)
    {
         system("color 0E");
    }
    else{
        system("color 0C");
    }
}
void reseltscrenn(counter &score , int round){
    for(int i = 0 ; i < round;i++)
    {
    Suggested user = numberread();
    Suggested computer = roundnmber();
    GameResult result = check_winner(computer, user);
    cout<<"\n_____________________Round["<<i + 1<<"]_____________________\n";
    cout<<"Player Choice :"<<getChoiceName(user)<<endl;
    cout<<"computer Choice :"<<getChoiceName(computer)<<endl;
    if (result == WINNER)
        cout << "Winner: Player\n";
    else if (result == TIED)
        cout << "Winner: Draw\n";        
    else
    cout << "Winner: Computer\n";
    counterwiandtiandto(score, computer, user);
    colorscreen(result);
    cout<<"\n________________________________________________________\n";
    }
}
void printTableOfResult(int number, counter score)
{
    cout<<"\t\t\t________________________________________________________\n";
    cout<<"\t\t\t\t\t+++ G a m e  O v e r +++ \n";
    cout<<"\n \t\t\t________________________________________________________\n";
    cout<<"\n\t\t\t__________________________[Game Results]____________________\n";
    cout<<"\t\t       Game Rounds        : "<<number<<endl;
    cout<<"\t\t       Player win times   :  "<<score.playerWin <<endl;
    cout<<"\t\t       Computer win times : "<< score.computerWin<<endl;
    cout<<"\t\t       Draw times         : "<<score.draw<<endl;
     if (score.playerWin > score.computerWin)
        cout << "\t\t\tPlayer\n";
    else if (score.computerWin > score.playerWin)
        cout << "\t\t\tComputer\n";
    else
        cout << "\t\t\tDraw\n";

    cout<<"\n\t\t\t________________________________________________________\n";
}

bool askuseragin()
{
    char again;
    cout<<"Do you want to play again?(y/n)";
    cin>>again;
    return (again == 'y' || again == 'Y');
}
void startgame()
{
    counter score;
    int number = readuser();
    reseltscrenn(score, number);
    printTableOfResult(number, score);
}
int main()
{
    srand((unsigned)time(NULL));
    do{
        startgame();
    }while(askuseragin());    
    return 0;
}