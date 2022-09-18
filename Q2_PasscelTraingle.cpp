/* Question : Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Solution : 
Algo-1 -> : i+1 th row is 1 + ( consecutive addition of all elements in sequence of ith row ) + 1  
traversing from 1st row to upto nth row 
 if the element is at index (i, j), then matrix[i][j] can be obtained by doing matrix[i – 1][j – 1] + matrix[i – 1][j].
TIme : O( N^2)    Space : O(1) ( no Extra Space is used ) 

$$$$$ Type 2 : rth row cth col number return  -> (r-1)C(c-1)   Time O(N) space O(1) 
$$$$  Type 3 : rth row : 1st -> 1 2nd -> 1 *( r / 1)  3rd -> 2nd term * ( r-1 / 1+1) 4th term  -> 3rd term * ( r-2 / 1+2) 


*/


vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i= 0 ; i < numRows ; ++i )
        {    ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;
            for( int j = 1 ;j < i ; ++j )
            {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }        return ans;
}

