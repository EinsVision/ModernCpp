#include "projects.h"

class Cents
{
private:
    int cents;
public:
    Cents(int cents_input = 0)
    {
        cents = cents_input;
    }
    int getCents() const
    {
        return cents;
    }
    int& getCents()
    {
        return cents;
    }
    friend ostream& operator << (ostream& out, const Cents& m_cents)
    {
        out << m_cents.cents;
        return out; // chaning하기 위해 return 한다.
    }
    friend bool operator == (const Cents& c1, const Cents& c2)
    {
        if (c1.cents == c2.cents)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend bool operator != (const Cents& c1, const Cents& c2)
    {
        if (c1.cents != c2.cents)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend bool operator > (const Cents& c1, const Cents& c2)
    {
        if (c1.cents > c2.cents)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // sort를 구현할 때는 오른쪽이 더 작냐를 의마하는 연산자 overloading을
    // 구현해야 한다.
    friend bool operator < (const Cents& c1, const Cents& c2)
    {
        if (c1.cents < c2.cents)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend bool operator <= (const Cents& c1, const Cents& c2)
    {
        if (c1.cents <= c2.cents)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend bool operator >= (const Cents& c1, const Cents& c2)
    {
        if (c1.cents >= c2.cents)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
};
void Projects_9::m9_4()
{
    // 9.4 비교 연산자 오버로딩 하기 ==, !=, >, >=
    Cents c1(9);
    Cents c2(9);

    if (c1 == c2)
    {
        cout << "Equal !" << endl;
    }
    else
    {
        cout << " Not equal" << endl;
    }

    if (c1 != c2)
    {
        cout << "Equal !" << endl;
    }
    else
    {
        cout << " Not equal" << endl;
    }

    vector<Cents> arr(20);

    for (unsigned int i = 0; i < 20; i++)
    {
        /*arr[i] = i;
        cout << arr[i].getCents() << endl;*/

        arr[i].getCents() = i; // 이게 가능한 것은 return이 reference 때문
        cout << arr[i].getCents() << " ";
    }
    cout << endl;

    // random하게 숫자를 shuffle한다.
    random_device rd; 
    mt19937_64 g(rd()); 
    shuffle(arr.begin(), arr.end(), g);

    for (auto& ele : arr)
    {
        cout<<ele << " ";
    }
    cout << endl;

    // sort 함수를 쓰면 무시무시한 error가 발생한다. 
    // 왜냐하면 vector<Cents> arr(20); Cents class 끼리 크기 비료를 
    // 못하기 때문이다. 크기 비교하는 연산자를 overloading해주어야 한다.
    // sort를 구현할 때는 오른쪽이 더 작냐를 의마하는 연산자 overloading을
    // 구현해야 한다.
    sort(arr.begin(), arr.end());
    for (auto& ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    cout << boolalpha;
}