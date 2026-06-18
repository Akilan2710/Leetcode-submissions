class Solution(object):
    def maxAlternatingSum(self, nums):
        lst1=[]
        for i in nums:
            lst1.append(i*i)
        lst1.sort()
        a=0
        b=len(lst1)-1
        s=0
        while(a<b):
            s+=lst1[b]-lst1[a]
            a+=1
            b-=1
        if a==b:
            s+=lst1[a]
        return s
        
        
        