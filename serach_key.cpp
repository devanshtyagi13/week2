#include<iostream>
using namespace std;
int binarySearch(int arr[], int first, int last, int num) {
   if (first <= last) {
      int mid = (first + last)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, first, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, last, num);
   }
   return -1;
};


int main()
{
    int n,num;
    cout<<"Enter size of array :" ;
    cin>>n;
    cout<<"Enter number to be searched :" ;
    cin>>num;
    int arr[n];
    cout<<"Enter array elements :" ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        count++;
    }
    int index = binarySearch (arr, 0, n-1, num);
   if(index == -1){
      cout<< num <<" is not present in the array";
   }else{
      cout<< num <<" is present "<<count<<"times";
   }
   return 0;

    

}