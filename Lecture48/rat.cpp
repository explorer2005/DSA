#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>>&board, int r, int c, string path, vector<string> &ans, vector<vector<bool>>&vis){
    int n=board.size();
    if(r<0||c<0||r>=n||c>=n||board[r][c]==0||vis[r][c]==true){
        return;
    }
    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }
    vis[r][c]=true;
    helper(board,r-1,c,path+"U",ans,vis);
    helper(board,r+1,c,path+"D",ans,vis);
    helper(board,r,c-1,path+"L",ans,vis);
    helper(board,r,c+1,path+"R",ans,vis);
    vis[r][c]=false;
}
vector<string> findPath(vector<vector<int>>&board){
    int n=board.size();
    vector<string> ans;
    string path="";
    vector<vector<bool>>vis(n,vector<bool>(n,false));
    helper(board,0,0,path,ans,vis);
    return ans;
}
int main(){
    vector<vector<int>> board = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans = findPath(board);
    for(string g:ans){
        cout<<g<<endl;
    }
    return 0;
}