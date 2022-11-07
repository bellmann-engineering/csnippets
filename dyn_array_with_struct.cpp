#include <iostream>
#include <string>

using namespace std;

struct Person 
{ 
  int age;
  string name;
}; 

int main()
{
    int num = 2;

    //cin >> num;

    Person* liste = new Person[num];

    for(int i=0; i<num; i++)
    {
        Person p;

        cout << "Name: ";
        cin >> p.name;

        cout << "Age: ";
        cin >> p.age;

        liste[i] = p;
    }

    for(int i=0; i<num; i++)
        cout << liste[i].name << " ist " << liste[i].age << " Jahre alt." << endl;

    if(liste != NULL)
        delete [] liste;

    return 0;
}
