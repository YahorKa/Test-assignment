#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <vector>
#include <gtest/gtest.h>

using namespace std;

class FileStream{
	ofstream 			_file_write;
	ifstream 			_file_read;
	string 				_file_name_open;
	string 				_file_name_write;
	string 				_magic_word;

public:	
	bool wordsEqual(string word,string magicWord)
	{
		for(int i=0;i<word.size();i++){
			word[i] = tolower(word[i]);
		}
		for(int i=0;i<magicWord.size();i++){
			word[i] = tolower(word[i]);
		}
		if (!strcmp(&word[0],&magicWord[0])) {
			return 1;}
		return 0;
	}

	void readToWrite()
	{
    cout<<"file name >>";
    cin>>_file_name_open;
    cout<<"magic word >>";
    cin>>_magic_word;
    cout<<"new file name >>";
   	cin>>_file_name_write;
	string line;
	 	_file_read.open(_file_name_open+".txt",ios::in);
		_file_write.open(_file_name_write+".txt",ios::out);
	 	if (!_file_read.is_open()||!_file_write.is_open())
		{
	 		 cout<<"EROOR: file couldnt be open \n";
	 		return;
	 	}
		while (getline(_file_read,line))
		{
			std::stringstream s(line);
				while (getline(s,line,' '))
				{
					if (wordsEqual(line,_magic_word)){continue;}
					_file_write<<line<<" ";
				}
				_file_write<<'\n';
		}
		_file_read.close();
		_file_write.close();
	}
};

