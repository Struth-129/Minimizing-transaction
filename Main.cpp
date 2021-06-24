#include<bits/stdc++.h>
using namespace std;

class Graph{
	unordered_map<string,int> graph;
public:
	void addAmount(string user,int amount){
		if(graph.find(user)==graph.end()){
			graph[user] = amount;
		}else{
			graph[user] = graph[user]+amount;
		}
	}
	void display(){
		for(auto e:graph){
			cout<<e.first<<" "<<e.second<<endl;
		}
	}
};

int main(){
	
	int no_of_trans,friends;
	cin>>no_of_trans>>friends;
	Graph g;
	while(no_of_trans--){
		string x,y;
		int amount;
		cin>>x>>y>>amount;
		g.addAmount(y,amount);
		amount = -amount;
		g.addAmount(x,amount);
	}g.display();

}