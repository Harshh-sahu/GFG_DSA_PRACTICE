<h2><a href="https://www.geeksforgeeks.org/problems/smaller-on-left20360700/1">Smaller on Left</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr</strong>[ ] of <strong>N</strong> positive integers,&nbsp;the task is to find the greatest element on the left of every element in the array which is strictly smaller than itself, if this element does not exist for an index print "-1".</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5
arr[] = {2, 3, 4, 5, 1}
<strong>Output: 
</strong>-1 2 3 4 -1
<strong>Explanation:</strong>
Greatest element on the left of 3 smaller 
than itself is 2, for 4 it is 3 and for 5 
it is 1. Since 2 is the first element and 
no element on its left is present, so it's 
greatest smaller element will be -1 and for 
1 no element smaller than itself is present 
on its left, so it's greatest smaller element 
is -1.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 3
arr[] = {1, 2, 3} <strong>
Output:
</strong>-1 1 2 </span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>Smallestonleft()</strong> that takes an array <strong>arr[ ]&nbsp;</strong>and&nbsp;sizeOfArray <strong>N</strong>, and return the required answer. The driver code takes care of the printing.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N*Log(N)).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤&nbsp;10<sup>6</sup><br>1 ≤&nbsp;arr[i] ≤&nbsp;10<sup>8</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>set</code>&nbsp;<code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Map</code>&nbsp;<code>Data Structures</code>&nbsp;