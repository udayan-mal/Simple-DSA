class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,k=0;
        vector<int> arr;
        int m=nums1.size();
        int n=nums2.size();
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
              arr.push_back(nums1[i]);
             i++;
             k++;
            }
            else{
               arr.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        while(i<m){
            arr.push_back(nums1[i]);
            k++;
            i++;
        }
        while(j<n){
            arr.push_back(nums2[j]);
            k++;
            j++;
        }

        int x=arr.size();
        double median;
        if(x%2==0){
        median=(arr[x/2]+arr[(x/2)-1])/2.0;
        }
        else{
            median=arr[(x-1)/2];
        }
        return median;
    }
};
int sol(){
    vector<int> arr1,arr2;
    Solution s;
     int m=arr1.size();
     int n=arr2.size();
     int x,y;
    for(int i=0;i<m;i++){
        cin>>x;
        arr1.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>y;
        arr2.push_back(y);
    }
    double ans=s.findMedianSortedArrays(arr1,arr2);
    cout<<ans;
    return 0;
}