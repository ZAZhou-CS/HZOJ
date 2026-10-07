/*
[] 输入int n, int <vector> thb;
输出 小球被弹起的次数 cout
还需知道，被弹距离d 
小球位置距离
当前位置i
刚开始   小球位置  i=0
  ,cout=0;
  被弹距离  d = thb[i]
下一个位置 i =i +d
  被弹距离  d =thb[i]
  Count ++;
下下一个位置  i = i+d
    被弹距离  d = thb[i]
直到，出去

*/
#include<iostream>
#include<vector>
using namespace std;

int f(int n,vector<int>&thb){
	int i=0;
	int count =0;
	while(i<n){
		count++;
		int d = thb[i];
		i +=d;
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	vector<int>thb(n);
	for(int i = 0;i<n;i++){
		cin>>thb[i];
	}
	cout << f(n,thb)<<endl;
}