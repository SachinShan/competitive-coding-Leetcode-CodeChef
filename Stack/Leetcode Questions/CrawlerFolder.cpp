class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        int count = 0;
        for (auto log : logs)
            if (log == "../")
                count = max(0, --count);
            else if (log != "./")
                ++count;
        return count;
    }
};

// int count = 0;
//         for(int i=0; i<logs.size(); i++){
//             if(logs[i] != "../" && logs[i] != "./"){
//                 count--;
//             }
//             if(logs[i] == "../"){
//                 if(count > 1){
//                     count--;
//                 }
//             }
//             if(logs[i] == "./"){
//                 count = count;
//             }

//         }
//         return count;