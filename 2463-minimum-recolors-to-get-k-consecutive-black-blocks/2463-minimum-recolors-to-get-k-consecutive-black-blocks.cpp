class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       
        int w=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W') w++;   //getting W for 1st window
        }

        int mini=w;
        int i=1,j=k;                     //will start next window form index1
        while(j<blocks.size()){

            if(blocks[i-1]=='W' && blocks[j]=='B')  w--;

             if(blocks[i-1]=='B' && blocks[j]=='W')  w++;

             mini=min(mini,w);

             i++;
             j++;
        }
        return mini;
    }
};