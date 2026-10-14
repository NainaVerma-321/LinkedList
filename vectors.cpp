#include<iostream>
#include<vector>
#include<stdexcept>  // to handle exceptions

using namespace std;

int main(){
    vector<int> v={10,20,30,40,50};
    // Displaying the elements of the vector
    cout<<"Elements of the vector are: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //insert in vector
    cout<<"insert at back with push_back(100)"<<endl;
    v.push_back(100);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"insert at position with insert(position, value)"<<endl;
    v.insert(v.begin(),0);
    v.insert(v.begin()+1,1);
    v.insert(v.begin()+2,2);
    v.insert(v.begin()+3,3);
    
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
 // access elements

cout<<"access elements with v[]"<<" ";
cout<<v[9]<<endl;

cout<<"access elements with v.at() bound check"<<endl;
cout<<v.at(0)<<endl;
try{
    cout<<"attempt to access larger than vector size"<<" ";
    cout<<v.at(10)<<endl;

}
catch(const out_of_range& e){
    cout<<"exception"<<e.what()<<"caught"<<endl;
}

//delete in vectors

v.pop_back();

for(int i:v){
    cout<<i<<" ";
}
cout<< endl;
//using erase
erase(v,0);
erase(v,1);
erase(v,2);
erase(v,3);

for(int i:v){
    cout<<i<<" ";
}

//check vector is empty 
if(!v.empty()){
    cout<<endl<<"vector is not empty";
}


cin.get();
   
    return 0;
}