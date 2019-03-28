#include<iostream>

using namespace std;

//题目背景
//原来的题目太简单，现改进让小鱼周末也休息，请已经做过重做该题。

//题目描述
//有一只小鱼，它上午游泳150公里，下午游泳100公里，晚上和周末都休息（实行双休日)，假设从周x(1<=x<=7)开始算起，请问这样过了n天以后，小鱼一共累计游泳了多少公里呢？

//输入输出格式
//输入格式：
//输入两个整数x,n(表示从周x算起，经过n天，n在long int范围内）。

//输出格式：
//输出一个整数，表示小鱼累计游泳了多少公里。




long long getMile(int x,long n){
	long long mile = 0; 
	while(n != 0){
		if (x<6){
			mile +=250;
		}
		x++;
		n -=1;
		if (x > 7){
			x%=7;
		}
	}
	return mile;
}

int main(){
	int x;
	long n;
	cin >>x>>n;
	cout<<getMile(x,n);
	return 0;
}
