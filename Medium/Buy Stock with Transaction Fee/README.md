<h2><a href="https://www.geeksforgeeks.org/problems/buy-stock-with-transaction-fee/1">Buy Stock with Transaction Fee</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an array&nbsp;<code>prices</code>&nbsp;where&nbsp;<code>prices[i]</code>&nbsp;is the price of a given stock on the&nbsp;<code>i<sup>th</sup></code>&nbsp;day, and an integer&nbsp;<code>fee</code>&nbsp;representing a transaction fee.</span></p>
<p><span style="font-size: 18px;">Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong>&nbsp;You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).<br><br><strong>Example 1:</strong></span></p>
<pre><strong><span style="font-size: 18px;">
Input:
</span></strong><span style="font-size: 18px;">n = 6
prices = [1,3,2,8,4,9]
fee = 2
<strong>Output:
</strong>8
<strong>Explanation:</strong></span>
<span style="font-size: 18px;">The maximum profit can be achieved by:
- Buying at prices[0] = 1
- Selling at prices[3] = 8
- Buying at prices[4] = 4
- Selling at prices[5] = 9
The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.<br></span></pre>
<p style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;"><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><strong>
Input:
</strong>n = 8
prices = [81,100,52 52,54,54,31,51]
fee = 3
<strong>Output:
</strong>33</pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:<br></strong>You don't have to read input or print anything. Your task is to complete the function <strong>maximumProfit</strong>() which takes the integer n and array prices and transaction fee and returns the maximum profit that can earn.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Expected Space Complexity: </strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraint:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup></span><br><span style="font-size: 18px;">1 &lt;= prices[i] &lt;=10<sup>5&nbsp;</sup><br>0 &lt;= fee &lt;= 10<sup>5</sup></span></p>
<p>&nbsp;</p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Algorithms</code>&nbsp;