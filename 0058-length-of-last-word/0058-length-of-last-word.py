class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        x = s.split()
        return (len(x[len(x)-1]))
            