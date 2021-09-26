#include <iostream>
using namespace std;

class human
{
public:
    string m_name;
    float m_weight;
    float m_height;
    human(){
    }
    human(string name, float weight, float height)
    {
        this->m_name = name;
        this->m_weight = weight;
        this->m_height = height;
    }
};

float caculating_bmi(human a_person)
{
    return a_person.m_weight / (a_person.m_height * a_person.m_height);
}

int main()
{
    human ok = human ("ok", 5,12);
    int number_of_people;
    cout << "nhap so nguoi: ";
    cin >> number_of_people;
    if (number_of_people < 1)
    {
        cout << "vui long nhap so nguoi hop le";
    }
    else
    {
        human people[number_of_people] ;
        for (int i = 1; i <= number_of_people; i++)
        {
            string name;
            float weight;
            float height;
            cout << "ten nguoi thu " << i << " : ";
            cin >> name;
            cout << endl;
            cout << "can nang nguoi " << i << " : ";
            cin >> weight;
            cout << endl
                 << "chieu cao nguoi " << i << " : ";
            cin >> height;
            cout << endl;
            people[i - 1] = human(name, weight, height);
        }
        for(int i = 0; i < number_of_people; i ++){
            float bmi = caculating_bmi(people[i]) ;
            cout << "chi so bmi cua " << people[i].m_name << " la: " << bmi << endl ;
        }
    }
    return 0;
}