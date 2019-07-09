#include <iostream>
#include <conio.h>
using namespace std;

 char prov='A';
 int Day = 7;
 int Province = 3;

int main()
{
    int temperature[Province][Day];

    cout << "Continuously enter all temperatures for a week of Province A, Province B, Province C. \n";
    

   for (char i = 0, prov='A'; i < Province; ++i, prov++)
    {
        for(int j=0; j < Day; ++j)
        {
            cout << "Province " << prov << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

   
cout<<"\nDisplaying Values: \n";
    for (char i = 0, prov = 'A' ; i < Province; ++i, prov++)
    {
        for(int j = 0; j < Day; ++j)
        {
            cout << "Province " << prov << ", Day " << j+1 << " = " << temperature[i][j] << endl;
        }
    }
getch();
    return 0;
}

