// Last updated: 16/06/2026, 14:13:18
// class Solution {
// public:
//     int compareVersion(string version1, string version2) {
//         string v1 = "";
//         string v2 = "";
//         int count  = 0 ;
//         int count1 = 0;
//         int n1 , n2;
//         for(int i = 0 ; i < version1.size() ; i++){
//               if(count == 1){
//                 v1+=version1[i];
//             }
//             if(version1[i] == '.'){
//                 count = 1;
//             }
//         }
//         count = 0;
//         for(int i = 0 ; i < version2.size() ; i++){
//                if(count == 1){
//                 v2+=version2[i];
//             }
//             if(version2[i] == '.'){
//                 count = 1;
//             }
//         }

//         for(int i = version1.size()-1 ; i>=0 ; i--){
//             if(version1[i] == '.'){
//                 count1++;
//             }
//             if(count1 == 0){
//                  v1+=version1[i];
//             }

//         }
//         reverse(v1.begin(),v1.end());

//           for(int i = version2.size()-1 ; i>=0 ; i--){
//             if(version2[i] == '.'){
//                 count++;
//             }
//             if(count == 0){
//                     v2+=version2[i];
//             }

//         }
//         reverse(v2.begin(),v2.end());
//         if(!v1.empty()){
//              n1 = stoi(v1);
//         }
//         if(!v2.empty()){
//              n2 = stoi(v2);
//         }

//         if(count1 > count){
//             n2 = 0;
//         }if(count1 < count){
//             n1 = 0;
//         }

//         if(n1 < n2) return -1;
//         else if(n1 > n2) return 1;
//         else return 0;

        // if(version1.size() > version2.size()){
        //     int n = version1.size();
        // }else{
        //     int n = version2.size();
        // }

        // for(int i = 0 ; i < n ; i++){
        //     if(version1[i] != '.'){
        //         v1+=version1[i];
        //     }
        // }
//     }
// };

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0 , j=0 , n=version1.size(), m=version2.size();

        while(i<n || j< m){
            long num1 = 0 , num2 = 0;

            while(i<n && version1[i] != '.' ){
                num1 = num1*10 + (version1[i] - '0');
                i++;
            }

            while(j<m && version2[j] != '.' ){
                num2 =  num2*10 + (version2[j] - '0');
                j++;
            }

            if(num1 < num2) return -1;
            if(num1 > num2) return 1;

            i++, j++;
        }

        return 0;
    }
};