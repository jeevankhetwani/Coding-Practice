////
//// Created by jeevan on 12/26/16.
////
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//class Shelter {
//private:
//    class Animal {
//        enum animalType {CAT, DOG};
//        animalType type;
//        string name;
//
//    public:
//        Animal(string s, string t) {
//            name = s;
//            if (t == "DOG")
//                type =  DOG;
//            else if (t == "CAT")
//                type = CAT;
//        }
//
//        void display() {
//            cout << name << " ";
//        }
//    };
//
//    queue<Animal*> cats, dogs;
//
//public:
//    void enqueue(string s, string t) {
//        if( t == "DOG" )
//            dogs.push(new Animal(s, t));
//        else if ( t == "CAT" )
//            cats.push(new Animal(s, t));
//        else
//            cout << "Wrong type";
//    }
//
//    Animal* dequeueAny() {
//
//        Animal* animal;
//
//        if (dogs.size() == 0 && cats.size() == 0)
//            return nullptr;
//
//        int total = dogs.size() + cats.size();
//
//        srand(10);
//        int index = rand() % total;
//
//        if ( index < dogs.size() ) {
//            animal = dogs.front();
//            dogs.pop();
//        } else {
//            animal = cats.front();
//            cats.pop();
//        }
//        return animal;
//    }
//
//    Animal* dequeueDog() {
//        Animal* animal = dogs.front();
//        dogs.pop();
//        return animal;
//    }
//
//    Animal* dequeueCat() {
//        Animal* animal = cats.front();
//        cats.pop();
//        return animal;
//    }
//
//    void display() {
//        queue<Animal*> temp =  dogs;
//        if (!temp.empty()) {
//            while(!temp.empty()) {
//                temp.front()->display();
//                temp.pop();
//            }
//            cout << endl;
//        }
//
//        temp =  cats;
//        while(!temp.empty()) {
//            temp.front()->display();
//            temp.pop();
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Shelter sh;
//    sh.enqueue("Tommy1", "DOG");
//    sh.enqueue("Tommy2", "DOG");
//    sh.enqueue("Tommy3", "DOG");
//    sh.enqueue("Tommy4", "DOG");
//    sh.enqueue("Pussy1", "CAT");
//    sh.enqueue("Pussy2", "CAT");
//    sh.display();
//
////    sh.dequeueAny();
////    sh.display();
//
////    sh.dequeueAny();
////    sh.display();
//
////    sh.dequeueAny();
////    sh.display();
//
//    sh.dequeueCat();
//    sh.display();
//
////    sh.dequeueDog();
////    sh.display();
//
//
//
//    return 0;
//}
