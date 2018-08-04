#include <iostream>
#include <vector>
using namespace std;
void initial (int);
void pile_over (int,int);
int  blocks[30][30];
int place[30],top[30];
int main()
{	
	int num = 0;	
	scanf("%d", &num);	
	for(int i = 0; i < 30; i++)
	{
		blocks[i][0] = i;		
		place[i] = i;
		top[i] = 0;
	}
//	string input, adv; stop using string!!
//	Use char[];
	char verb[5],adv[5];
	int a,b;
		
	while((scanf(" %s",verb))&&(verb[0] != 'q'))
	{	
	    scanf("%d%s%d",&a,adv,&b);
		
		if(place[a] == place[b]){
			continue;
		}
			
		if(verb[0] == 'm'){
			if(top[place[a]]!=-1){
				initial(a);	
			}		
		}	
		if(adv[1] == 'n')
		{
			if(top[place[b]]!=-1)
			{
				initial(b);
			}				
		}		
		pile_over(a,b);
	}	
	
	for(int i = 0; i < num; i++)
	{
		cout << i << ":";
		for(int j = 0; j < top[i] + 1; j++){
			cout  <<  " " << blocks[i][j] ;
		}			
		cout << endl;
	}
	return 0;
} 
void initial (int a)
{
	int temptblock,id = place[a];	
	while(blocks[id][top[place[id]]]!= a)
	{		
		temptblock = blocks[place[a]][top[place[a]]--];				
		place[temptblock] = temptblock;
		blocks[place[temptblock]][++top[place[temptblock]]] = temptblock;
	}
	return;
}
void pile_over (int a,int b)
{
	vector<int> queue;
	int id_a = place[a];
	int id_b = place[b];
//	cout << "!!Debug : " << a << id_a << top[id_a] << endl;
	while(blocks[id_a][top[id_a]] != a)
	{
		queue.push_back(blocks[id_a][top[id_a]--]);
	}
	blocks[id_b][++top[id_b]] = a;
	top[id_a]--;
	place[a] = id_b;
	while(!queue.empty()) 
	{
		blocks[id_b][++top[id_b]] = queue.back();
		place[queue.back()] = id_b;
		queue.pop_back();		
	}
	return;
}
