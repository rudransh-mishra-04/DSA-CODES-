#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums,vector<int>output,int index,vector <vector<int>>& ans){
	//THIS IS A RECURSION SO THE FIRST IS BASE CASE 
	if(index>=nums.size()){
		ans.push_back(output);
		return;
	}
	//THIS IS FOR EXCLUDE
	solve(nums,output,index+1,ans);
	
	//include
	int element=nums[index];
	output.push_back(element);
	solve(nums,output,index+1,ans);
	
}
vector <vector<int>> subsets(vector<int>& nums){ //THIS LINE MEANS WE HAVE CREATED A VECTOR WITHIN A VECTOR 
	vector <vector<int>> ans;
	vector <int>output;
	int index=0;
	solve(nums,output,index,ans);
	return ans;
}

int main(){
	
	
	return 0;
}
