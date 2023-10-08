
int totalnodes(struct node *head){
        
        int ans=0;
        while(head!=NULL){
            ans++;
            head=head->next;
        }
        
        return ans;
        
    }
    
    
    node *kreverse(struct node *head,int k){
        
        node *prev=NULL;
        node *curr=head;
        node *forw=NULL;
        
        int count=1;
        
        while(count<k){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
            count++;
        }
        
        return curr;
        
    }
    