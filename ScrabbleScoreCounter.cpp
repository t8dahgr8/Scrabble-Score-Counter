#include<iostream>
#include<vector>
using namespace std;

void vppl(int people, vector<vector<string>> &scores){//Pass by reference
    string name;
    
    for(int i = 0; i < people; ++i){ //Enter the names of people as the first element of each subvector
    cout << "Enter name of person " << i + 1 << ": " << endl;
    cin >> name;
    scores[i].push_back(name);
    }
    cout << "Let's start the game!" << endl;
}

void Add(){

}

void Subtract(){

}

void Replace(){

}

void EndGame(int people, vector<vector<string>> &score){
    for (int i = 0; i < people; i++)
    {
        for(int j = 1; j < people; j++){
            
        }
    }
    

}



int main(){
    int people;

    cout << "Hello Welcome to Scrabble Score Counter!" << endl;
    cout << "How many people are playing today?" << endl;
    cin >> people;
    vector<vector<string>> scores(people); //Makes "people" amount of vectors inside the vector
    vppl(people, scores); //vppl stands for vector of people
    
    bool end = false;
    while(end == false){
        cout << "To enter in scores, type Add" << endl;
        cout << "To remove a specific score, type Subtract" << endl;
        cout << "To replace a score, type Replace" << endl;
        cout << "To end the game and recieve a sum of scores for each player, type End" << endl;
        string temp;
        cin >> temp;

        if(temp == "Add"){
            Add();
        }
        
    }

    





}