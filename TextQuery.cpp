#include"TextQuery.h"

TextQuery::TextQuery(ifstream &inputfile) :array_file(new vector<string>){

	string text;
	int no_line;
	while (getline(inputfile, text)){

		//�����ļ��ı�
		array_file->push_back(text);

		//ȷ���к�
		no_line = array_file->size() - 1;

		//׼���ָ��
		istringstream split_word(text);
		string single_word;

		//���뵥�����ڵ��к�
		while (split_word >> single_word){

			auto &temp = word_line[single_word];

			//������ָ�뻹û��ָ���κζ���
			if (!temp)
				temp.reset(new set<lineno>);

			temp->insert(no_line);
		}
	}
}


QueryResult TextQuery::Query(string &check)const{

	static shared_ptr<set<lineno>> nodata(new set<lineno>);

	auto location = word_line.find(check);

	if (location == word_line.end())
		return QueryResult(check, nodata, array_file);
	else
		return QueryResult(check,location->second, array_file);
}