#include<bits/stdc++.h>
using namespace std;

void  merge(vector<int> &arr,int start,int end,int mid,int count_inver){
   int left,right;
   left = mid - start + 1;
   right = end - mid;
   vector<int> array_temp(right - left + 1,0);
   int sub_array1=0,sub_array2=0,k=0;
   while(sub_array1 < left and sub_array2 < right){
       if(arr[sub_array1] < arr[sub_array2]){
           array_temp[k] = arr[sub_array1];
           sub_array1++;
           k++;
       }
       else{
           count_inver = count_inver + mid - sub_array1;
           arr[k] = rightarray[sub_array2];
           sub_array2++;
           k++;
       }
   }
   while(sub_array1 < left)
        arr[k++] = leftarray[sub_array1++];
    while(sub_array2 < right)
        arr[k++] = rightarray[sub_array2++];
}

void mergesort(vector<int> &arr,int start,int end,int count_inver){
    if(start < end){
        int mid = start + (end - start)/2;
        mergesort(arr,start,mid,count_inver);
        mergesort(arr,mid+1,end,count_inver);
        merge(arr,start,end,mid,count_inver);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        for(int i = 0;i < n;i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        int count_inver = 0;
        mergesort(arr,0,n,count_inver);
        cout << count_inver << endl;
    }
    return 0;
}

