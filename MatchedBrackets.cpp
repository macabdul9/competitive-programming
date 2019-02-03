//https://www.codechef.com/ZCOPRAC/problems/ZCO12001
#include<iostream>
#include<unordered_set>
#include<iterator>
#include<stack>
#include<string>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int N, max_depth, max_depth_position, max_seq, max_seq_position, count;
    max_depth = 0;
    max_depth_position = 0;
    max_seq = 0;
    max_seq_position = 0;
    count = 0;
    stack<unsigned int> stack;
    int tmp;
    cin >> N;
    for(unsigned int i = 1; i < N + 1; i++){
        // insert the brackets
        cin >> tmp;
        // if opening just insert it
        if(tmp == 1){ // ( --> opening brackets
            stack.push(tmp);
        }
        else if(tmp == 2 and !(stack.empty())){ // ) --> closing brackets
            // check whther new max_depth is more than previous max_depth
            if(max_depth < stack.size()){
                max_depth = stack.size();
                max_depth_position = i - 1; // - 1 bcoz pop hum baad me krrhe h
            }
            stack.pop(); //pop kar bhai
            count = count + 2;
            if( stack.empty() ){
                if(count > max_seq){
                    max_seq =  count;
                    max_seq_position = i - max_seq + 1;
                }
                count = 0;
            }
        }
    }
    cout << max_depth << " "<< max_depth_position << " "<< max_seq << " "<< max_seq_position << " "<< endl;

    return 0;
}
