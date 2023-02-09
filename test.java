#include <bits/stdc++.h>
using namespace std;

int countOne(string msg)
{
  int ans = 0;
  for(int i =0;i<msg.size();i++ )
  {
    if(msg[i]=='1')
  {
    ans++;
  }
}
return ans;
}

string encodeMessage(string msg)
{
    if (countOne(msg)%2==0)
    {
        msg +='0';
    }
    else
    {
        msg +='1';
    }
    return msg;
}

void transformMessage(srting &msg)
{
    int n = msg.size()-2;
    
    srand(time(0));
    
    int location = rand()%n;
    
    srand(time(0));
    
    int flip = rand()%2;
    
    if (flip == 1)
    {
        if (msg[location] == '0')
        {
            msg[location] = '1';
        }
        else
        {
            msg[location] = '0';
        }
    }
}

bool decodeAndCheckMessage(string msg)
{
    if (countOne(msg) % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string msg;
    cout << "Enter your message: ";
    cin >> msg;

    string encodedMessage = encodeMessage(msg);

    cout << "Encoded message: " << encodedMessage << endl;

    transformMessage(encodedMessage);

    cout << "Transformed message: " << encodedMessage << endl;

    cout << "Received message: " << encodedMessage << endl;

    if (decodeAndCheckMessage(encodedMessage))
    {
        cout << "Message is valid" << endl;
    }
    else
    {
        cout << "Message is invalid" << endl;
    }
    return 0;

}