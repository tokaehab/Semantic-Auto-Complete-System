#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
namespace glob
{
	using namespace std;
	static map <string, string> definition;
	static vector <string> wordslist;
	static class trie
	{
	private:
		trie *arr[126];
		int cnt[126];
		bool endOfWord;
	public:
		trie()
		{
			memset(arr, 0, sizeof arr);
			memset(cnt, 0, sizeof cnt);
			endOfWord = false;
		}
		void search(string s, int i)
		{
			if (i < (int)s.size())
			{
				int cur = s[i];
				if (arr[cur])
					arr[cur]->search(s, i + 1);
				else return;
			}
			else
			{
				if (endOfWord)
					wordslist.push_back(s);
				for (int j = 0; j < 126; j++)
				{
					if (arr[j])
						arr[j]->search(s + (char)(j), i + 1);
				}
				return;
			}
		}
		void insert(string s, int i)
		{
			if (i == s.size() + 1)
				return;
			int cur = s[i];
			if (!arr[cur])
				arr[cur] = new trie;
			cnt[cur]++;
			if (i == s.size())
				endOfWord = true;
			arr[cur]->insert(s, i + 1);
		}
		bool find(string s, int i)
		{
			if (i == s.size())
				return endOfWord;
			int cur = s[i];
			if (!arr[cur])
				return false;
			return arr[cur]->find(s, i + 1);
		}
		void remove(string s, int i)
		{
			if (i == s.size() + 1)
				return;
			int cur = s[i];
			cnt[cur]--;
			arr[cur]->remove(s, i + 1);
			if (!cnt[cur])
				arr[cur] = NULL;
		}
	}word;
	static void GetDataFromFile()
	{
		string line, temp;
		int cntr = 0;
		ifstream TEMP;
		TEMP.open("Text.txt");
		while (getline(TEMP, line))
		{
			if (line == "*")
				break;
			if (cntr % 2 == 0)
			{
				word.insert(line, 0);
				temp = line;
			}
			else
				definition[temp] = line;
			cntr++;
		}
		TEMP.close();
	}
	static void overwriteFile()
	{
		ofstream TEMP;
		TEMP.open("Text.txt", ios::out | ios::trunc);
		map<string, string> ::iterator it;
		for (it = definition.begin(); it != definition.end(); it++)
			TEMP << it->first << '\n' << it->second << '\n';
		TEMP << '*' << '\n';
		TEMP.close();
	}
}
ref class Global
{
public:
	Global();
};
