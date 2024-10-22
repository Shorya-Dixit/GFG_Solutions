<h2><a href="https://www.geeksforgeeks.org/problems/prime-factorization-using-sieve/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prime-factorization-using-sieve">Prime Factorization using Sieve</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p dir="ltr"><span style="font-size: 18px;">You are given a positive number N. Using the concept of Sieve, compute its prime factorisation.</span></p>
<p dir="ltr"><strong><span style="font-size: 18px;">Example:</span></strong></p>
<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><strong><span style="font-size: 18px;">Input: </span></strong>
<span style="font-size: 18px;">N = 12246</span>
<strong><span style="font-size: 18px;">Output: </span></strong>
<span style="font-size: 18px;">2 3 13 157</span>
<strong><span style="font-size: 18px;">Explanation: </span></strong>
<span style="font-size: 18px;">2*3*13*157 = 12246 = N.
</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copy.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button></div></div>
<p dir="ltr"><strong><span style="font-size: 18px;">Your Task:</span></strong></p>
<p dir="ltr"><span style="font-size: 18px;">Comple the function <strong>findPrimeFactors</strong>(), which takes a positive number N as input and returns a vector consisting of prime factors. You should implement Sieve algorithm to solve this problem.</span></p>
<p>&nbsp;</p>
<p dir="ltr"><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(Nlog(log(N)).</span></p>
<p dir="ltr"><span style="font-size: 18px;"><strong>Expected Auxiliary Space:</strong> O(N).</span></p>
<p dir="ltr"><strong><span style="font-size: 18px;">Constraints:</span></strong></p>
<p dir="ltr"><span style="font-size: 18px;">2&lt;=N&lt;=2*10<sup>5</sup></span></p>
<p>&nbsp;</p></div>