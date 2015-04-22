#include "DEFINE.h"
#include "QueryResult.h"

class TextQuery{

public:

	//��ȡ�ļ���ÿһ�У���ÿһ�����ʶ�Ӧ���кŶ�������Ӧ��map��
	TextQuery(ifstream &input);
	//��ѯ�����ؽ��
	QueryResult Query(string &check) const;
	
private:
	
	//�ļ���������,��Ҫ����
	shared_ptr<vector<string>> array_file;

	//�洢��Ӧ���ʵ��кţ���Ҫ�����кż���
	map<string, shared_ptr<set<lineno>>> word_line;
};