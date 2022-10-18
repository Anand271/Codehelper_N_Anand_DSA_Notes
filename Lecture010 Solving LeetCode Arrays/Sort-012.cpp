#include <iostream>
#include<math.h>

using namespace std;


void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  
}

void findUnique(int arr[],int n)
{

  int i = 0 , j = n-1;

  while (i < j)
  {
     while (arr[i] == 0 && i < j)
     {
      i++;
     }

     while (arr[j] != 0  && i < j)
     {
       j--;
     }

     // here arr[i] != 0 && arr[j] == 0 

    if (i<j)
    {
     swap(arr[i] , arr[j]);
      
    }

  }
  
  j = n-1;

   while (i < j)
   {
     while (arr[i] == 1 && i < j)
     {
      i++;
     }

     while (arr[j] == 2 && i<j)
     {
      j--;
     }
     
  // here arr[i] = 2 && arr[j] = 1 
   if (i<j)
   {
    swap(arr[i] , arr[j]);
   }
   

     
   }
    





}
  
  
int main() {
  
  int arr[20] = {2,1,0,1,1,1,0,0,2,2,1,0,2};

  int size = 13;

  
  findUnique(arr , size);
  printArr(arr , size);

    return 0;
}
