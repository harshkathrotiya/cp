#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int minJumpsToReachBuilding(int N,int M,vector<pair<int,int>>&connections,int start,int end){
    vector< vector <int> > adjList(N+1);
    for(auto&conn:connections){
        int u=conn.first,v=conn.second;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    if(start==end)return 0;
    vector<bool> visited(N+1,false);
    queue<pair<int,int>>q;
    visited[start]=true;
    q.push({start,0});
    while(!q.empty()){
        int currentBuilding=q.front().first,jumps=q.front().second;
        q.pop();
        for(int neighbor:adjList[currentBuilding]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                if(neighbor==end)return jumps+1;
                q.push({neighbor,jumps+1});
            }
        }
    }
    return 0;
}
int main(){
    int N,M;
    cin>>N>>M;
    vector< pair <int,int > >connections(M);
    for(int i=0;i<M;++i){
        cin>>connections[i].first>>connections[i].second;
    }
    int start,end;
    cin>>start>>end;
    cout<<minJumpsToReachBuilding(N,M,connections,start,end)<<endl;
    return 0;
}
