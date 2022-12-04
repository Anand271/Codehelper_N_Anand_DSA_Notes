#include<vector>
using namespace std;
 
void insertionSort(int n, vector<int> &arr){
    
  //using while loop

   int i = 1;
   while (i<n)
   {
     int j = i-1;
     while (j>=0)
     {
        if(arr[j]>arr[i]){
            arr[j+1] = arr[j];
        }else{
            break;
        }
        j--;
     }
     arr[j+1] = arr[i];
     i++;
   }
  

    //using for loop

    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}