//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here
        vector<long long int> ans;
        long long mul = 1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                mul = mul*nums[i];
            }
            else
                mul = mul *1;
        }
        bool flag = 0;
        int cnt = 0;
        for(auto &val: nums){
            if(val==0){
                cnt++;
                flag = 1;
            }
        }
        
        if(flag==0){
            for(int i=0;i<n;i++){
                ans.push_back(mul/nums[i]);
            }
        }
        else if(flag==1 && cnt==1){
            for(int i=0;i<n;i++){
                if(nums[i]!=0) ans.push_back(0)  ;
                else ans.push_back(mul);
            }
        }
        else if(cnt>1){
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends