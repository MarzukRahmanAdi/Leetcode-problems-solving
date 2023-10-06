#include <iostream>
#include <vector>

#include <utility>

using namespace std;
int main()
{
	vector<int> nums {2,11, 7,15};
	int target = 9;

	vector<int> x;
	vector<int> a;
	for(int i = 0; i < nums.size(); i++){

		bool finished = false;
		if( i == 0){
			int temp = target - nums[i];
			x.push_back(temp);

		} else{
			for (int j = 0; j < x.size(); j++)
			{
				if(nums[i] == x[j] ){
					a.push_back(j);
					a.push_back(i);
					bool finished = true;
					break;
				}	
			}
			
			if(finished == true){
				break;
			} else {
				x.push_back(target - nums[i]);
			}
		}
	}


	return 0;
}
