int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    static int res[2];
    
    for(i = 0; i < numsSize; i++)
    {
        for(j = i+1; j < numsSize; j++)       
        {
        	if(*(nums+i) + *(nums+j) == target)
        	{
        		res[0] = i;
        		res[1] = j;
        		return res;
        	}
        	else
        	{
        		;
        	}

        }
    } 
    
   return res;    
}
