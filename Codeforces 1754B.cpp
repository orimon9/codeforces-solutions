#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> job(n);
    vector<int> persuasion_cost(n);
    vector<int> job_count(k + 1, 0);
    map<int, vector<int>> job_to_cost;

    for (int i = 0; i < n; ++i) {
        cin >> job[i];
        job_count[job[i]]++;
    }

    for (int i = 0; i < n; ++i) {
        cin >> persuasion_cost[i];
        job_to_cost[job[i]].push_back(persuasion_cost[i]);
    }

    for (int i = 1; i <= k; ++i) {
        sort(job_to_cost[i].begin(), job_to_cost[i].end());
    }

    vector<int> unchosen_jobs;
    for (int i = 1; i <= k; ++i) {
        if (job_count[i] == 0) {
            unchosen_jobs.push_back(i);
        }
    }

    vector<int> candidates;
    for (int i = 1; i <= k; ++i) {
        if (job_count[i] > 1) {
            for (int j = 0; j < job_count[i] - 1; ++j) {
                candidates.push_back(job_to_cost[i][j]);
            }
        }
    }

    sort(candidates.begin(), candidates.end());

    long long total_time = 0;
    for (int i = 0; i < unchosen_jobs.size(); ++i) {
        total_time += candidates[i];
    }

    cout << total_time << endl;

    return 0;
}
