#include "ObserverInterface.h"
#include "../Observable/ObservableInterface.h"
#include <iostream>
using namespace std;

class MobileNotificationImp : public ObserverInterface {
    ObservableInterface* obj;
    string user;

    public:
    MobileNotificationImp(ObservableInterface* obj, string user): obj(obj), user(user){}

    void update(){
        auto [stock, product] = obj->getData();
        sendMessage(product, stock, " Now available with ");
    }

    void sendMessage(string product, int stock, string msg){
        cout<<user<<": "<<product<<msg<<stock<<endl;
    }
};