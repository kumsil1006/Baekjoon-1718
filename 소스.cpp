#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string code;
	
	getline(cin, str); // ��ĭ�� ���� �� �����Ƿ� getline���� �޴´�.
	cin >> code;
	
	int i = 0;

	while (str[i] != '\0') {
		
		for (int j = 0; j < code.length();j++) {
			int s = str[i];
			int c = code[j];

			if (str[i] == ' ') 
				cout << " ";	// ��ĭ�̸� ��ĭ��		
			
			else {
				int s2 = s - c + 96; // ��ȣȭ
				if (s2 < 97)  
					s2 = s2 + 26; // �ҹ����� �������� ���� ���� ������ z�� ���ư���.
				char cc2 = static_cast<char>(s2);
				cout << cc2;
			}

			if (j == code.length() - 1) j = -1; // �ڵ� ���̸� �Ѿ�� ó������ ���ư���
			
			i++;
			if (i == str.length()) break; // string ���̸� �Ѿ�� ������.
		}
		
	}
	
}