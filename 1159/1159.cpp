#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;

int n;
int cnt[30];
map<char, int> mp;

// int�� �迭�� ���ؼ��� ���� ����
// 
// int�� �迭�� �ε����� a[i]-'a' �Է� ���� : �迭�� �ε����� integer������ ó���Ǳ� ������ �ƽ�Ű�ڵ带 ���� ���ڸ� int������ ó�� ����
// string�� 'a'+2 �Է� ����(='c') : �ƽ�Ű �ڵ带 ���� int�� ���ڷ� ����
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "rt", stdin);

	cin >> n;

	for (auto i = 1; i <= n; i++) {
		string temp;
		cin >> temp;
		cnt[temp[0] - 'a']++;
		//mp[temp[0]]++;
	}

	int num = 0;
	string res;
	for (auto i = 0; i < 26; i++) {
		if (cnt[i] >= 5) {
			num++;
			res.push_back(i + 'a');
		}
	}

	if (num == 0) {
		cout << "PREDAJA\n";
	}

	else {
		cout << res << "\n";
	}
	
	/*int cnt = 0;

	for (auto it = mp.begin(); it != mp.end(); it++) {
		if (it->second >= 5) {
			char temp = it->first;
			cout << temp;
			cnt++;
		}
	}

	if (cnt == 0) {
		cout << "PREDAJA";
	}

	cout << "\n";*/
	return 0;
}