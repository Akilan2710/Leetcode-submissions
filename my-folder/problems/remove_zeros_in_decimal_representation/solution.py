class Solution(object):
    def removeZeros(self, n):
        str1=''
        n=str(n)
        for i in n:
            if i!='0':
                str1+=i
        return int(str1)