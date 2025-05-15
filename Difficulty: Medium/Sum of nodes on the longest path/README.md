<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1">Sum of nodes on the longest path</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary tree <strong>root</strong>, you need to find the sum of the nodes on the longest path from the root to any leaf node. If two or more paths have the same length, the path with the maximum sum of node values should be considered.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> root[] = [4, 2, 5, 7, 1, 1, 2, 3, N, 6]<br> <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700680/Web/Other/blobid0_1733503356.jpg" width="309" height="276">
<strong>Output:</strong> 13
<strong>Explanation:</strong>
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700680/Web/Other/blobid1_1733503411.jpg" width="309" height="276"><br>The highlighted nodes <strong>(4, 2, 1, 6)</strong> above are part of the longest root to leaf path having sum = (4 + 2 + 1 + 6) = 13</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root[] = [1, 2, 3, 4, 5, 6, 7]
&nbsp;         1
&nbsp;       /   \
&nbsp;      2     3
&nbsp;     / \   / \
&nbsp;    4   5 6   7
<strong>Output: </strong>11<br><strong>Explanation: </strong>Use path 1-&gt;3-&gt;7, with sum 11.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root[] = [10, 5, 15, 3, 7, N, 20, 1]
          10
        /    \
       5      15
      / \       \
     3   7       20
    /
   1
<strong>Output: </strong>19<br><strong>Explanation: </strong>The longest root-to-leaf path is <code>10 -&gt; 5 -&gt; 3 -&gt; 1</code> with a sum of <code>10 + 5 + 3 + 1 = 19</code>.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= number of nodes &lt;= 10<sup>6</sup><br>0 &lt;= data of each node &lt;= 10<sup>4</sup><br></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Traversal</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;