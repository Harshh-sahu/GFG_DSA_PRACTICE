<h2><a href="https://www.geeksforgeeks.org/problems/queue-using-stack/1?page=1&category=Queue&difficulty=Easy&sortBy=submissions">Queue using stack</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Implement a Queue&nbsp;using two stack</span><span style="font-size: 18px;"><strong>&nbsp;s1</strong>&nbsp;and<strong>&nbsp;s2</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>enqueue(2)
enqueue(3)
dequeue()
enqueue(4)
dequeue()<strong>
Output: </strong>2 3
<strong>Explanation:
</strong>enqueue(2) the queue will be {2}
enqueue(3) the queue will be {2, 3}
dequeue() the poped element will be <strong>2</strong>&nbsp;
the queue will be {3}
enqueue(4) the queue will be {3, 4}
dequeue() the poped element will be <strong>3</strong>. &nbsp;
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>enqueue(2)
dequeue()
dequeue()<strong>
Output: </strong>2 -1</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span></p>
<p><span style="font-size: 18px;">Since this is a function problem, you don't need to take inputs. You are required to complete the two methods&nbsp;<strong>enqueue</strong><strong>()</strong>&nbsp;which takes&nbsp;an integer <strong>'x'</strong>&nbsp;as input&nbsp;denoting the element to be pushed into the queue&nbsp;and <strong>dequeue</strong><strong>()</strong>&nbsp;which returns the&nbsp;integer&nbsp;poped out from the queue.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(1) for&nbsp;<strong>enqueue</strong><strong>()&nbsp;</strong>and O(n) for <strong>dequeue</strong><strong>()</strong><br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1) for both&nbsp;<strong>enqueue</strong><strong>()&nbsp;</strong>and <strong>dequeue</strong><strong>()</strong></span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;=<strong>&nbsp;</strong>Number of queries&nbsp;&lt;= 100<br>1 &lt;= values of the stack&nbsp;&lt;= 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Queue</code>&nbsp;<code>Design-Pattern</code>&nbsp;<code>Data Structures</code>&nbsp;