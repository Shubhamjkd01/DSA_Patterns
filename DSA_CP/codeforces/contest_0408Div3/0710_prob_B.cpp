
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        
        stack<int> st;

        
        vector<bool> printed(n, false);

        for (int i = 0; i < n; i++)
        {
           
            if (s[i] == '1')
            {
                st.push(i + 1);
            }

          
            else if (s[i] == '2')
            {
                if (!st.empty())
                {
                   
                    int x = st.top();
                    st.pop();

                    printed[x - 1] = true;
                }
                else
                {
       
                    printed[i] = true;
                }
            }

  
            else
            {
                printed[i] = true;
            }
        }


        vector<int> answer;

        for (int i = 0; i < n; i++)
        {
            if (printed[i] == false)
            {
                answer.push_back(i + 1);
            }
        }

       
        cout << answer.size() << '\n';

       
        for (int x : answer)
        {
            cout << x << " ";
        }

        cout << '\n';
    }

    return 0;
}