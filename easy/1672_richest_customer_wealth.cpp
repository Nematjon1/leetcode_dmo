/*1672. Richest Customer Wealth
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

class Solution {
public:
    
    int maximumWealth(vector<vector<int>>& accounts) {

        int wealthy=0,sums;

        int m = accounts.size() , n= accounts[0].size() ;

        for(int i=0; i<m; i++) {

            sums=0;
            for(int j=0 ; j<n; j++) {
              sums += accounts[i][j];
            }

            if(wealthy<sums) {
               wealthy = sums;
            }     
        }

        return wealthy;       
    }
};
