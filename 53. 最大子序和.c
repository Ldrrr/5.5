int maxSubArray(int* nums, int numsSize)
{
	int i,j,s=0;
	int max=nums[0];
	for(i=0;i<numsSize;i++)
	{
		s=0;
		for(j=i;j<numsSize;j++)
		{
			s+=nums[j];
			if(s>max)
		    {
			max=s;
		    }
		}
		
	}
	return max;
}
