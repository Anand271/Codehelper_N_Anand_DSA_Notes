#include <bits/stdc++.h>
#include<iostream>

using namespace std;
 
void printArr(int *arr, int n){

    for(int i  = 0;i<n;i++){
        cout << arr[i] << " " ;
    }
}

void InsertionSort(int *arr,int n,int i){

  //base case 
  if(n == 0 || n == 1 || i == n) return;

printArr(arr,n);
cout << endl;

 //single time logic for single iteration 
  int j = i-1;
  int temp = arr[i];
   while (j>=0)
   {
     if(arr[j] > temp){
        arr[j+1] = arr[j];
     }else{
        break;
     }
     j--;
   }

   arr[j+1] = temp;
   i++;
   
   // Recursive call();
  InsertionSort(arr,n,i);

}

int main() {

// Insertion sort using Recursion

int n = 5;
int arr[n] = {5,4,3,2,1};

int i = 1;

InsertionSort(arr,n,i);

cout << "i am last ones"<< endl;

printArr(arr,n);
 return 0;
}