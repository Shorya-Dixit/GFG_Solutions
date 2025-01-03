<h2><a href="https://www.geeksforgeeks.org/problems/convert-min-heap-to-max-heap-1666385109/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=convert-min-heap-to-max-heap">Convert Min Heap to Max Heap</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an array <strong>arr</strong> of <strong>N</strong> integers representing&nbsp;a min Heap. The task is to convert it to max Heap.</span></p>
<p><span style="font-size: 18px;">A max-heap&nbsp;is a complete binary tree in which the value in each internal node is greater than or equal to the values in the children of that node.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1</strong>:</span></p>
<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size: 18px;"><strong>Input</strong>:
N = 4
arr = [1, 2, 3, 4]
<strong>Output</strong>:
</span><span style="font-size: 18px;">[4, 2, 3, 1]<strong>
Explanation</strong>:</span>

<span style="font-size: 18px;">The given min Heap:</span>

<span style="font-size: 18px;">          1
        /   \
      2       3
     /
   4</span>

<span style="font-size: 18px;">Max Heap after conversion:</span>

<span style="font-size: 18px;">         4
       /   \
      2     3
    /
   1</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copy.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button></div></div>
<p><span style="font-size: 18px;"><strong>Example 2</strong>:</span></p>
<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size: 18px;"><strong>Input</strong>:
N = 5
arr = [3, 4, 8, 11, 13]
<strong>Output</strong>:
<strong>[</strong>13, 11, 8, 3, 4]</span><span style="font-size: 18px;"><strong>
Explanation</strong>:</span>

<span style="font-size: 18px;">The given min Heap:</span>

<span style="font-size: 18px;">          3
        /   \
      4      8
    /   \ 
  11     13</span>

<span style="font-size: 18px;">Max Heap after conversion:</span>

<span style="font-size: 18px;">          13
        /    \
      11      8
    /   \ 
   3     4</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copy.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button></div></div>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Complete the function int <strong>convertMinToMaxHeap</strong>(), which takes integer N and array represented minheap as input and converts it to the array representing maxheap. You don't need to return or print anything, modify the original array itself.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: Only an unique solution is possible under the expected time complexity.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(N * log N)<br><strong>Expected Auxiliary Space</strong>: O(N)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong></span></p>
<p><span style="font-size: 18px;">1 &lt;= N &lt;= 10<sup>5</sup><br>1 &lt;= arr[i] &lt;= 10<sup>9</sup></span></p></div>