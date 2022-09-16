#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct medol
{
	char name[21];
	int jin;
	int yin;
	int tong;
	struct medol *next;
};
struct medol *myhead = NULL;
void printdata();
int my_sort(char *name, int ji, int yi, int to, int len)
{
	int i=0;
	struct medol *p=NULL, *q=NULL, *tmp=NULL;
	if(myhead == NULL)
		return -1;
	if(len == 0)
	{
		myhead->next = (struct medol*)malloc(sizeof(struct medol));
		if(myhead->next != NULL)
		{
			memcpy(myhead->next->name, name, 21);
			myhead->next->jin = ji;
			myhead->next->yin = yi;
			myhead->next->tong = to;
			myhead->next->next = NULL;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		
		if(myhead->next == NULL)
			return -1;
			
		p = myhead->next;
		tmp = (struct medol*)malloc(sizeof(struct medol));
		if(tmp != NULL)
		{
			memcpy(tmp->name, name, 21);
			tmp->jin = ji;
			tmp->yin = yi;
			tmp->tong = to;
			tmp->next = NULL;
		}
		else
			return -1;
			
		for(i=0; i< len+1; i++)
		{
 
			if(p != NULL)
			{
				if(ji > p->jin
					|| (ji == p->jin && yi > p->yin)
					|| (ji == p->jin && yi == p->yin && to > p->tong)
					|| (ji == p->jin && yi == p->yin && to == p->tong && strcmp(name, p->name) < 0)
				)
				{
					if(p == myhead->next)
					{
						tmp->next = p;
						myhead->next = tmp;
						
					}
					else
					{
						tmp->next = p;
						q->next = tmp;
					}
					break;
				}
				else
				{
					q = p;
					p = p->next;
				}
			}
			else
			{
				q->next = tmp;
				break;
			}
		}
	}
	return 0;
}
 
void printdata()
{
	
	struct medol *p=NULL;
	if(myhead == NULL)
		return;
	p = myhead->next;
	while(p)
	{
		printf("%s\n", p->name);
		p = p->next;
	}
}
void freedata()
{
	struct medol *p=NULL, *q=NULL;
	if(myhead == NULL)
		return;
	p=q=myhead->next;
	while(p)
	{
		q = p->next;
		free(p);
		p = NULL;
		p = q;
	}
 
	free(myhead);
	myhead = NULL;
}
int main()
{ 
	int country_num = 0;
	char c_name[21]={0};
	int tmj=0, tmy=0, tmt=0;
	int i=0;
 
	scanf("%d", &country_num);
	if(country_num > 0 && country_num < 21)
	{
		
		myhead = (struct medol*)malloc(sizeof(struct medol));
		if(myhead == NULL)
			return 1;
		myhead->next = NULL;
		
		for(i=0; i<country_num; i++)
		{
			scanf("%s %d %d %d", c_name, &tmj, &tmy, &tmt);
			my_sort(c_name, tmj, tmy, tmt, i);
		}
		printdata();
		freedata();
	}
    return 0;
}