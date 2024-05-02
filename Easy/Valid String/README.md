<h2><a href="https://www.geeksforgeeks.org/problems/valid-string/0">Valid String</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given binary string <strong>str</strong> of size <strong>N</strong> the task is to check if the given string is valid or not. A string is called valid if the number of <strong>0's</strong> equals the number of <strong>1's</strong> and at any moment starting from the left of the string number <strong>0's</strong> must be greater than or equals to the number of <strong>1's</strong>. </span></p>

<p><span style="font-size:18px"><strong>Input: </strong><br>
1. The first line of the input contains a single integer<em> </em> <strong>T</strong> denoting the number of test cases. The description of&nbsp;<strong>T</strong> test cases follows.<br>
2. The first line of each test case contains a single integer<strong> N</strong><strong>.</strong><br>
3. The next line contains a binary string without spaces.</span></p>

<p><br>
<span style="font-size:18px"><strong>Output:</strong> For each test case, print<strong> </strong><strong>"yes"</strong> if string is valid. Otherwise, print <strong>"no"</strong> (without quotes)<br>
<br>
<strong>Constraints:</strong><br>
1. 1 &lt;= T &lt;= 100</span><br>
<span style="font-size:18px">2. </span><span style="font-size:18px">1 &lt;= N &lt;= 10<sup>4</sup><br>
3. '0' &lt;= str[i] &lt;= '1'</span><br>
<br>
<span style="font-size:18px"><strong>Example:<br>
Input:</strong></span><br>
<span style="font-size:18px">2</span><br>
<span style="font-size:18px">4<br>
0011<br>
3<br>
001</span></p>

<p><strong><span style="font-size:18px">Output:</span></strong><br>
<span style="font-size:18px">yes<br>
no<br>
<br>
<strong>Explanation:</strong><br>
<strong>Test Case 1:</strong> String has an equal number of ones and zeros and at each index(starting from left) the number of occurrences of <strong>0's</strong> is greater than or equals to the&nbsp;number of occurrences <strong>1's</strong>.</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;