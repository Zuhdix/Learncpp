#include <iostream>
#include <vector>
#include <string>

int main(){

    std::vector<std::string> playlist {
        "Porches - rangerover",
        "Mount Eerie - You Swan, Go on",
        "Yoasobi - Tabun",
        "Taylor Swift - Blank Space",
        "Adele - Someone like you",
        "Ariana Grande - Supranatural"
    };

    for (int i = 0; i < playlist.size(); i++) {
        std::cout << playlist[i] << '\n';
    }

    return 0;
}
