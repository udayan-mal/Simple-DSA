// This is the binary search algorithm to find the position of any target element in the given sequence of elements..

# include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {1,3,5,9,13,17,21,27,29,31,33};  
    int target=13;

    int low=0,high=10,md;
    while((high-low)>1){

        md=(high+low)/2;
        if(arr[md]>target){
            high=md-1;
        }else{
            low=md;
        }


    }

    if(arr[low]==target){
        cout<< low <<endl;
    }else{
        cout<< high <<endl;
    }

    
}


