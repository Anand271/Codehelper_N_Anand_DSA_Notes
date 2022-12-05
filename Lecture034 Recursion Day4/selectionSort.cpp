#include <bits/stdc++.h>
#include<iostream>

using namespace std;
 
void printArr(int *arr, int n){

    for(int i  = 0;i<n;i++){
        cout << arr[i] << " " ;
    }
}

void selectionSort(int *arr,int n){

  if(n == 0 || n == 1) return;

  int minIndex = 0;
  int j = 1;
   while (j<n)
   {
    if(arr[j] < arr[minIndex]){
      minIndex = j;
    }

      j++;
   }
   swap(arr[minIndex],arr[0]);



  selectionSort(arr+1,n-1);
}

int main() {

// selection sort using normal Recursion

int n = 5;
int arr[n] = {5,4,3,2,1};


selectionSort(arr,n);

printArr(arr,n);
 return 0;
}

