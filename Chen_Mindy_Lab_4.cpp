//Mindy Chen
//Lab 4
//10.1.24

#include <iostream> 
#include <string>

using namespace std;


int main()
{
    string fruit;
    double sugar;
    char answer;
    bool code = true;


    while (code == true)   

    //While the bool code is true the command inside the curly brackets will run

    {

    cout << "What is the name of the fruit and the number of grams of sugar that one cup of this fruit contains." <<endl;
    cin >> fruit >> sugar;

    if (sugar < 10)
        cout << fruit << " LOW SUGAR FRUIT" <<endl; 

    else if ((sugar >= 10) && (sugar <= 14))
        cout << fruit << " MEDIUM SUGAR FRUIT" <<endl; 

    else 
        cout << fruit << " HIGH SUGAR FRUIT" <<endl; 

    //If the variable sugar is less than 10, the fruit will be labeled as a low sugar fruit
    //If it is more than/equal to 10 and less than or equal to 14, the fruit will be labled as a medium sugar fruit
    //If it is anything other than those two, it is a high sugar fruit

    cout << "Any other fruit? (t/f)" <<endl; 
    cin >> answer;  

    //Asked the user if they have another other fruit and to input the characters y or n 

      if (answer == 'f')
      
      { code = false; }

      //If the user's input is equal to the character f then the code is false and wont repeat
      
    }   


    return 0;
}
/*What is the name of the fruit and the number of grams of sugar that one cup of this fruit contains.
grapes 23.37
grapes HIGH SUGAR FRUIT
Any other fruit? (t/f)
t
What is the name of the fruit and the number of grams of sugar that one cup of this fruit contains.
avocado .99
avocado LOW SUGAR FRUIT
Any other fruit? (t/f)
t
What is the name of the fruit and the number of grams of sugar that one cup of this fruit contains.
strawberries 7
strawberries LOW SUGAR FRUIT
Any other fruit? (t/f)
grapefruit 10.6
grapefruit MEDIUM SUGAR FRUIT
Any other fruit? (t/f)
orange 14
orange MEDIUM SUGAR FRUIT
Any other fruit? (t/f)
f
 */