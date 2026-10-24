class Solution {
public:
    struct convert{
        int month;
        int day;
    };
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        struct convert alicearrive;
        struct convert aliceleave;
        struct convert bobarrive;
        struct convert bobleave;
        int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        alicearrive.month = stoi(arriveAlice.substr(0, 2));
        alicearrive.day   = stoi(arriveAlice.substr(3, 2));
        aliceleave.month  = stoi(leaveAlice.substr(0, 2));
        aliceleave.day    = stoi(leaveAlice.substr(3, 2));
        bobarrive.month   = stoi(arriveBob.substr(0, 2));   
        bobarrive.day     = stoi(arriveBob.substr(3, 2));
        bobleave.month    = stoi(leaveBob.substr(0, 2));
        bobleave.day      = stoi(leaveBob.substr(3, 2));
        int a1 = alicearrive.day;
        int a2 = aliceleave.day;
        int b1 = bobarrive.day;
        int b2 = bobleave.day;
        for(int i=0;i<alicearrive.month-1;i++){
            a1+=arr[i];
        }
        for(int i=0;i<bobarrive.month-1;i++){
            b1+=arr[i];
        }
        for(int i=0;i<aliceleave.month-1;i++){
            a2+=arr[i];
        }
        for(int i=0;i<bobleave.month-1;i++){
            b2+=arr[i];
        }
        int min1 = max(a1,b1);
        int max1 = min(a2,b2);
        return max(0,max1-min1+1);
    }
};