<h2><a href="https://www.geeksforgeeks.org/problems/drive-the-car2541/1">Drive the car</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Suppose you are a car driver and you have to drive a car on a track divided into "<strong>N</strong>" number of sub-tracks. You are also given the value of "<strong>K</strong>" i.e. the total kilometers the car can drive on each sub-track. If the car can't cover a sub-track, you can add any unit of Petrol to it. With each unit of petrol added, the total kilometers your car can travel will increase by one unit. You have to <strong>return the minimum unit of Petrol </strong>that if added to your car at each sub-tracks your car will be able to cover all the sub-tracks. If no extra unit of petrol is required, return <strong>-1</strong>.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 5, K = 7
arr[] = {2, 5, 4, 5, 2}
<strong>Output:</strong>
-1</span>
<span style="font-size: 18px;"><strong>Explanation:
</strong>No extra petrol required, as K is greater
than all the elemnts in the array hence <strong>-1</strong>.</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 5, K = 4
arr[] = {1, 6, 3, 5, 2}
<strong>Output:</strong>
2</span>
<span style="font-size: 18px;"><strong>Explanation:</strong>
You are given 5 sub-tracks with different
kilometers. Your car can travel 4 km on
each sub-track. So, when you come on
sub-track 2nd you have to cover 6 km of
distance, so you need to have 2 unit of
petrol more to cover the distance, for
3rd sub-track, your car can travel 4km <br>and you need extra 1 unit of pertrol.So<br>if you add 2 units of petrol at each sub-track<br>you can cover all the subtracks.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>required()</strong>&nbsp;which takes the array <strong>arr[]</strong>, its size <strong>n </strong>and an integer <strong>k </strong>as inputs and returns the minimum unit of Petrol<strong> </strong>your car requires to cover all the sub-tracks. If no extra unit of petrol is required, return <strong>-1</strong>.</span><br><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N)<br><strong>Expected Auxiliary Space:</strong> O(1)<br><br><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>5</sup></span><br><span style="font-size: 18px;">1 ≤ K ≤ 10<sup>18</sup><br>1 ≤ A[] ≤ 10<sup>18</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;