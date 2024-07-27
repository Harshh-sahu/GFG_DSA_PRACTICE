<h2><a href="https://www.geeksforgeeks.org/problems/rotate-and-delete-1587115621/1">Rotate and delete</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a vector <strong>V</strong> of <strong>N</strong> integers. Do the following operation <strong>N-1</strong> times. For every <strong>k<sup>th</sup></strong> operation:</span></p>
<ul>
<li><span style="font-size: 18px;">Right, rotate the vector clockwise by <strong>1</strong>.</span></li>
<li><span style="font-size: 18px;">Delete the (<strong>N-k+1</strong>)<strong><sup>th</sup></strong>&nbsp;element.</span></li>
</ul>
<p><span style="font-size: 18px;">Now, find the element which is left at last.</span></p>
<p><span style="font-size: 18px;"><strong>Example1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
6
1 2 3 4 5 6</span>

<span style="font-size: 18px;"><strong>Output:</strong>
3</span>

<span style="font-size: 18px;"><strong>Explanation:
</strong></span><span style="font-size: 18px;">v = {1, 2, 3, 4, 5, 6}. Rotate the vector clockwise i.e. after rotation the vector v = {6, 1, 2, 3, 4, 5} and delete the last element that is {5} that will be v = {6, 1, 2, 3, 4}.
Again rotate the vector for the second time and deletes the second last element that is {2} that will be
v = {4, 6, 1, 3}, doing these steps when he reaches 4<sup>th</sup> time, 4<sup>th</sup> last element does not exist. Then he deletes 1<sup>st</sup> element ie {1} that will be v={3, 6}. So, continuing this procedure the last element in v is {3}.
So, the output will be 3.<br><br></span></pre>
<p style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: medium; white-space: normal;"><span style="font-size: 18px;"><strong>Example1:</strong></span></p>
<pre><strong>Input:
</strong>4
1 2 3 4

<strong>Output:</strong>
2

<strong>Explanation:
</strong>v = {1, 2, 3, 4}. Rotate the vector clockwise i.e. after rotation the vector v = {4, 1, 2, 3} and delete the last element that is {3} that will be v = {4, 1, 2}.
Similarly, the output will be 3.</pre>
<p><span style="font-size: 18px;"><strong>Your task:</strong><br>The task is to complete the function <strong>rotateDelete</strong>() which does operations as per the given query and return the left at the last element.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>1 &lt;= v[i] &lt;= 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;