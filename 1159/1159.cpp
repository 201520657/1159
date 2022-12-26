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

// int형 배열을 통해서도 구현 가능
// 
// int형 배열의 인덱스에 a[i]-'a' 입력 가능 : 배열의 인덱스는 integer형으로 처리되기 때문에 아스키코드를 통해 문자를 int형으로 처리 가능
// string에 'a'+2 입력 가능(='c') : 아스키 코드를 통해 int를 문자로 저장
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