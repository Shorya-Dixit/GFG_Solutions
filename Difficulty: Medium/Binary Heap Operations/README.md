<h2><a href="https://www.geeksforgeeks.org/problems/operations-on-binary-min-heap/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=operations-on-binary-min-heap">Binary Heap Operations</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A <strong>binary heap</strong> is a Binary Tree with the following properties:<br>
<strong>1)</strong> Its a <em>complete tree</em><strong> </strong>(All levels are completely filled except possibly the last level and the last level has all keys as left as possible). This property of Binary Heap makes them suitable to be stored in an array.</span></p>

<p><span style="font-size:18px"><strong>2)</strong> A Binary Heap is either <strong>Min Heap</strong> or <strong>Max Heap</strong>. In a <em>Min Binary Heap</em>, the key at the&nbsp;<em>root</em> must be <em>minimum</em><strong> </strong>among all keys present in Binary Heap. The same property must be recursively true for all nodes in Binary Tree. Max Binary Heap is similar to MinHeap.</span></p>

<p><span style="font-size:18px">You are given an empty Binary Min Heap and some queries and your task is to implement the three methods <strong>insertKey, &nbsp;deleteKey, </strong>&nbsp;and&nbsp;<strong>extractMin </strong>on&nbsp;the Binary Min Heap and call them as per the query given below:<br>
<strong>1) </strong><em>1 &nbsp;x</em> &nbsp;(a query of this type means to insert an element in the min-heap with value x&nbsp;)<br>
<strong>2)</strong> <em>2 &nbsp;x</em> &nbsp;(a query of this type means to remove an element at position x from the min-heap)<br>
<strong>3)</strong><strong> </strong><em>3</em> &nbsp;(a query like this removes&nbsp;the min element from the min-heap and prints it&nbsp;).</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input:
</strong>Q = 7
<strong>Queries:</strong>
insertKey(4)
insertKey(2)
extractMin()
insertKey(6)
deleteKey(0)
extractMin()
extractMin()
<strong>Output: </strong>2 6 - 1<strong>
Explanation: </strong>In the first test case for
query&nbsp;
insertKey(4) the heap will have &nbsp;{4}&nbsp;&nbsp;
insertKey(2) the heap will be {2 4}
extractMin()&nbsp;removes min element from 
&nbsp;            heap ie 2 and prints it
&nbsp;            now heap is {4}&nbsp;
insertKey(6)&nbsp;inserts 6 to heap now heap
&nbsp;            is {4 6}
deleteKey(0)&nbsp;delete element at position 0
             of the heap,now heap is {6}
extractMin() remove min element from heap
             ie 6 and prints it&nbsp;&nbsp;now the
&nbsp;            heap is empty
extractMin() since the heap is empty thus
             no min element exist so -1
&nbsp;            is printed.</span>
</pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copy.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button></div></div>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input:
</strong>Q = 5
Queries:
insertKey(8)
insertKey(9)
deleteKey(1)
extractMin()
extractMin()
<strong>Output: </strong>8 -1</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copy.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button></div></div>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You are required to complete the 3 methods <strong>insertKey()</strong> which take one argument the value to be inserted, <strong>deleteKey()</strong> which takes one argument the position from where the element is to be deleted and <strong>extractMin()</strong> which returns the minimum element in the heap(-1 if the heap is empty)</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Q*Log(size of Heap) ).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= <strong>Q</strong> &lt;= 10<sup>4</sup><br>
1 &lt;= <strong>x</strong> &lt;= 10<sup>4</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Walmart</code>&nbsp;<code>Synopsys</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Heap</code>&nbsp;<code>Design-Pattern</code>&nbsp;<code>Data Structures</code>&nbsp;