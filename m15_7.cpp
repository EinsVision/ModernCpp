#include "projects.h"

class Person157
{
    string m_name;
    // shared_ptr<Person157> m_partner;
    // 이렇게 하면 문제가 발생한다. 
    weak_ptr<Person157> m_partner;
public:
    Person157(const string& name)
        : m_name(name)
    {
        cout << m_name << " created" << endl;
    }

    ~Person157()
    {
        cout << m_name << " destroyed" << endl;
    }

    friend bool partnerUp(shared_ptr<Person157>& p1, shared_ptr<Person157>& p2)
    {
        if (!p1 || !p2)
        {
            return false;
        }

        p1->m_partner = p2;
        p2->m_partner = p1;
        cout << p1->m_name << " is partnered with  " << p2->m_name << endl;
        return true;
    }

    const shared_ptr<Person157> getParner() const
    {
        return m_partner.lock(); // 순환 의존성을 깬다?
    }

    const string& getName() const
    {
        return m_name;
    }
};

void Projects_15::m15_7()
{
    // 15.7 순환 의존성 문제와 std::weak_ptr
    auto lucky = make_shared<Person157>("Lucky");
    auto licky = make_shared<Person157>("Licky");

    partnerUp(lucky, licky);
    cout << lucky->getParner()->getName() << endl;
    cout << licky->getParner()->getName() << endl;
}