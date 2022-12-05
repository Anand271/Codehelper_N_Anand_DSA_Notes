#include<vector>
using namespace std;
 
void insertionSort(int n, vector<int> &arr){
    
  //using while loop

   int i = 1;
   while (i<n)
   {
    // we using temp bcz place of arr[i] is updated in after if condition
    int temp = arr[i];
     int j = i-1;
     while (j>=0)
     {
        if(arr[j]>temp){
            arr[j+1] = arr[j];
        }else{
            break;
        }
        j--;
     }
     arr[j+1] = temp;
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