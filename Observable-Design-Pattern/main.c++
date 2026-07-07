#include "Observable/VernaObservable.h"
#include "Observer/EmailNotificationImp.h"
#include "Observer/MobileNotificationImp.h"
#include <memory>
using namespace std;

int main() {
    unique_ptr<ObservableInterface> verna = make_unique<VernaObservable>();

    unique_ptr<ObserverInterface> observer1 = make_unique<EmailNotificationImp>(verna.get(), "xyz@gmail.com");
    unique_ptr<ObserverInterface> observer2 = make_unique<EmailNotificationImp>(verna.get(), "abc@gmail.com");
    unique_ptr<ObserverInterface> observer3 = make_unique<MobileNotificationImp>(verna.get(), "3478593");

    verna->add(observer1.get());
    verna->add(observer2.get());
    verna->add(observer3.get());

    verna->setData(10);

    return 0;
}