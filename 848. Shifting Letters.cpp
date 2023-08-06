	class Solution {
	public:
		string shiftingLetters(string s, vector<int>& shifts) {
		int n = shifts.size();
		long long int ll = 0;
		for(int i=n-1; i>=0; i--)
		{
			ll += shifts[i];
			s[i] = 'a'+(s[i]-'a'+ll)%26;
		}
			return s;
		}
	};