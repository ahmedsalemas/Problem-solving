#include <iostream>

using namespace std;

int main()
{
    int number_of_rooms,room_capacity,people_live_room,c=0 ;
    cin>>number_of_rooms;
    for (int i=1;i<=number_of_rooms;i++){
        cin>>people_live_room;
        cin>>room_capacity;
        if ((room_capacity-1)>people_live_room){
                c++;
        }
        }
    cout <<c<< endl;
    return 0;
}
