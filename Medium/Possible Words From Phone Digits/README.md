<h2><a href="https://www.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1">Possible Words From Phone Digits</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a keypad as shown in the diagram, and an <strong>N </strong>digit number which is represented by array <strong>a[ ]</strong>, the task is to list all words which are possible by pressing these numbers.</span><br><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701199/Web/Other/a1d54f48-0118-45d8-a8ab-7551ed72df27_1685086793.png" alt=""></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>N = 3, a[] = {2, 3, 4}
<strong>Output:
</strong>adg adh adi aeg aeh aei afg afh afi 
bdg bdh bdi beg beh bei bfg bfh bfi 
cdg cdh cdi ceg ceh cei cfg cfh cfi 
<strong>Explanation: </strong>When we press 2,3,4 then 
adg, adh, adi, ... cfi are the list of 
possible words.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>N = 3, a[] = {3, 4, 5}
<strong>Output:
</strong>dgj dgk dgl dhj dhk dhl dij dik dil 
egj egk egl ehj ehk ehl eij eik eil 
fgj fgk fgl fhj fhk fhl fij fik fil<strong>
Explanation: </strong>When we press 3,4,5 then 
dgj, dgk, dgl, ... fil are the list of 
possible words.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything.&nbsp;You just need to complete the function <strong>possibleWords()&nbsp;</strong>that takes an array<strong> </strong><strong>a[ ]</strong> and <strong>N</strong> as input&nbsp;parameters<strong> </strong>and returns an array of&nbsp;all the possible words in <strong>lexicographical increasing order</strong>.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(4<sup>N</sup></span><span style="font-size: 18px;"><sup>&nbsp;</sup>* N).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<br>2 ≤ a[i] ≤ 9</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Strings</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Recursion</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;