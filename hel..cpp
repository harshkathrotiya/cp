int solution(vector<int> profits,vector<vector<bool>> sforj,vector<vector<bool>> skillc) {
int n=profits.size(); 
int m=skillc.size(); 
int k=sforj[0].size(); 
    auto canAssign=[](const vector<bool>& skill,const vector<bool>& cand_skill) -> bool {
        for (int i=0;i<skill.size();i++){
            if (skill[i]&&!cand_skill[i]) 
            {
                return false;
            }
        }
        return true;
    };
 function<int(int,vector<bool>&)> solve=[&](int jobind, vector<bool>&assigned) -> int {
        if (jobind>=n)
         {
            return 0;
        }
        int maxprofit=solve(jobind+1,assigned);
        for (int i=0;i<m;i++) {
            if (!assigned[i]&&canAssign(sforj[jobind],skillc[i]))
             {
                assigned[i]=true;
                int profit_wc=profits[jobind]+solve(jobind+1,assigned);
                maxprofit=max(maxprofit,profit_wc);
                assigned[i]=false;
            }
         }
      return maxprofit;
    };
   vector<bool>assigned(m,false);
    return solve(0, assigned);
}