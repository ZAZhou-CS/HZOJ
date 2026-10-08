/*二叉决策树
 *1. dfs(x)当前数字要不要选，处理到哪个数字
 *2.数字X有两个选择，选dfs(x+1),不选dfs(x+1)
 3.需要记录选择了哪些数字 vector<int>path;
 4.回溯 path.pop_back();
 5.何时输出，递归终点 if (x>n)
 6.避免空方案  path.empty()==true;
 *
 *
 * */
#include<iostream>
#include<vector>
 using namespace std;

vector<int>path;
void dfs(int start,int n){
	if (!path.empty()) { 
		for (int i = 0; i < path.size(); i++)
		{ 
			if (i > 0) cout << " ";
			cout << path[i]; 
		} 
		cout << "\n"; 
	}
	for (int i= start;i<=n;i++)
	{
		path.push_back(i);
		dfs(i+1,n);
		path.pop_back();
	}
}


 int main(){
 	int n;
	cin>>n;
	dfs(1,n);
	return 0;
 
 }
