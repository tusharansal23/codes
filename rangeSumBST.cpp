#include<bits/stdc++.h>
using namespace std;
// Topic--------Creation of a tree according to the user's choice for better understanding and determining the flow of program
struct tree{
	int data;
	tree *right;
	tree *left;
};
tree* create(int n){
	tree *temp=new tree;
	temp->left=NULL;
	temp->right=NULL;
	temp->data=n;
	return temp;
}
tree* insert(tree *root,int n){
	char ch;
	if(root==NULL){
		return create(n);// Currently there is no element so directly create ,insert anode and return its address
	}
	else{
		cout<<"where you want to insert left or right for left press l and for right press r"<<endl;
		x:cin>>ch;
		if(ch=='l'){
			if(root->left==NULL){
				root->left=create(n);
				return root->left;
			}
			else{
				root=root->left;
				cout<<"Space is occupied again enter left or right i.e l or r to provide an unoccupied position to the element"<<endl;
				goto x;
			}
		}
		else if(ch=='r'){
			if(root->right==NULL){
				root->right=create(n);
				return root->right;
			}
			else{
				root=root->right;
				cout<<"Space is occupied enter again left or right i.e l or r to provide an unoccupied position to the element"<<endl;
				goto x;
			}
		}
	}
}
preorder(tree *root){
	if(root){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

 int rangeSumBST(tree *root, int L, int R) {
        int sum=0;
        if(root==NULL)
        return 0;
        else{
            if(root->data>=L && root->data<=R){
             sum+=(root->data);
            }
       return (sum+rangeSumBST(root->left,L,R)+
            rangeSumBST(root->right,L,R));
                
        }
    }

int main(){
	tree *root=NULL,*ptr=NULL;
	int n,temp,l,u;
	char ch;
	cout<<"Enter how many numbers you have to enter"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter number"<<endl;
		cin>>temp;
	root=insert(ptr,temp);
	if(i==0){
		ptr=root;
	}
	}
	cout<<"Pre-order Traversal of the tree will be"<<endl;
		preorder(ptr);
		cout<<endl;
	cout<<"To count the sum of elements between a range enter lower range and upper range if you want to continue press y for yes else n for no"<<endl;
	cin>>ch;
	if(ch=='y')
	cout<<"enter lower range"<<endl;
	cin>>l;
	cout<<"enter upper range"<<endl;
	cin>>u;
	cout<<rangeSumBST(ptr,l,u)<<endl;
	
	

}
