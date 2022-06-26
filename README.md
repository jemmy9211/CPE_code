# CPE_code  

> 目前計畫在大學畢業前參加最後一次CPE  
> 這次會把題庫刷盡量刷完不想裸考  
--- 
**刷題計畫**   
source:  
[UVa online judge](https://onlinejudge.org/index.php?option=com_frontpage&Itemid=1)  
[CPE OneStar problem list](https://cpe.cse.nsysu.edu.tw/environment.php#starList)  
[codeforces](https://codeforces.com/)  
[leetcode](https://leetcode.com/)  

+ UVA12908 done
+ UVA10642 done
+ UVA13171 done  
+ UVA11360 done  
+ UVA11078 done   
+ UVA10050 done   
+ LEETCODE14 done 
+ LEETCODE21 done 
+ LEETCODE20 done 
+ LEETCODE70 done (DP) 
+ LEETCODE26 done   
+ LEETCODE83 done  

--- 
**STL常見用法筆記**  
+ vector 
``` C
#include<vector>

vector<int> vec;
vec.push_back();
vec.pop_back();
vec.insert();
vec.size();
vec[i];

```
+ stack
``` C
stack<char> stk;
stk.push('a');
stk.pop();
stk.empty();
stk.size();
stk.top();
```
+ getchar()
``` C
while(getchar()!='\n')
    ;//把\n吃掉

string s;
s[3]=getchar();
```

+ linked list
``` C
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 ListNode* list1;
 ListNode* list2;
 list1->next=list2;
 list1->val=list2->val;
```




