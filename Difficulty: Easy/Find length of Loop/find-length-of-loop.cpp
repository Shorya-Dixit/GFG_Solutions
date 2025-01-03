//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void loopHere(Node *head, Node *tail, int position) {
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution{
public:
  //Function to find the length of a loop in the linked list using brute force approach.
  int countNodesinLoop(Node* head)
  {
      Node* current = head;
      unordered_set<Node*> visited;

      // Iterating through the linked list
      while (current != NULL) {
          // checking if the current node is already visited
          if (visited.find(current) != visited.end()) {
              // if yes, then it means there is a loop
              // counting the number of nodes in the loop
              int count = 1;
              Node* temp = current->next;
              while (temp != current) {
                  count++;
                  temp = temp->next;
              }
              return count;
          }
          // if not visited, adding it to the set
          visited.insert(current);
          current = current->next;
      }
      //if there is no loop, return 0
      return 0;
  }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        loopHere(head, tail, k);

        Solution ob;
        cout << ob.countNodesinLoop(head) << endl;
    }
    return 0;
}

// } Driver Code Ends