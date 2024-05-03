<h2><a href="https://www.geeksforgeeks.org/problems/max-rectangle/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article">Max rectangle</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary matrix <strong>M </strong>of size <strong>n X m</strong>. Find the maximum area of a rectangle formed only of <strong>1s</strong> in the given matrix. </span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 4, m = 4
M[][] = {{0 1 1 0},
         {1 1 1 1},
         {1 1 1 1},
         {1 1 0 0}}
<strong>Output: </strong>8<strong>
Explanation: </strong>For the above test case the
matrix will look like
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
the max size rectangle&nbsp;is&nbsp;
1 1 1 1
1 1 1 1
and area is 4 *2 = 8</span><span style="font-size: 18px;">.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;</strong><br>Your task is to complete the function <strong>maxArea</strong>&nbsp;which returns the maximum size rectangle area in a&nbsp;binary-sub-matrix with all 1’s. The function takes 3 arguments the first argument is&nbsp;the Matrix M[ ] [ ] and the next two are two&nbsp;integers n and m which denotes the size of the matrix M.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong> : O(n*m)<br><strong>Expected Auixiliary Space</strong> : O(m)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=n,m&lt;=1000<br>0&lt;=M[][]&lt;=1<br><br></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Directi</code>&nbsp;<code>Intuit</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Stack</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;