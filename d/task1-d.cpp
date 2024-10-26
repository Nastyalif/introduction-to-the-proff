/*ЛР5
Розробіть програму для управління банківськими рахунками. Програма повинна включати такі можливості:

1) Створення рахунку: Реалізуйте функцію для створення банківського рахунку з початковим балансом та 
ім'ям власника. Баланс та ім'я повинні передаватися за посиланням, щоб зміни зберігалися в основному масиві.
2) Поповнення рахунку: Функція для поповнення балансу рахунку. Баланс передається через вказівник.

3) Зняття грошей з рахунку: Функція для зняття грошей з балансу рахунку. Баланс передається через
 вказівник. Функція повинна перевіряти, щоб баланс не ставав від’ємним.

4) Відображення інформації про рахунки: Виведення інформації про всі рахунки та їх поточний баланс. 
Дані повинні передаватися за посиланням.

5) Меню: Програма повинна працювати в циклі, дозволяючи користувачу виконувати введення даних про новий рахунок,
поповнення, зняття коштів, виведення інформації та завершення програми.*/
#include <iostream>;
using namespace std;

const int MAX_ACCOUNTS =100;

//Оголошення функцій
void  create_name_balance (string &owner, double &balance);
void replenishment (double *balance);
void withdrawal (double *balance);
void displayAccounts (const string owners, const double balances[], int account_count);

int main()
{
    string owners[MAX_ACCOUNTS];   // Масив для зберігання імен власників рахунків
    double balances[MAX_ACCOUNTS]; // Масив для зберігання балансів рахунків
    int account_count = 0;          // Лічильник кількості створених рахунків
    int choice;

    //Основне меню програми
    do 
    {
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"Меню"<<endl;
        cout<<"1.Створити рахунок";
        cout<<"2.Поповнити рахунок"<<endl;
        cout<<"3.Зняти гроші з рахунку"<<endl;
        cout<<"4.Відобразити інформацію про рахунки"<<endl;
        cout<<"5.Вийти";
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"Виберіть опцію:";
        cin>>choice;

        switch(choice)
        {
            case 1: //Створення рахунку
            if(account_count < MAX_ACCOUNTS)
            {
                 create_name_balance (owners[account_count], balances [account_count]);
                 account_count ++;}
                 else 
                 {
                    cout<<"Досягнуто максимальної кількості рахунків"<<endl;
                 }
            
            case 2: //Поповнення рахунку
            {
                int account_countNumber;
                cout<<"Введіть номер рахунку"<<endl;
                cin>>account_countNumber;
                if(account_countNumber >= 0 && account_countNumber < account_count)
                {
                    replenishment(&balances[account_countNumber]);
                }
                else 
                {
                    cout<<"Неправильний номер  рахунку";
                }
                break;
            }
            case 3: //Зняття грошей з рахунку
            {
                int account_countNumber;
                cout<<"Введіть номер рахунку: "<<endl;
                cin>>account_countNumber;
                if (account_countNumber >= 0 && account_countNumber < account_count)
                { 
                     withdrawal(&balances[account_countNumber]);
                }
                else 
                {
                    cout<<"Невірний номер рахунку"<<endl;
                }
                break;
            }
            case 4: //Відображення всіх рахунків
             {
                displayAccounts ( owners, balances, account_count);
            break;
            case 5: //Вихід з програми 
            cout<<"Вихід з програми"<<endl;
            break;
            default://Не правильний вибір
            cout<<"Не правильний вибір, спробуйте ще раз."<<endl;
            }
        } while (choice != 5);
        return 0;
    }
    /************ */


    

        
        
        
        
        
        }








    }
    
    
}

