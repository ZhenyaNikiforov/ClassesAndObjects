#include <iostream>
#include <Windows.h>
using namespace std;

class Calculator
{
public:
  double add()
  {
    return this->num1 + this->num2;
  };

  double multiply()
  {
    return this->num1 * this->num2;
  };

  double subtract_1_2()
  {
    return this->num1 - this->num2;
  };

  double subtract_2_1()
  {
    return this->num2 - this->num1;
  };

  double divide_1_2()
  {
    return this->num1 / this->num2;
  };

  double divide_2_1()
  {
    return this->num2 / this->num1;
  };

  bool set_num1(double num1)
  {
    if (num1 == 0)
    {
      return false;
    };

    this->num1 = num1;
    return true;
  };

  bool set_num2(double num2)
  {
    if (num2 == 0)
    {
      return false;
    };

    this->num2 = num2;
    return true;
  };

private:
  double num1;
  double num2;
};

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  while (true)
  {
    double num1 = 0;
    double num2 = 0;
    Calculator calc;

    while (true)
    {
      cout << "Введите num1: ";
      cin >> num1;

      if (calc.set_num1(num1))
      {
        break;
      };

      cout << "Неверный ввод!\n";
    };

    while (true)
    {
      cout << "Введите num2: ";
      cin >> num2;

      if (calc.set_num2(num2))
      {
        break;
      };

      cout << "Неверный ввод!\n";
    };

    cout << "num1 + num2 = " << calc.add() << "\n";
    cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
    cout << "num2 - num1 = " << calc.subtract_2_1() << "\n";
    cout << "num1 * num2 = " << calc.multiply() << "\n";
    cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
    cout << "num2 / num1 = " << calc.divide_2_1() << "\n";
  }

  return 0;
}