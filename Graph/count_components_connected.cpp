#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_set>
using ll = long long;
using namespace std;
void dfs(const vector<vector<int>>& graph, int start, unordered_set<int>& visited) {
    visited.insert(start);
    for (int neighbor : graph[start]) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(graph, neighbor, visited);
        }
    }
}

pair<int, vector<unordered_set<int>>> count_connected_components(const vector<vector<int>>& graph) {
    unordered_set<int> visited;
    int num_components = 0;
    vector<unordered_set<int>> components;
    for (int vertex = 0; vertex < graph.size(); vertex++) {
        if (visited.find(vertex) == visited.end())  {
            unordered_set<int> component;
            dfs(graph, vertex, component);
            visited.insert(component.begin(), component.end());
            num_components++;
            components.push_back(component);
        }
    }
    return {num_components, components};
}

int main() {
    vector<vector<int>> graph = {{1, 2}, {0, 2}, {0, 1}, {4}, {3}};
    auto [num_components, components] = count_connected_components(graph);
    cout << "Number of connected components: " << num_components << endl;
    for (const auto& component : components) {
        cout << "Component: ";
        for (int vertex : component) {
            cout << vertex << " ";
        }
        cout << endl;
    }
    return 0;
}
