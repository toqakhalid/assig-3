#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Machine
{
private:
    string name; // Name of the drink ie: Coke
    double cost; // Cost ie: $.75
    int count; // Number of items in vending machine


public:
    // Public constructor / with default constructor
    Machine(string n, double c, int co)
    {
        name = n;
        cost = c;
        count = co;
    }

    Machine()
    {
        name = " ";
        cost = 0;
        count = 0;
    }

    static int Store_Quantity ;

    // Function prototypes
    int displayChoices();
    double buyDrink(int c); // Choice as argument so it knows what drink to process
    double inputMoney(double cost); // Choice as argument so it knows what drink to process

};

int Machine:: Store_Quantity=10;
// Code implmentation for the functions
int Machine::displayChoices()
{
    int choice;

    cout << "This is a vending machine program.\n"
         << setw(7) << "Item" << setw(22) << "Cost" << setw(20)<< "Quantity\n"
         << "1. Coke\t\t\t 60\t\t 10\n"
         << "2. Sprite\t\t 50\t\t 10\n"
         << "3. Orange Soda\t\t 35\t\t 10\n"
         << "4. Soda\t\t\t 25\t\t 10\n"
         << "5. Water\t\t 30\t\t 10\n"
         << "6. Pepsi\t\t 20\t\t 10\n"
         << "7. Fanta\t\t 10\t\t 10\n"
         << "8. Merenda\t\t 15\t\t 10\n"
         << "9. Moro\t\t\t 20\t\t 10\n"
         << "0. Quit the Program\n"
         << endl
         << "Enter choice: " << endl;

    cin >> choice;



    return choice;


}

double Machine::buyDrink(int choice)
{
    string Name;


    switch (choice)
    {
    case 1:
        Name = "Coke";
        Store_Quantity=10;
        break;

    case 2:
        Name = "Sprite";
        Store_Quantity=10;
        break;

    case 3:
        Name = "Orange Soda";
        Store_Quantity=10;
        break;

    case 4:
        Name = "Soda";
        Store_Quantity=10;
        break;

    case 5:
        Name = "Water";
        Store_Quantity=10;
        break;

    case 6:
        Name = "Pepsi";
        Store_Quantity=10;
        break;

    case 7:
        Name = "Fanta";
        Store_Quantity=10;
        break;

    case 8:
        Name = "Merenda";
        Store_Quantity=10;
        break;

    case 9:
        Name = "Moro";
        Store_Quantity=10;
        break;
    case 0:
        Name = "close program";
        cout << "You selected " << Name << endl<< "Thank you " << endl;
        return 0;

    default:
        Name = " " ;
        break;

    }

    cout << "You selected " << Name << endl << endl;
    double cost,
           moneyBack; // the cost argument returned back from inputMoney

    if (choice == 1)
    {
        cost = 60;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }
    else if(choice == 2)
    {
        cost = 50;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }
    else if(choice == 3)
    {
        cost = 35;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }
    else if(choice == 4)
    {
        cost = 25;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }
    else if(choice == 5)
    {
        cost = 30;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }
    else if(choice == 6)
    {
        cost = 20;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }
    else if(choice == 7)
    {
        cost = 10;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }
    else if(choice == 8)
    {
        cost = 15;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }
    else
    {
        cost = 20;
        Store_Quantity--;
        moneyBack = inputMoney(cost);
        return moneyBack;
    }

}


double Machine::inputMoney(double cost)
{
    double money=0 ;

    if (cost == 50)
    {
        cout << "Your item costs $" << cost << ".\n"<< endl;
        cout << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";

        }

        else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter your money"<< endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }

        return money;

    }




    else if (cost == 60)
    {
        cout << "Your item costs $" << cost << ".\n"
             << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";
        }
        else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter your money"<< endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }

        return money;
    }

    else if (cost == 35)
    {
        cout << "Your item costs $" << cost << ".\n"
             << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";
        }

        else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter your money"<<endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }

        return money;
    }

    else if (cost == 25)
    {
        cout << "Your item costs $" << cost << ".\n"
             << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";
        }

        else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter you money"<<endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }

        return money;
    }

    else if (cost == 30)
    {
        cout << "Your item costs $" << cost << ".\n"
             << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";
        }

        else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter your money"<<endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }

        return money;
    }

    else if (cost == 20)
    {
        cout << "Your item costs $" << cost << ".\n"
             << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";
        }

        else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter your money"<< endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }

        return money;
    }

    else if (cost == 10)
    {
        cout << "Your item costs $" << cost << ".\n"
             << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";
        }

else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter your mmoney"<< endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }

        return money;
    }

    else if (cost == 15)
    {
        cout << "Your item costs $" << cost << ".\n"
             << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";
        }


        else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter you money"<< endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }

 return money;
    }


    else if (cost == 20)
    {
        cout << "Your item costs $" << cost << ".\n"
             << "Enter " << cost << " or more to insert your cash.\n";
        cin >> money;

        if (money > cost)
        {
            money = money - cost;
            cout << "Your change is $" << money << ".\n";
            cout << "\nThank you for your purchase.\n";
        }

        else
        {
            cout << "Your money not enough.\n"<< endl;
            cout << "Enter 0 if you want to close program OR 1 if you will put more money.\n" << endl;
            int choice2;
            cin>> choice2;
            if (choice2 == 1)
            {
                cout<< "Enter you money"<<endl;
                cin >> money;

                if (money > cost)
                {
                    money = money - cost;
                    cout << "Your change is $" << money << ".\n";
                    cout << "\nThank you for your purchase.\n";

                }
                return money;


            }
            else if (choice2==0)
            {
                cout<< "Thank you"<< endl;
                return 0;
            }

        }
         return money;

    }
}



int main()
{
    Machine drink;
    int choice;

    choice = drink.displayChoices();

    drink.buyDrink(choice);
    drink.inputMoney(choice);

    return 0;

}
