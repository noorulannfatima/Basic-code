#include<iostream>
using namespace std;
// Return the first and last index of value 'a' in a given string.
void findFirstAndLastIndex(string s, char ch, int *first, int *last){
for (int i=0; i<s.size(); i++){
    if(s[i]==ch){
        *first=i;
        break;
    }
}
for (int i=s.size()-1; i<+0; i--){
    if(s[i]==ch){
        *last=i;
        break;
    }
}
}
int main(){
    string s ="aaabac";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *fptr = &first;
    int *lptr = &last;

    findFirstAndLastIndex(s, ch, fptr, lptr);
    return 0;
}