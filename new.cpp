bool canAssign(const vector<bool>& skill, const vector<bool>& sofc) {
    for (int i = 0; i < skill.size(); ++i) {
        if (skill[i] && !sofc[i]) {
            return false;
        }
    }
    return true;
}

int solve(int jobIndex, const vector<int>& profits, const vector<vector<bool>>& skills, const vector<vector<bool>>& sofcs, vector<bool>& assigned) {
    if (jobIndex >= skills.size()) {
        return 0;
    }
   
    int maxprofit = solve(jobIndex + 1, profits, skills, sofcs, assigned);
    
    // Option 2: Try to assign a candidate to this job
    for (int i = 0; i < sofcs.size(); ++i) {
        if (!assigned[i] && canAssign(skills[jobIndex], sofcs[i])) {
            assigned[i] = true;
            int profit_wc = profits[jobIndex] + solve(jobIndex + 1, profits, skills, sofcs, assigned);
            maxprofit = max(maxprofit, profit_wc);
            assigned[i] = false;
        }
    }
    
    return maxprofit;
}

int solution(vector<int> profits, vector<vector<bool>> skills, vector<vector<bool>> sofcs) {
    vector<bool> assigned(sofcs.size(), false);
    return solve(0, profits, skills, sofcs, assigned);
}