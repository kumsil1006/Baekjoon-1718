#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string code;
	
	getline(cin, str); // 빈칸이 있을 수 있으므로 getline으로 받는다.
	cin >> code;
	
	int i = 0;

	while (str[i] != '\0') {
		
		for (int j = 0; j < code.length();j++) {
			int s = str[i];
			int c = code[j];

			if (str[i] == ' ') 
				cout << " ";// 빈칸이면 빈칸	
			
			else {
				int s2 = s - c + 96; // 암호화
				if (s2 < 97)  
					s2 = s2 + 26; // 소문자의 범위보다 작은 수가 나오면 z로 돌아간다.
				char cc2 = static_cast<char>(s2);
				cout << cc2;
			}

			if (j == code.length() - 1) j = -1; // 코드 길이를 넘어서면 처음으로 돌아간다
			
			i++;
			if (i == str.length()) break; // string 길이를 넘어서면 끝난다.
		}
		
	}
	
}
