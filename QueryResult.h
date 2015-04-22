#include "DEFINE.h"

class QueryResult{
	friend ostream &print(ostream &os, const QueryResult &qr);
private:
	
	//��ѯ�ĵ���
	string word;

	//�������ڵ�vector
	shared_ptr<vector<string>> result_vector_ptr;

	//��ѯ�������ڵ��кż���
	shared_ptr<set<lineno>> result_set_ptr;
public:

	QueryResult(string s, shared_ptr<set<lineno>>p, shared_ptr<vector<string>>f):word(s),result_vector_ptr(f),result_set_ptr(p){}
};