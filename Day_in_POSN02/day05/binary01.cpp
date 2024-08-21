// binary tree

template <class Elem>

class BinNodePtr : public BinNode<Elem> {
    private:
        Elem.it;
        BinNodePtr* lc;
        BinNodePtr* rc;
    public:
        BinNodePtr(){
            lc = rc = NULL;
        }
        BinNodePtr(Elem e, BinNodePtr* l = NULL, BinNodePtr* r = NULL){
            it = e;
            lc = l;
            rc = r;
        }
        Elem& val(){
            return it;
        }
        void setVal(const Elem& e){
            it = e;
        }
        inline BinNode<Elem* left() const{
            return lc;
        }
        void setLeft(BinNode<Elem>* b){
            lc = (BinNodePtr*)b;
        }
        inline BinNode<Elem>* right() const{
            return rc;
        }
        void setRight(BinNode<)
};

// not done