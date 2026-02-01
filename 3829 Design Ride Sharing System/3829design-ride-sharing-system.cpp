class RideSharingSystem {
    queue<int>riders;
    queue<int>drivers;
    unordered_set<int>active;
public:
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        riders.push(riderId);
        active.insert(riderId);
    }
    
    void addDriver(int driverId) {
        drivers.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        while(!riders.empty() && active.find(riders.front())==active.end())
              {
                riders.pop();
              }
        if(riders.empty() || drivers.empty())
        {
            return {-1,-1};
        }
        int d=drivers.front();
        int r=riders.front();
        drivers.pop();
        riders.pop();
        active.erase(r);
        return {d,r};
    }
    
    void cancelRider(int riderId) {
        active.erase(riderId);
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */