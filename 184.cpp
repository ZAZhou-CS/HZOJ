/*

设f(n)为第n天时桃子数
f(n)=1
f(n-1)=2（f(n）+1）;
return f(1)即可

*/
#include<iostream>
using namespace std;
int f(int n)
{
    if (n == 1)   //此处为了好计算，把数倒着排列了一遍
        return 1;

    return 2 * (f(n - 1) + 1);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;
}

/*
#include<iostream>
using namespace std;

int f(int n){
	int peaches =1 ;//f(n)=1;
	for(int i =n;i>1;--i){
		peaches = 2*(peaches+1)	//f(n-1)=2*(f(n)+1)
	}
		return peaches;//return f(1);
}

int main(){
	int n;
	cin>>n;
	cout<<f(n)<<endl;
	return 0;
}*/
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int peaches = 1;

    for (int i = n; i > 1; --i)
    {
        peaches = 2 * (peaches + 1);
    }

    cout << peaches << endl;

    return 0;
}
*/
