#include <iostream>
// в банке всего один вклад, у каждого человека их может быть несколько, 
// но процентная ставка по каждому вкладу одинаковая
class Account
{
private:
    double sum;
    static int rate;
public:
    Account(double sum)
    {
        this->sum = sum;
    }
    static int getRate()
    {
        return rate;
    }
    static void setRate(int r)
    {
        rate = r;
    }
    double getIncome() // доход с процентами 
    {
        return sum + sum * rate / 100;
    }
};

int Account::rate = 8;
int main()
{
    Account account1(1000); // a.k.a. Student
    Account account2(500000); // a.k.a. Rector
    Account::setRate(4); // переустанавливаем значение rate
    std::cout << "Rate: " << Account::getRate() << std::endl;
    std::cout << "Income: " << account1.getIncome() << std::endl;
    std::cout << "Income: " << account2.getIncome() << std::endl;
    return 0;
}