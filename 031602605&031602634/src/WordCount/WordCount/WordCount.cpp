#include "stdafx.h"


string input;													//�����ĵ�·��
string output;													//����ĵ�·��
 int countquz;													//Ȩ��ͳ��
 int countphrase;												//����ͳ��
 int flagcountphrase;										//����ͳ�Ʊ�־λ
 int outtop;												//���top n Ĭ�� 10
 int flagouttop;												//���top n �ı��


int main(int argc, char **argv)
{
	int i = 1;
	while (argv[i] != NULL)
	{
		if (strcmp(argv[i], "-i") == 0)
		{
			if (argv[i + 1] == NULL)
			{
				cout << "error" << endl;
				return -1;
			}
			else
			{
				input = argv[i + 1];
				i += 2;
			}
		}
		else if (strcmp(argv[i], "-m") == 0)
		{
			if (argv[i + 1] == NULL)
			{
				cout << "error" << endl;
				return -1;
			}
			else if(isnum2(argv[i + 1]))
			{
				countphrase = atoi(argv[i + 1]);
				flagcountphrase = 1;
				i += 2;
			}		
		}
		else if (strcmp(argv[i], "-n") == 0)
		{
			if (argv[i + 1] == NULL)
			{
				cout << "error" << endl;
				return -1;
			}
			else if (isnum2(argv[i + 1]))
			{
				outtop = atoi(argv[i + 1]);
				flagouttop = 1;
				i += 2;
			}
		}
		else if (strcmp(argv[i], "-w") == 0)
		{
			if (argv[i + 1] == NULL)
			{
				cout << "error" << endl;
				return -1;
			}
			else if (isnum2(argv[i + 1]))
			{
				countquz = atoi(argv[i + 1]);
				i += 2;
			}
		}
		else if (strcmp(argv[i], "-o") == 0)
		{
			if (argv[i + 1] == NULL)
			{
				cout << "error" << endl;
				return -1;
			}
			else
			{
				output = argv[i + 1];
				i += 2;
			}
		}
	}


	/*cout << input << endl;
	cout << output << endl;
	cout << countphrase << endl;
	cout << flagcountphrase << endl;
	cout << outtop << endl;
	cout << flagouttop << endl;
	cout << countquz << endl;*/

	FILE *inf;
	fopen_s(&inf, input.c_str, "r");
	if (inf == NULL)
	{
		cout << "error" << endl;
		system("pause");
		return 0;
	}

	myfile f;
	f.countchar(inf);
	rewind(inf);
	f.countline(inf);
	rewind(inf);
	f.countword(inf);
	rewind(inf);
	
	return 0;
}