// Last updated: 16/06/2026, 14:12:20
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        // bool res;
        // for(int i = 'a' ; i <= 'h' ; i++){
        //     string result = "";
        //     result += i;
        //    for(int j = 1 ; j <= 8 ; j++){
        //     result += j + '0';
        //     if(j % 2 == 1){
        //        if(result == coordinates){
        //         if((int)i % 2 == 1){
        //             res = false;
        //         }
        //         else{
        //             res = true;
        //         }
        //        }
        //     }
        //      if(j % 2 == 0){
        //         if(result == coordinates){
        //         if((int)i % 2 == 1){
        //             res = true;
        //         }
        //         else{
        //             res = false;
        //         }
        //        }
        //     }
        //     result = "";
        //    }
        // }

        int alpha = (int)coordinates[0];
        int num = coordinates[1] - '0';


        return (alpha + num) % 2 == 1;
    }
};