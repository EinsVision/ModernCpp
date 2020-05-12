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
        return out; // chaning�ϱ� ���� return �Ѵ�.
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

    // sort�� ������ ���� �������� �� �۳ĸ� �Ǹ��ϴ� ������ overloading��
    // �����ؾ� �Ѵ�.
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
    // 9.4 �� ������ �����ε� �ϱ� ==, !=, >, >=
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

        arr[i].getCents() = i; // �̰� ������ ���� return�� reference ����
        cout << arr[i].getCents() << " ";
    }
    cout << endl;

    // random�ϰ� ���ڸ� shuffle�Ѵ�.
    random_device rd; 
    mt19937_64 g(rd()); 
    shuffle(arr.begin(), arr.end(), g);

    for (auto& ele : arr)
    {
        cout<<ele << " ";
    }
    cout << endl;

    // sort �Լ��� ���� ���ù����� error�� �߻��Ѵ�. 
    // �ֳ��ϸ� vector<Cents> arr(20); Cents class ���� ũ�� ��Ḧ 
    // ���ϱ� �����̴�. ũ�� ���ϴ� �����ڸ� overloading���־�� �Ѵ�.
    // sort�� ������ ���� �������� �� �۳ĸ� �Ǹ��ϴ� ������ overloading��
    // �����ؾ� �Ѵ�.
    sort(arr.begin(), arr.end());
    for (auto& ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    cout << boolalpha;
}