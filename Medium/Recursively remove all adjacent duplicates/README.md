<h2><a href="https://www.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates0744/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article">Recursively remove all adjacent duplicates</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string s, remove all its adjacent duplicate characters recursively.&nbsp;<br><br><strong>Note:</strong> For some test cases, the resultant string would be an <strong>empty</strong> string. In that case, the function should return the empty string only.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
S = "geeksforgeek"
<strong>Output:</strong> "gksforgk"
<strong>Explanation: </strong>
g(ee)ksforg(ee)k -&gt; gksforgk</span></pre>
<p><br><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: 
</strong>S = "abccbccba"
<strong>Output:</strong> ""
<strong>Explanation: 
</strong>ab(cc)b(cc)ba-&gt;abbba-&gt;a(bbb)a-&gt;aa-&gt;(aa)-&gt;""(empty string)</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>rremove()</strong> which takes the string S as input parameter and returns the resultant string.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(|S|)<br><strong>Expected Auxiliary Space:</strong> O(|S|)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=|S|&lt;=10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Recursion</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;