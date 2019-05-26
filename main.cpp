#include <iostream>
#include <string>
#include <vector>

using namespace std;

// i am navid
// i ma divan

//  i am shumit
//  i ma timuhs

vector <string> find_word(string sentence){
     string word = "";
     vector <string> word_list;
    for(int k = 0; k <= sentence.size() -1; k++){

        if(sentence[k] == ' '){
             word_list.push_back(word);
             word = "";
        }else{
            word += sentence[k];
        }
    }
if (word.size() > 0){
    word_list.push_back(word);
}

return word_list;

}

void string_reverce(){
    vector <string> words;
    string name;
    getline(cin,name);
    words = find_word(name);

    for(int w = 0 ; w <= words.size() -1; w++){
        cout << words[w] << endl;
    }



}


int main (){
   string_reverce();
    return 0;
}