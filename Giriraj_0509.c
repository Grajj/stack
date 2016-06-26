#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
	typedef struct{
	int top;
	int elements[MAXSIZE];
	}stack;
	void push (stack*, int);
	int pop  (stack*);
	int main ()
	{
		stack s;
		s.top = -1;
		push (&s,3);
		push (&s,2);
		push (&s,3);
		push (&s,2);
		push (&s,3);
		
		printf("%d",pop(&s));
	}
	void push (stack *s, int x){
	if (s->top == MAXSIZE - 1)
	{
		printf("OVERFLOWN");
		
	}
	else
	{
	s->elements[++(s->top)]=x;
	}}
	int pop(stack *s){
	if (s->top == -1)
	{
		printf("UNDERFLOWN");
		
	}
	else
	{
	return(s->elements[(s->top)--]);
	}
}
