#include<iostream>
#include<climits>
using namespace std;

void getArray(int arr[],int size, int index){
    if(size == index){
        return ;
    }
    cout << arr[index] << " ";
    getArray(arr,size,index+1);
}


void printInvArray(int arr[],int size, int index){
    if(size == index){
        return;
    }
    printInvArray(arr,size,index+1);
    cout << arr[index] << " ";
}


bool searchInArray(int arr[],int size, int index, int target){
    if(size <= index){
        return false;
    }
    else if(target == arr[index]){
        return true;
    }
    bool ans = searchInArray(arr,size,index+1,target);
    return ans;
}

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

void maxArray(int arr[], int size, int index, int &value){
    if(index == size){
        return;
    }
    value = max(value,arr[index]);
    maxArray(arr,size, index+1,value);
}

int min(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

void minArray(int arr[], int size, int index, int &value){
    if(index == size){
        return;
    }
    value = min(value,arr[index]);
    minArray(arr,size, index+1,value);
}


void printAllOdd(int arr[], int size, int index){
    if(size == index){
        return;
    }
    if(arr[index] & 1){
        cout << arr[index] << endl;
    }
    printAllOdd(arr,size, index+1);
}


void printAllEven(int arr[], int size, int index){
    if(size == index){
        return;
    }
    if(!(arr[index] & 1)){
        cout << arr[index] << endl;
    }
    printAllEven(arr,size, index+1);
}


int binarySearch(int arr[],int size,int target,int start, int end){
    int mid = (start + end)/2;

    if(start > end){
        return -1;
    }
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] > target){
        return binarySearch(arr,size,target,start,mid-1);
    }
    else if(arr[mid] < target){
        return binarySearch(arr,size,target,mid+1,end);
    }
    return -1;
}

void digit(int n){
    if(n == 0){
        return ; 
    }
    int digit_ = n%10;
    cout << digit_ << endl;
    n = n/10;
    digit(n);
}

int main(){
    // print arry from start to end 
    // int arr[] = {10,20,30,40,60};
    // getArray(arr,5,0);




    // print arry from end to start 
    // int arr[] = {10,20,30,40,60};
    // printInvArray(arr,5,0);


    // search in array
    // int arr[] = {10,20,30,40,50,60};
    // int ans = searchInArray(arr,6,0,50);
    // cout << ans << endl;

    // maximum in array
    // int arr[] = {10,20,30,40,50,60};
    // int max = INT_MIN;
    // int size = 6;
    // maxArray(arr,size,0,max);
    // cout << max ;




    // maximum in array
    // int arr[] = {10,20,30,40,50,60};
    // int max = INT_MAX;
    // int size = 6;
    // minArray(arr,size,0,max);
    // cout << max ;


    // print all odd number 
    // int arr[] = {10,21,30,40,50,60};
    // printAllOdd(arr,6,0);

    // print all odd number 
    // int arr[] = {10,21,30,40,50,60};
    // printAllEven(arr,6,0);

    // print Binary Search
    // int arr[] = {10,21,30,40,50,60};
    // int ans = binarySearch(arr,6,21,0,5);
    // cout << ans << endl;

    digit(345);
    return 0;
}