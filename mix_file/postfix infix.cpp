#include <stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int top=10;
struct node{
	char ch;
	struct node *prev;
	struct node *next;
}*stack[11];
typedef struct node node;
void push(node*str){
	if(top<=0)
		printf("stack penuh");
		
	else{stack[top]=str;
	top--;
	}
}

node*pop()
{
	node*exp;
		if(top>=10)
		printf("stack kosong");
		
	else{exp=stack[++top]; return exp;
	}
	
}

void ubah(char exp[]){
	node*op1, *op2;
	node *temp;
	int i;
	for(i=0; exp[i]!='\0';i++)
		if(exp[i]>='a'&& exp[i]<='z' || exp[i]>='A'&& exp[i]<='Z' ){
			temp=(node*)malloc(sizeof(node));
			temp->ch=exp[i];
			temp->next=NULL;
				temp->prev=NULL;
				push(temp);
		}
		else if(exp[i]=='+'&& exp[i]=='-' || exp[i]=='*'&& exp[i]=='/' || exp[i]=='^' ){
			op1=pop();
			op2=pop();
			
			temp=(node*)malloc(sizeof(node));
			temp->ch=exp[i];
			temp->next=op1;
				temp->prev=op2;
				push(temp);
		}
}

void tampil(node*temp){
	if(temp!=NULL){
		tampil(temp->prev);
		printf("%c", temp->ch);
		tampil(temp->next);
	}
}

int main(){
	char exp[50];
	printf("program ubah ppostfix ke infix");
	printf("masukkan notasi postfix \n");
	scanf("%s",exp);
	ubah(exp);
	printf("notasi infix:\n");
	tampil(pop());
	printf("\n\n");
	getch();
}
