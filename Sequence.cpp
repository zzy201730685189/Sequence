#include"Sequence.h"
#include<fstream>
#include<iostream>
#include<algorithm>

Sequence::Sequence(string filename)
{
	ifstream input;
	input.open(filename);
	string o;
	while (!input.eof())
	{
		getline(input, o);
		h += o;
	}
	input.close();
};
int Sequence::length()
{
	return h.size();
};
int Sequence::numberOf(char base)
{
	return count(h.begin(), h.end(), base);
};
string Sequence::longestConsecutive()
{
	int pos = 0;
	int curpos = 0;
	int count = 1;
	int curcount = 1;

	for (int i = 1; i <h.size(); i++)
	{
		if(h[i]==h[curpos])
		{
			curcount++;
		}
		else
		{
			if (curcount > count)
			{
				count = curcount;
				pos = curpos;
			}
			curcount = 1;
			curpos = i;
		}
	}
	string c;
	for (int i = 0; i < count; i++,pos++)
	{
		c += h[pos];
	}
	return c;
};
string Sequence::longestRepeated()
{/*编译能过，但跑不出来
	string * p=new string [h.size()];
	for (int i = 0; i <h.size(); i++)
	{
		for (int q = i; q <h.size(); q++)
			p[i] += h[q];
	}
	int num = 0;
	int pos=0;
	for(int i=0;i<h.size();i++)
		for (int q = i + 1; q < h.size(); q++)
		{
			int a = 0; int curnum = 0;	int curpos = i;
			while (p[i][a] == p[q][a])
			{
				curnum++; a++;
			}
			if (curnum > num)
			{
				pos = curpos;
				num = curnum;
			}
		}
	string w;
	for (int i = 0; i < num; i++)
		w += p[pos][i];*/
string w;
	return w;
};
