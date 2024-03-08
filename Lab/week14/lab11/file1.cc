
#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist{
private:
    string songs[20];
    int size;
    int cur;
public:
    MusicPlaylist():cur(1),size(0){}
    void add(string songName){
        if(size < 20){
            songs[size++] = songName;
        }
    }
    void setCurrentTrack(int i){
        if(i > 20) {cur = 20; return;};
        if(i < 1) {cur = 1; return;};
        cur = i;
        return;

    }
    string play(){
        return songs[cur-1];
    }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(-1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}