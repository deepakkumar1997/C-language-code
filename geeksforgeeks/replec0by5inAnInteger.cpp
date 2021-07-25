// Take an integer input and replace 0 by 5 and return the new number
#include<bits/stdc++.h>

// Function for replacing 0 by 5 and return new number by mathematical terms
int convertFive(int n)
    {
    //Your code here
        int faceValue, placeValue=1, result = 0;
        while(n>0){
            faceValue = n%10;
            n /=10;
            if(faceValue == 0)
                result += placeValue*5;
            result += placeValue*faceValue;
            placeValue *= 10;
        }
        return result;
    }

// Function for replacing 0 by 5 - general method 
 int convertFive(int n)
    {
    //Your code here
        // First conrt integer n to string
        string str = to_string(n);
        // Now find size of str
        int size = str.length();
        // Now iterate till size-1 and replace all 0 with 5
        for(int i=0; i<size; ++i)
            if(str[i] == '0')
                str[i] = '5';
        // Now convert string str to integer and return
        int result = stoi(str);
        return result;
    }

// Function for calculating value equal to index+1 in an array
vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    
	    vector<int> arrIndex;
	    
	    for(int i=0; i<n; ++i)
	        if(arr[i] == (i+1))
	            arrIndex.push_back(arr[i]);
	    return arrIndex;
	}

// function for find 30 bit binary digit for an integer
 string getBinaryRep(int n)
    {
        // Write Your Code here
        string str = "000000000000000000000000000000";
        
        int size = str.length()-1;
        
        while(n>0){
            if(n%2==1)
                str[size--] = '1';
            else
                str[size--] = '0';
            n /= 2;
        }
    return str;
    }

// binary to decimal in c
int binary_to_decimal(char str[])
{
		    // Code here.
		    //int num = atoi(str);
		    
		    int c=1, result =0,bit;
		    int size = strlen(str);
		    for(int i= size-1; i>=0; --i){
		        if(str[i]=='1')
		            bit = 1;
		        else
		            bit = 0;
		        //printf("%d\n", bit);
		        result += bit*c;
		        c *= 2;
		    }
		    
		    return result;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
