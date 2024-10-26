#include <iostream>
#include <string>
using namespace std;

const int MAX_ACCOUNTS = 100;

// Прототипи функцій
void createAccount(string &owner, double &balance);
void deposit(double *balance);
void withdraw(double *balance);
void displayAccounts(const string owners[], const double balances[], int accountCount);

int main()
{
  string owners[MAX_ACCOUNTS];   // Масив для зберігання імен власників рахунків
  double balances[MAX_ACCOUNTS]; // Масив для зберігання балансів рахунків
  int accountCount = 0;          // Лічильник кількості створених рахунків
  int choice;

  // Основне меню програми
  do
  {
    cout << "----------------------"<<endl;
    cout << "Меню"<<endl;
    cout << "1. Створити рахунок"<<endl;
    cout << "2. Поповнити рахунок"<<endl;
    cout << "3. Зняти гроші з рахунку"<<endl;
    cout << "4. Відобразити інформації про рахунки"<<endl;
    cout << "5. Вийти"<<endl;
    cout << "----------------------"<<endl;
    cout << "Виберіть опцію: ";
    cin >> choice;

    switch (choice)
    {
    case 1:// Створення рахунку
      if (accountCount < MAX_ACCOUNTS)
      {
        createAccount(owners[accountCount], balances[accountCount]);
        accountCount++;
      }
      else
      {
        cout << "Досягнуто максимальної кількості рахунків."<<endl;
      }
      break;
    case 2:// Поповнення рахунку
    {
      int accountNumber;
      cout << "Введіть номер рахунку: ";
      cin >> accountNumber;
      if (accountNumber >= 0 && accountNumber < accountCount)
      {
        deposit(&balances[accountNumber]);
      }
      else
      {
        cout << "Не правильний номер рахунку."<<endl;
      }
      break;
    }
    case 3:// Зняття грошей з рахунку
    {
      int accountNumber;
      cout << "Введіть номер рахунку: ";
      cin >> accountNumber;
      if (accountNumber >= 0 && accountNumber < accountCount)
      {
        withdraw(&balances[accountNumber]);
      }
      else
      {
        cout << "Не правильний номер рахунку."<<endl;
      }
      break;
    }
    case 4:// Відобразити інформації про рахунки
      displayAccounts(owners, balances, accountCount);
      break;
    case 5:// Вихід з програми
      cout << "Вихід з програми."<<endl;
      break;
    default:// Невірний вибір
      cout << "Не правильний вибір, спробуйте ще раз."<<endl;
    }
  } while (choice != 5);

  return 0;
}

void createAccount(string &owner, double &balance)// Функція для створення нового рахунку
{
  cout << "Введіть ім'я власника рахунку: ";
  cin >> owner;
  cout << "Введіть початковий баланс: ";
  cin >> balance;
  cout << "Рахунок створено для " << owner << " з балансом: " << balance << endl;
}

void deposit(double *balance)// Функція для поповнення рахунку
{
  double amount;
  cout << "Введіть суму для поповнення: ";
  cin >> amount;
  if (amount > 0)
  {
    *balance += amount;
    cout << "Баланс оновлено. Новий баланс: " << *balance << endl;
  }
  else
  {
    cout << "Не правильна сума."<<endl;
  }
}

void withdraw(double *balance)// Функція для зняття грошей з рахунку
{
  double amount;
  cout << "Введіть суму для зняття: ";
  cin >> amount;
  if (amount > 0 && *balance >= amount)
  {
    *balance -= amount;
    cout << "Зняття успішне. Новий баланс: " << *balance << endl;
  }
  else
  {
    cout << "Недостатньо коштів або невірна сума."<<endl;
  }
}

void displayAccounts(const string owners[], const double balances[], int accountCount)// Функція для відображення інформації про всі рахунки
{
  cout << "----------------------"<<endl;
  cout << "Список рахунків:"<<endl;
  for (int i = 0; i < accountCount; i++)
  {
    cout << "Рахунок " << i + 1 << ": " << owners[i] << ", Баланс: " << balances[i] << endl;
  }
}
