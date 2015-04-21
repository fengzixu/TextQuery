#ifndef TEXT_QUERY
#define TEXT_QUERY
#include<iostream>
#include<memory>
#include<string>
#include<map>
#include<vector>
#include<fstream>
#include<sstream>
#include<set>
#include"QueryResult.h"
using namespace std;
#endif


class TextQuery{

public:

	//��ȡ�ļ���ÿһ�У���ÿһ�����ʶ�Ӧ���кŶ�������Ӧ��map��
	TextQuery(ifstream &input);
	//��ѯ�����ؽ��
	QueryResult Query(string &check);
	using lineno = vector<string>::size_type;
private:
	
	//�ļ���������,��Ҫ����
	shared_ptr<vector<string>> array_file;

	//�洢��Ӧ���ʵ��кţ���Ҫ�����кż���
	map<string, shared_ptr<set<lineno>>> word_line;
};