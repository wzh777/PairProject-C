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
	void countchar(FILE *f);									//ͳ���ַ�
	void countline(FILE *f);									//ͳ������
	void countword(FILE *f);									//ͳ�Ƶ���
	//void frequencycount(FILE *f);								//ͳ��Ƶ��
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

bool isnum(char c);												//�ж��ǲ��ǵ�����
bool ischar(char c);											//�ж��ǲ����ַ�
bool isnum2(string str);										//�ж��ǲ���������