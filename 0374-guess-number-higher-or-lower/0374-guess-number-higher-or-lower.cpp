/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=0, j=n;
        while(i <=j){
            long long mid = i+(j-i)/2;
            int res = guess(mid);
            if(res == 0){
                return mid;
            }else if(res == -1 ){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return 0;
    }
};