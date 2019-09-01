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
		last=p; //保留倒数第一个 
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
