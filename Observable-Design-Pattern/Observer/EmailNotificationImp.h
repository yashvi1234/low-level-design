#include "ObserverInterface.h"
#include "../Observable/ObservableInterface.h"
#include <iostream>
using namespace std;

class EmailNotificationImp : public ObserverInterface {
    ObservableInterface* obj;
    string user;

    public:
    EmailNotificationImp(ObservableInterface* obj, string user): obj(obj), user(user){}

    void update(){
        auto [stock, product] = obj->getData();
        sendMail(product, stock, " Now available with ");
    }

    void sendMail(string product, int stock, string msg){
        cout<<user<<": "<<product<<msg<<stock<<endl;
    }
};