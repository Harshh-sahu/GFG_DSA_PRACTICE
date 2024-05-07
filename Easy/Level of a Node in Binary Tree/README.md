<h2><a href="https://www.geeksforgeeks.org/problems/level-of-a-node-in-binary-tree/1?page=3&category=Tree&difficulty=Basic,Easy&sortBy=submissions">Level of a Node in Binary Tree</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px">Given a Binary Tree and a target key you need to find the level of target key in the given Binary Tree.</span></p>

<p><span style="font-size:20px"><strong>Note:</strong>&nbsp;The level of the root node is 1.</span></p>

<pre><span style="font-size:20px">&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 3
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; / &nbsp; \
&nbsp; &nbsp; &nbsp; &nbsp; 2 &nbsp; &nbsp; 5
&nbsp; &nbsp; &nbsp; / &nbsp; \
&nbsp;&nbsp; &nbsp; 1 &nbsp; &nbsp; 4
Key: 4
Level: 3&nbsp;&nbsp;</span></pre>

<p><span style="font-size:20px"><strong>Note:</strong> if no such key exists then return 0.</span></p>

<p><span style="font-size:20px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input:
&nbsp;       </strong>1
&nbsp;     /   \
&nbsp;    2     3
target = 4<strong>
Output: </strong>0<strong>
</strong></span>
</pre>

<p><span style="font-size:20px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input:</strong></span>
<span style="font-size:18px">&nbsp;        3
&nbsp;      /   \
&nbsp;     2     5
&nbsp;   /   \
&nbsp;  1     4</span><span style="font-size:20px"><strong>
</strong>target = 4<strong>
Output: </strong>3</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">&nbsp;You don't have to take input. Just complete the <strong>function getLevel()&nbsp;</strong>that takes <strong>a node and a target </strong>as <strong>parameters </strong>and returns&nbsp;the level of the target value.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(H).<br>
<strong>Note:</strong> H is the height of the tree and this space is used implicitly for recursion stack.</span></p>

<p><span style="font-size:20px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= Number of nodes&lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">1 &lt;= Data of a node&lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">1 &lt;= Target &lt;= 10<sup>5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;