class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if((coordinates[0]-'0')%2==0 && (coordinates[1]-'0')%2==0 || (coordinates[0]-'0')%2==1 && (coordinates[1]-'0')%2==1){
            return false;
        }
        else{
            return true;
        }
    }
};