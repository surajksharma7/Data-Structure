// sliding window problem 
// -> process first window 
// -> process remaning window -> ans -> removal -> addition

deque<long long int> q;
for (int i = 0; i < k; i++)
{
    int element = A[i];

    if(element < 0){
        q.push_back()
    }
}

for (int i = k; i < n;i++){
    if(q.empty()){
        ans.push_back(0);
    }
    else{
        int index = q.front();
        int element = A[index];
        ans.push_back(element);
    }
}