// Take a input time in format hh:mm:ss AM or PM as string and convert it into 24 hr format

char* timeConversion(char* s) {
    
    if(s[8]=='A'){
        if(atoi(s)==12){
            s[strcspn(s, "AM")] = 0;
            s[0] = '0'; s[1] = '0';
            return s;
        }
        else{
            s[strcspn(s, "AM")] = 0;
            return s;
        }
    }
    else {
        s[strcspn(s, "PM")] = 0;
        if(atoi(s)==12)
            return s;
        else{
            if(s[1]=='8' || s[1]=='9'){
                s[0] +=2; s[1] -=8;
                return s;
            }
            else{
                s[0]+=1; s[1]+=2;
                return s;
            }
        }
    }
}