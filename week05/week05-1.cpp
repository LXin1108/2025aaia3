///week05-1
///LeetCode �ǲ߭p�e Built-In Function ��1�D 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); ///��r��,�ܦ����e�Ъ�cin iostream
        string word; ///�r�ꪺword
        ///s >> word; ///�ܹ����e�Ъ� cin >> word
        ///cout << "Ū��F" << word <<"\n"; ///���ե�
        ///s >> word; ///�ܹ����e�Ъ� cin >> word
        ///cout << "Ū��F" << word <<"\n"; ///���ե�
        while(ss >> word){ ///�@��Ū�i��
             ///�̭��ƻ򳣤���
        }
        return word.length(); //�̫᪺�r������ //return 0; //�H�K
    }
};
