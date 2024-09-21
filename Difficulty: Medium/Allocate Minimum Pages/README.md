<h2><a href="https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1">Allocate Minimum Pages</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You have <strong>n </strong>books, each with <strong>arr[i]</strong> a number of pages. <strong>m </strong>students need to be allocated contiguous books, with each student getting at least one book. <br>Out of all the permutations, the goal is to find the permutation where the sum of the <strong>maximum number of pages in a book</strong> allotted to a student <strong>should be</strong> the&nbsp;<strong>minimum</strong>, out of all possible permutations.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: Return <strong>-1</strong> if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 4, arr[] = [12, 34, 67, 90], m = 2
<strong>Output: </strong>113
<strong>Explanation: </strong>Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113, which is selected as the output.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 3, arr[] = [15, 17, 20], m = 5
<strong>Output: </strong>-1
<strong>Explanation: </strong>Allocation can not be done.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(n logn)<br><strong>Expected Auxilliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;=&nbsp; n, m &lt;= 10<sup>5</sup><br>1 &lt;= arr[i] &lt;= 10<sup>6&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Infosys</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<code>Codenation</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Algorithms</code>&nbsp;