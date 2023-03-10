#include<iostream>
using namespace std;
/*
todo:            [basea]
todo:                |
todo:    [baseb] <---!---> [basec]
todo:      |                   |
todo:      !----> [based] <----!
*/
class basea{
    public:
        int data = 5;
};
class baseb : virtual public basea{
    
    //! Using "virtual public" create a class using base class as virtual base class

};
class basec : public virtual basea{     
    
    //! "public virtual"  and "virtual public"  works same

};
class based : public baseb, public basec{
/*
    * As we know both [baseb] and [basec] are inherted from basea
    * And Both have same "Data" public inherit member from [basea]
    * So to avoid the ambiguity, we make [baseb] and [basec] from vertual base class [basea]
    * Now ambiguity will not accure
*/
};
int main(){
    based d;
    cout<<d.data<<endl;
    return 0;
}