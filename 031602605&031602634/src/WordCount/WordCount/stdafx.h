#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<sstream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;



class myfile
{
public:
	myfile();
	~myfile();
	void countchar(FILE *f);									//统计字符
	void countline(FILE *f);									//统计行数
	void countword(FILE *f);									//统计单词
	//void frequencycount(FILE *f);								//统计频率
	int getchars()												
	{
		return chars;
	}
	int getwords()												
	{
		return words;
	}
	int getlines()												
	{
		return lines;
	}
public:
	int chars, lines, words;
};

bool isnum(char c);												//判断是不是单数字
bool ischar(char c);											//判断是不是字符
bool isnum2(string str);										//判断是不是正整数