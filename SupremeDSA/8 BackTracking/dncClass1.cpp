#include<iostream>
#include<vector>

using namespace std;

void merge(int arr[], int start, int end, int mid){
    int leftLength = mid - start+1;
    int rightLength = end -mid;

    int *leftPart = new int[leftLength];
    int *rightPart = new int[rightLength];

    int index = start;

    for(int i = 0; i<leftLength;i++){
        leftPart[i] = arr[index];
        index++;
    }
    index = mid+1;
    for(int i = 0; i<rightLength;i++){
        rightPart[i] = arr[index];
        index++;
    }

    int i = 0;
    int j = 0;
    int mainIndex = start;

    while(i < leftLength && j < rightLength){
        if(leftPart[i] < rightPart[j]){
            arr[mainIndex] = leftPart[i];
            i++;
            mainIndex++;
        }
        else{
            arr[mainIndex] = rightPart[j];
            j++;
            mainIndex++;
        }
    }

        // agar bach gya hoga to kya karna hai 
        while(i < leftLength){
            arr[mainIndex] = leftPart[i];
            i++;
            mainIndex++;
        }
        while(j < rightLength){
            arr[mainIndex] = rightPart[j];
            j++;
            mainIndex++;
        }
    delete[] leftPart;
    delete[] rightPart;
}


void mergeSort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int mid = (start + end)/2;
    // left wale part mein traverse karo
    mergeSort(arr,start,mid); 
    // right wale part mein traverse karo
    mergeSort(arr,mid+1,end);
    // merger karo
    merge(arr,start,end,mid);
}

// int mergeSort(int arr[], int size, int brr[], int sizeBrr, vector<int>&ans){    
//     int i = 0;
//     int j = 0;
//     while(i < size && j < sizeBrr){
//         if(arr[i] < brr[j]){
//             ans.push_back(arr[i]);
//             i++;
//         }
//         else{
//             ans.push_back(brr[j]);
//             j++;
//         }

//     }
//     // yaha aaagye to loop ke bahar nikal gye
//     // agar i mein element hai to usse push back kar do 
//     while(i < size){
//         ans.push_back(arr[i]);
//         i++;
//     }
//     // agar j mein element hai to usse push back kar do
//     while(j < sizeBrr){
//         ans.push_back(brr[j]);
//         j++;
//     }
//     return 0;
// }


class Solution{
    public:
    bool isSafe(int newx, int newy, vector<vector<int>>&maze, vector<vector<bool>>&visited, int n ){
    
        if(newx < 0 || newy < 0 || newx >= n || newy >= n){
            return false;
        }
        if(visited[newx][newy] == true){
            return false;
        }
        if(maze[newx][newy] == 0){
            return false;
        }
        return true;
    }

    vector<string>solve(vector<vector<int>>&maze, int size, int srcx, int srcy, int destx, int desty, vector<vector<bool>>&visited, vector<string>ans, string output){
        if(srcx == destx && srcy == desty){
            ans.push_back(output);
            return;
        }

        // up wala movement de rahe hai 
        int newx = srcx -1;
        int newy = srcy;
        if(isSafe(newx,newy,maze,visited,size)){
            visited[newx][newy] = true;
            solve(maze, size, newx, newy, destx, desty, visited,ans, output+"U");
            visited[newx][newy] = false;
        }
        // up wala movement de rahe hai 
        newx = srcx +1;
        newy = srcy;
        if(isSafe(newx,newy,maze,visited,size)){
            visited[newx][newy] = true;
            solve(maze, size, newx, newy, destx, desty, visited,ans, output+"D");
            visited[newx][newy] = false;
        }
        // up wala movement de rahe hai 
        newx = srcx;
        newy = srcy-1;
        if(isSafe(newx,newy,maze,visited,size)){
            visited[newx][newy] = true;
            solve(maze, size, newx, newy, destx, desty, visited,ans, output+"L");
            visited[newx][newy] = false;
        }

        // up wala movement de rahe hai 
        newx = srcx;
        newy = srcy+1;
        if(isSafe(newx,newy,maze,visited,size)){
            visited[newx][newy] = true;
            solve(maze, size, newx, newy, destx, desty, visited,ans, output+"R");
            visited[newx][newy] = false;
        }
    }
    vector<string> findPath(vector<vector<int>>&maze){
        int n =   maze.size();
        // answer store karke yaha store karenge
        vector<string>ans;
        //visited ke liye maxtrix banao jisme values 0 honge - false
        vector<vector<bool>>visited(n, vector<bool>(n,0));
        // source station kaha se hai matlab kon se index se lekar kon se index tk 
        int srcx =  0;
        int srcy = 0;
        // final destination ka cordinate kya hai 
        int destx = n-1;
        int desty = n-1;
        visited[0][0] = true;
        string output = "";
        // function ko call karo   
        if(maze[0][0] == 0){
            return ans;
        } 
        solve(maze, n, srcx, srcy, destx, desty, visited, ans, output);
        // answer ko return kar do 
        return ans; 
    }

};

int main(){

    // int arr[] = {10,20,30,40,50,70};
    // int sizeArr = 6;

    // int brr[] = {60,80,90,100};
    // int sizeBrr = 4;
    // vector<int>ans;

    // mergeSort(arr,sizeArr,brr, sizeBrr, ans);

    // for(auto value : ans){
    //     cout << value << " ";
    // }
    // return 0;



    int arr[] = {10,46,35,24,360,5,42,99,100,12,32,2,01};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i <size;i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    mergeSort(arr, 0, size-1);

    for(int i = 0 ; i <size;i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    
    return 0;

}