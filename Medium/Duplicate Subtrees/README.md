<h2><a href="https://www.geeksforgeeks.org/problems/duplicate-subtrees/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article">Duplicate Subtrees</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p>Given a binary tree of size <strong>N</strong>, your task is to that find&nbsp;all duplicate subtrees from the given binary tree.<br><br><strong>Note:</strong> Here's the Output of every Node printed in the Pre-Order tree traversal format. Arrange nodes in the answer array based on the lexicographically increasing order of their preorder traversal of subtree.<br>For Example: if we have 3 preorder traversal as {1,2,3},{1},{11,2,3} then your lexicographically increasing order is {1},{1,2,3},{11,2,3}, you are supposed to output the head of all these subtrees in the same order.<br><br><strong>Example:</strong></p>
<pre><strong>Input :</strong> <img style="height: 138px; width: 138px;" src="http://contribute.geeksforgeeks.org/wp-content/uploads/tree1-1.png" alt="">

<strong>Output : </strong>2 4
&nbsp;        4
<strong>Explanation: </strong>Above Trees are two 
duplicate subtrees.i.e <img style="height: 64px; width: 61px;" src="http://contribute.geeksforgeeks.org/wp-content/uploads/tree2-1.png" alt=""> and <img style="height: 33px; width: 49px;" src="http://contribute.geeksforgeeks.org/wp-content/uploads/tree3.png" alt="">
Therefore,you need to return above trees 
root in the form of a list.</pre>
<p><strong>Your Task:</strong><br>You don't need to take input. Just complete the function<strong> printAllDups() </strong>that takes the root <strong>node </strong>as a parameter and returns an array of Node*, which contains all the duplicate subtree.</p>
<p><br><strong>Constraints:</strong><br>1&lt;=T&lt;=100<br>1&lt;=N&lt;=100</p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;