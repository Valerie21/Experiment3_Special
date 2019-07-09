#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int  size=15, arr[50], i, j, temp, total, average;
 
  cout<< "Enter 15 numbers: ";
  for (i=0; i<size; i++)
  {
      cin>> arr[i];
  }
  cout << "\n";
  
  for (i=0; i<size; i++)
  {
      for (j=i+1; j<size; j++)
      {
          if(arr[i]> arr[j])
          {
              temp = arr[i];
              arr[i]= arr[j];
              arr[j]=temp;
          }
      }
  }
  
  cout<< "\nThe smallest integer is: "<< arr[0];
  cout<< "\nThe largest integer is: " << arr[14];

for (i=0; i< size; i++)
{
    total+=arr[i];
}
 cout<< "\nTotal: "<<total; 
 
 average = total/15;
 cout<<"\nAverage: "<<average;
 
  getch();
  return 0;
}
