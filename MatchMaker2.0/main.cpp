#include <iostream>

using namespace std;

int main()
{
    cout<<"Welcome to MatchMaker";
    cout<<"Please answers the following questions to find a partner";
      int age;
      cout<<"What is your age?";
      cin>>age;
    char gender;
    cout<<"Enter gender (M/F)";
    cin>>gender;
    bool likes_cooking;
       cout<<"Do you like cooking? (1 for Yes, 0 for No)";
       cin>>likes_cooking;
   bool likes_adventures;
     cout<<"Do you like adventures ?(1 for Yes,0 for No)";
     bool romantic;
     cout<<"Are you romantic ?(1 for yes ,0 for no)";
     cin>>romantic;
bool humorous;
  cout<<"are you humorous? (1 for yes, 0 for No)";
  cin>>humorous;
if (age>=18 && age<30){
     if (gender=='F' && likes_cooking && romantic){
        cout<<"You might like someone who likes cooking and who is romantic";
    }
    else if(gender=='M' && likes_adventures && humorous && romantic){
        cout<<"You might like someone who like adventures who is romantic and humorous";
    }
    else {
        cout<<"Sorry,we cannot find a perfect partner for you.";
    }
}

return 0;
}

