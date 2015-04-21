//#include<iostream>
//#include<numeric>
//#include<string>
//#include<vector>
//using std::string;
//using std::vector;
//
//int main(){
//
//	//vector<double>v{ 1.4, 4.5 };
//	//vector<const char *>str{ "xuran", "haha","aaa" };
//	//vector<string>str2{ "xuran", "haa" };
//	//const string &str = "abc";
//	//std::cout << std::equal(str.begin(), str.end(), str2.begin()) << std::endl;
//
//	char temp[3] = { 'a', 'c' };
//	char *p = "xuran";
//	p[0] = 'a';
//	std::cout << p << std::endl;
//	//double sum = std::accumulate(v.cbegin(), v.cend(), 0.0);
//	//std::cout << sum << std::endl;
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
//int prime[10000] = { 0 };
//bool vis[10000] = {0};
//int pos = 0;
//bool get_prime(){
//
//	double up = sqrt(100 * 1.0);
//
//	for (int i = 2; i <= up; i++){
//
//		if (vis[i] == 0){
//
//			prime[pos++] = i;
//			
//			for (int j = i + i; j <= 100; j += i){
//
//				vis[j] = 1;
//			}
//		}
//
//	}
//
//	for (int k = (int)(up + 1); k <= 100; k++){
//
//		if (vis[k] == 0)
//			prime[pos++] = k;
//	}
//	return true;
//}
//
//int main()
//{
//
//
//	return 0;
//}


//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<string>
//#include<map>
//using namespace std;
//
//
//map<string, string> buildmap(ifstream &mapfile);
//const string& transform(string &input, map<string, string> &mmap);
//void word_transform(ifstream &mapfile, ifstream &inputfile){
//
//	auto trans_map = buildmap(mapfile);
//	string text;
//
//	while (getline(inputfile,text)){
//
//		istringstream stream(text);
//		string word;
//		bool firstword = true;
//
//		while (stream >> word){
//
//			if (firstword == true)
//				firstword = false;
//			else
//				cout << " ";
//
//			cout << transform(word, trans_map);
//		}
//		cout << endl;
//	}
//
//}
//
//map<string, string> buildmap(ifstream &mapfile){
//
//	map<string, string> temp_map;
//	string key;
//	string value;
//
//	while (mapfile >> key && getline(mapfile, value)){
//
//		if (value.size() > 1)
//			//temp_map[key] = value.substr(1);
//			temp_map.insert({ key, value.substr(1) });
//		else
//			throw runtime_error("no value for " + key);
//	}
//
//	return temp_map;
//
//}
//
//const string& transform(string &input, map<string, string> &mmap){
//
//	if (mmap.find(input) != mmap.end()){
//
//		return mmap.find(input)->second;
//	}
//	else
//		return input;
//
//}
//
//int main()
//{
//	ifstream inputfile("C:\\Users\\Administrator\\Desktop\\input.txt");
//	ifstream mapfile("C:\\Users\\Administrator\\Desktop\\map.txt");
//
//	word_transform(mapfile, inputfile);
//	return 0;
//}



//#include<iostream>
//#include<vector>
//#include<new>
//#include<memory>
//using namespace std;
//
//void input(shared_ptr<vector<int>>);
//void output(shared_ptr<vector<int>>);
//
//int main()
//{
//	//vector<int> *p = new vector<int>;
//	//shared_ptr<vector<int>> vecptr = make_shared<vector<int>>();
//	//input(vecptr);
//	//output(vecptr);
//	//input(p);
//	//output(p);
//	//delete p;
//
//	shared_ptr<int> ptr(new int);
//	*ptr = 5;
//	cout << *ptr << endl;
//	int *p = ptr.get();
//	delete p;
//}

//void input(shared_ptr<vector<int>> ptr){
//
//	int temp = 0;
//	while (cin >> temp){
//
//		ptr->push_back(temp);
//	}
//}
//
//void output(shared_ptr<vector<int>> ptr){
//
//	int t;
//	for (auto it = ptr->begin(); it != ptr->end(); it++)
//	{
//		t = *it;
//		cout << *it <<" ";
//
//	}
//
//	cout << endl;
//
//}



#include"TextQuery.h"

void runQueries(ifstream &inputfile);


int main()
{
	string user_input;
	cin >> user_input;
	ifstream input(user_input);
	runQueries(input);
	return 0;
}

void runQueries(ifstream &inputfile){

	//创建对象，并且完成初始化操作
	TextQuery textquery(inputfile);

	string check_word;
	while (cin >> check_word || check_word == "q"){

		
	}
}