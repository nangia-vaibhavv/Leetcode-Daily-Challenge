class Solution {
public:
    int giveMinutes(string a){
       int pos = a.find(":");
       string pre =a.substr(0,pos);
       string sub = a.substr(pos + 1);
       int hours=stoi(pre);
       int minutes=stoi(sub);
       return hours*60+minutes;
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
     //start1<= end2 && start2<=end1  
      int start1=giveMinutes(event1[0]);
      int end1=giveMinutes(event1[1]);
      int start2=giveMinutes(event2[0]);
      int end2=giveMinutes(event2[1]);

      return (start1<=end2 && start2<=end1);
    }
};