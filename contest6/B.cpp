#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char ch;
	string ans;
	while (scanf("%c", &ch), ch != '\n'){
		n = ans.size();
		if (ch != ' ' && n >= 3 && (n == 3 || ans[n-4] == ' ') &&
		   (ans[n-3] == ans[n-1] && ans[n-2] == ch)){
			ans.pop_back();
		}
		else{
			ans.push_back(ch);
		}
	}
	cout << ans << endl;
	return 0;

	/*
	
	_ c1 c2 c3 ch

	_ a _ a _

	*/
}