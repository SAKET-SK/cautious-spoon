#include <iostream>
using namespace std;

class Player
{

    private:

    int health = 100;
    int xp = 0;
    int level = 1;
    int attackDamage = 20;
    int additionalDamage = 0;
    int healingCapacity;
  

    void generateRandomAdditionalDamage()
    {
      int additionalDamageMin = 5 ;
      int additionalDamageMax = 15;
     
      srand(time(0));
       additionalDamage = (rand() % (additionalDamageMax - additionalDamageMin + 1) + additionalDamageMin);
    }

    void displayPlayerInfo()
    {
      cout<<"\nHi my name is Letho! We need to save princess and get her back"<<endl;
      cout<<"Here are some stats that might be useful for you going ahead"<<endl;
      cout<<"\nLetho's Health: "<<health;
      cout<<"\n__________________________________\n";
      cout<<"Letho's XP: "<<xp;
      cout<<"\n__________________________________\n";
      cout<<"Letho's Level: "<<level;
      cout<<"\n__________________________________\n";
      cout<<"Letho's Attack Damage: "<<attackDamage;
      cout<<"\n__________________________________\n";
      cout<<"Letho's Addtional Damage: 5 to 15";
      cout<<"\n__________________________________\n";
      cout<<"Letho's Healing Capacity: 10 to 20";
    }

    public:
    Player()
    {
      displayPlayerInfo();
    }

    int GetHealth()
    {
      return health;
    }

    int GiveDamage()
    {
      generateRandomAdditionalDamage();
      int totalDamage = attackDamage + additionalDamage; 
       
      cout<<"\nLetho Delt "<<attackDamage<<" Base Damage and "<<additionalDamage<<" additional Damage to Hollow Knight!"<<endl;
      cout<<"Total Damage Delt: "<<totalDamage;

      return totalDamage;
    }
    
    void TakeDamage(int damageRecieved)
    {
      health = health - damageRecieved;
      
      if(health > 0)
      {
      cout<<"\nLetho's Health After recieving Damage: "<<health<<endl;
      }
      else
      {
        cout<<"\nHollow Knight landed final blow to Letho!"<<endl;
        cout<<"Damage Given: "<<damageRecieved<<endl;
        cout<<"Letho's Health After recieving Damage: 00"<<endl;
        cout<<"Our great warrior sacrificed himself for the kingdom"<<endl;
        cout<<"Game Over.....:( \nThanks for playing Letho!";
      }
    }

    void Heal()
    {
      int minHealCapacity = 10;
      int maxHealCapacity = 20; 

      srand(time(0));
      int randomHeal = (rand()% (maxHealCapacity - minHealCapacity + 1 ) + minHealCapacity);

      health = health + randomHeal;

     cout<<"Letho Healed by:"<<randomHeal<<endl;
     cout<<"Health after healing:"<<health<<endl;

    }
};


void gameStroy()
{
    system("clear");
    cout<<"\n__________________________________\n";
    cout<<"| Letho : A true Warrior |";
    cout<<"\n__________________________________\n";
    cout<<"\nOnce upon a time, there was a kingdom full of happiness. The king named Garelt had a beautiful princess named Barbara."<<endl;
    cout<<"\n__________________________________\n";
    cout<<"\nUnfortunately, on one evil day, the Hollow Knight kidnapped Barbara.\nNow the entire kingdom is at stake. Hollow Knight is a ruler of the dark world."; 
    cout<<"\n__________________________________\n";
}

int main() 
{
   gameStroy();
  
 

  char startGame;
  do
  {
      cout<<"\n\nPress S to start the game and any other key to exit."<<endl;
      cin>>startGame;

      if(startGame == 's' || startGame == 'S')
      {
       
        system("clear");
        // Task: Create Object of Player Class
        Player player;
        
        // Task: Create Enemy Class just like Player
        // Task: Create Object of Enemy Class
      }
      else
      {
       cout<<"Thanks for playing Letho!"<<endl;
      }
  } while(startGame == 's' || startGame == 'S');
}