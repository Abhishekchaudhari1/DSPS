#include<iostream>
using namespace std;

class MLS{
    int t_no, count = 0;
    string t_title, t_artist;
    MLS  *prev,*next;
    public: 

    void accept();
    void displayAlltracks();
    void countTrack();
    void searchTrack();
    void updateTrack();
    void removeTrack();

}*start = NULL, *tail = NULL, M;

void MLS::accept(){
    MLS *newnode,*temp;
    newnode = new MLS;
    newnode->prev = newnode->next = NULL;
    cout <<"Enter the 'Music Track Details': \nTrack Title: ";
    cin >> t_title;
    cout << "Artist: ";
    cin >> t_artist;
    if(start == NULL){
        start = newnode;
        t_no = 1;
    } 
    else{
        temp = start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp = newnode;
        temp->prev = start;
    }
}

void MLS::displayAlltracks(){
    MLS *temp;
    temp = start;
    while(temp != NULL){
        cout << "\n" << t_no <<"\t\t" <<t_title << "\t" << t_artist << endl;
        count++;
        temp = temp->next;
    }

}

void MLS::countTrack(){
    cout <<"\nTotal tracks in database are: "<<count<<"\n";    
}

void MLS::searchTrack(){
    MLS *temp;
    string name;
    int flag = 0;
    temp = start;
    cout <<"Enter track name to search: ";
    cin>>name;
    while(temp != NULL){
        if (name == t_title){
            flag = 1;
            cout <<"\nTrack Found\n";
            cout << "\n" << temp->t_no <<"\t" << temp->t_title << "\t" << temp->t_artist << endl;
        }
    }
    temp = temp->next;
    if(flag = 0){
        cout <<"\nERROR   404\nMusic Track Not Found!!\n";
    }
    
}

void MLS::updateTrack(){
    MLS *temp;
    string name;
    int flag = 0;
    temp = start;
    cout <<"Enter track name to update: ";
    cin>>name;
    while(temp != NULL){
        if (name == t_title){
            flag = 1;
            cout <<"\nTrack Found\n";
            cout << "\n" << temp->t_no <<"\t" << temp->t_title << "\t" << temp->t_artist << endl;
            cout <<"Enter the new details of 'Music Track': \nName: \nArtist: ";
            cin >> temp->t_title >>temp->t_artist;
        }
    }
    temp = temp->next;
    if(flag = 0)
        cout <<"\nERROR   404\nMusic Track Not Found!!\n";
}

void MLS::removeTrack(){
    MLS *temp;
    string name;
    int flag = 0;
    temp = start;
    cout <<"Enter track name to remove: ";
    cin>>name;
    while(temp->t_title != name){
        if (name == t_title){
            flag = 1;
            cout <<"\nTrack Found\n";
            cout << "\n" << temp->t_no <<"\t" << temp->t_title << "\t" << temp->t_artist << endl;
            cout <<"Enter the new details of 'Music Track': \nName: \nArtist: ";
            cin >> temp->t_title >>temp->t_artist;
        }
    }
    temp = temp->next;
    if (flag = 0)
        cout <<"\nERROR 404\nMusic Track Not Found!!\n";

}

int main(){
    int ch;
    do{
        cout <<"\nMenu\n1. Add a new music track\n2. Diaplay All tracks\n3. Display number of tracks\n4. Search a track\n5. Update the existing track\n6. Remove a track\n7. Exit\n";
        cout <<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            M.accept();
            cout <<"\nMusic track has been added successfully!\n";
            break;
        case 2:
            if (start == NULL){
                cout <<"\nNo tracks to display!\nAdd a track first.\n";

            } else{
                cout <<"\nTrack No.\tTitle\tArtist";
                M.displayAlltracks();
            }
            break;
        case 3:
            M.countTrack();
            break;
        case 4:
            if (start == NULL){
                cout <<"\nNo tracks to search!\nAdd a track first.\n";
            } else{
                M.searchTrack();
            }
            break;
        case 5:
            if (start == NULL){
                cout <<"\nNo tracks to update!\nAdd a track first.\n";
            } else{
                M.updateTrack();
            }
            break;
        case 6:
            if (start == NULL){
                cout <<"\nNo tracks to remove!\nAdd a track first.\n";
            } else{
                M.removeTrack();
                cout<<"Track Removed Successfully..."<<endl;
            }
            break;
        case 7:
            cout<<"Exiting...";
        default:
            cout<<"\nEnter the valid choice (1/2/3/4/5/6): \n";
            break;
        }
    }while(ch!=7);
    return 0;
}
