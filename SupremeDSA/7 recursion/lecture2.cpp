#include<iostream>
#include <climits>
#include<vector>
using namespace std;

int getFactorial(int n){
    if(n == 0){
        return 1;
    }
    int finalAns = n * getFactorial(n-1);
    return finalAns;
}

void posCounting(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    posCounting(n-1);
}

void increaseCount(int n){
    if(n == 0){
        return ;
    }

    increaseCount(n-1);
    cout << n << endl;
}

int powOfNum(int n){
    if(n == 0) return 1;
    else{
        int ans = 2 * powOfNum(n-1);
        return ans;
    }
}

int fibonacciSeries(int n){
    if ( n == 0 || n == 1) return n;
    int ans = fibonacciSeries(n-1) + fibonacciSeries(n-2);
    return ans;
}

int sumOfNumber(int n){
    if(n == 0 || n == 1) return n;
    else{
        int sum = n + sumOfNumber(n-1);
        return sum;
    }
}

void printArray(int arr[],int size, int index){
    if(index == size){
        return;
    }
    else{
        cout << arr[index] << " ";
        printArray(arr,size,index+1);
    }
}

bool searchInArray(int arr[],int size, int index, int target){
    if(index == size) return false;
    if(arr[index] == target) return true;
    bool ans = searchInArray(arr,size,index+1,target);
    return ans;
}

int max(int a , int b){
    if (a > b){
        return a;
    }
    return b;
}

void printMaxElement(int *arr,int size,int index,int &value){
    if(index == size){
        return;
    }

    value = max(value,arr[index]);
    printMaxElement(arr, size, index+1,value); 
}

int min(int a , int b){
    if(a < b){
        return a;
    }
    return b;
}
void printMinElement(int arr[],int size,int index, int & value){
    if(index == size){
        return;
    }
    value = min(value,arr[index]);
    printMinElement(arr,size,index+1,value);
}

void printOddNumber(int arr[],int size, int index){
    if(index == size){
        return;
    }
    if((arr[index]&1)){
        cout << arr[index] << ' ';
    }
    printOddNumber(arr,size,index+1);
}

void printEvenNumber(int arr[],int size,int index,vector<int>&nums){
    if(index == size){
        return;
    }
    if((arr[index] % 2 == 0)){
        nums.push_back(arr[index]);
    }
    printEvenNumber(arr,size,index+1,nums);
}

int binarySearch1(int arr[],int size, int target){
    int start = 0;
    int end = size-1;

    while(start <=end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if (arr[mid] > target){
            end = mid -1;
        }
        else if (arr[mid] < target){
            start = mid+1;
        }
    }
    return -1;
}
int binarySearch(int arr[],int size, int target,int start, int end){
    if(start > end){
        return -1;
    }

    int mid = start + (end - start)/2;
    if (arr[mid]== target){
        return mid;
    }
    else if (arr[mid] < target){
        start = mid +1;
        binarySearch(arr,size,target,start,end);
    }
    else if (arr[mid] > target){
        end = mid -1;
        binarySearch(arr,size,target,start,end);
    }
}


bool SortedArray(int arr[],int size,int index){
    if(index == size -1 ){
        return true;
    }
    if(arr[index] >= arr[index+1]){
        return false;
    }
    return SortedArray(arr, size,index+1);
}
int main(){

    // int n;
    // cout << "Enter the value of n: ";
    // cin>> n;

    // int ans = getFactorial(n);
    // cout << "factorial of n is " << ans << endl;

    // value from n to 1 
    // int n ; 
    // cout << "enter value to find decreasing order counting : ";
    // cin>>n;
    // posCounting(n);


    // printing value from 0 to n 

    // int n; 
    // cout << "enter value : ";
    // cin>> n;
    // increaseCount(n);

    // printing power of 2 
    // int n ;
    // cout << "enter value to find power : ";
    // cin >> n;
    // cout << powOfNum(n);

    // sum of fibonacci series 
    // int n; 
    // cout << "Enter value of n to find sum : ";
    // cin >> n ;
    // cout << fibonacciSeries(n);

    // sum of n number 
    // int n ;
    // cout << "Enter nth number : ";
    // cin>>n;
    // cout << sumOfNumber(n) << endl; 

    int arr[] = {1,2,3,4,5,6,10,8,9,10,11,12,13,14,15};
    int size = 15;
    // printArray(arr,size,0);

    // bool ans = searchInArray(arr,size,0,5);
    // (ans == 1)? cout << "found" : cout << "not found";
    // int value = INT_MIN;

    // printMaxElement(arr,size,0,value);
    // cout << value ; 

    // int value = INT_MAX;
    // printMinElement(arr,size,0,value);
    // cout << value << endl;

    // printOddNumber(arr,size,0);
    // vector<int>ans;
    // printEvenNumber(arr,size,0,ans);
    // for(auto it :ans){
    //     cout << it << " ";
    //     it++;
    // }
    // cout << binarySearch(arr,size,15,0,15);
    int ans = SortedArray(arr,size,0);
    if(ans){
        cout << "sorted";
    }else{
        cout << "not sorted";
    }


    return 0;
}