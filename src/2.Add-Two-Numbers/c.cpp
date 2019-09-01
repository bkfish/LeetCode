/*给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例：
```
输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
```*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	if(l1==NULL)
	return l2;
	if(l2==NULL)
	return l1;
	struct ListNode *p1=l1,*p2=l2;
	struct ListNode *ans=(struct ListNode *)malloc(sizeof(struct ListNode));
	ans->next=NULL;
	struct ListNode *p=ans,*last=NULL,*t=NULL;
	int sum=0;
	while(1)
	{
		if(p1&&p2)
		{
			sum+=p1->val+p2->val;
			p1=p1->next;
			p2=p2->next;
		}
		else if(p1 &&(p2==NULL))
		{
			sum+=p1->val;
			p1=p1->next;
		}
		else if((p1==NULL)&&p2)
		{
			sum+=p2->val;
			p2=p2->next;
		}
		else {
			break;
		}
		p->val=sum%10;
		sum/=10;
		t=(struct ListNode*)malloc(sizeof(struct ListNode));
		t->next=NULL;
		p->next=t;
		last=p;
		p=t;
	}
	if(sum!=0){
		t->val=sum;
	} 
	else{
		free(t);
		last->next=NULL;
	}
	return ans;
}
