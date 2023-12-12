#include <iostream>

using namespace std;

int main()
{
    int age = 18;
    int points = 400;
    int Rank = 3;
    int Degree = 15;
    int Num_1 = 20;

    if (age >= 18)
    {
        cout << "Welcome Your Age Is OK.\n";
        if (points > 200)
        {
            cout << "You are VIP.\n";
            if (Rank <= 5)
            {
                cout << "You are VIP One.\n";
                if (Degree >= 15)
                {
                    cout << "You are VIP One One.\n";
                    if (Num_1 >= 20)
                    {
                        cout << "You are VIP One One 1.\n";
                    }
                    
                }
                
            }
        
            

        }
        
    }
   
    
    return 0;
    
}