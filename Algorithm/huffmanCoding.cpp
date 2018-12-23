#include <bits/stdc++.h> 
using namespace std; 
string code[100];
struct MinHeapNode { 
    char data; 
    unsigned freq; 
    MinHeapNode *left, *right;  
    MinHeapNode(char data, unsigned freq) 
    { 
        left = right = NULL; 
        this->data = data; 
        this->freq = freq; 
    } 
}; 
  
struct compare { 
    bool operator()(MinHeapNode* l, MinHeapNode* r) 
    { 
        return (l->freq > r->freq); 
    } 
}; 
  
void printCodes(struct MinHeapNode* root, string str) 
{ 
    if (!root) 
        return; 
    if (root->data != '$') 
        code[root->data - 48] = str;
    printCodes(root->left, str + "0"); 
    printCodes(root->right, str + "1"); 
} 
  
void HuffmanCodes(char data[], int freq[], int size) 
{ 
    struct MinHeapNode *left, *right, *top; 
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap; 
    for (int i = 0; i < size; ++i) 
        minHeap.push(new MinHeapNode(data[i], freq[i])); 
  
    while (minHeap.size() != 1) { 
        left = minHeap.top(); 
        minHeap.pop(); 
  
        right = minHeap.top(); 
        minHeap.pop(); 
  
        top = new MinHeapNode('$', left->freq + right->freq); 
  
        top->left = left; 
        top->right = right; 
  
        minHeap.push(top); 
    } 
  
    printCodes(minHeap.top(), ""); 
} 
  
int main() 
{ 
  
	int n = 0;
	scanf("%d",&n);
    int *freq = new int(n);
  	char *arr = new char(n);
	for(int a = 0;a < n; a++)
	{
		arr[a] = 48 + a;
	}
	for(int a = 0;a < n; a++)
	{
		scanf(" %d",&freq[a]);
	}
//	code = new string(n);
  	
    HuffmanCodes(arr, freq, n); 
	cout << n << endl << code[0];
    for(int a = 1; a < n;a++){
    	cout << " " << code[a];
	}
  	
  	delete [] freq;
    return 0; 
} 
