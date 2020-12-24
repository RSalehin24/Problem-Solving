/*Class code with operator overloading and copy constructor*/

class Box{
    
    private:
        //l,b,h are integers representing the dimensions of the box
        int l;
        int b;
        int h;
        
    public:
        // The class should have the following functions : 
        // Constructors: 
        // Box();
        Box(){
            l=b=h=0;
        }
        // Box(int,int,int);
        Box(int length, int breadth, int height){
            l=length;
            b=breadth;
            h=height;
        }
        // Box(Box);
        Box(Box &B){
            l=B.getLength();
            b=B.getBreadth();
            h=B.getHeight();
        }

        // int getLength(); // Return box's length
        int getLength(){
            return l;
        }
        // int getBreadth (); // Return box's breadth
        int getBreadth(){
            return b;
        }
        // int getHeight ();  //Return box's height
        int getHeight(){
            return h;
        }
        // long long CalculateVolume(); // Return the volume of the box
        long long CalculateVolume(){
            long long v = l;
            v *= b;
            v *= h;
            return v;
        }

        //Overload operator < as specified
        //bool operator<(Box& b)
        bool operator<(Box& B){
            if(this->l<B.getLength()) return true;
            else if(this->b<B.getBreadth() && this->l==B.getLength()) return true;
            else if(this->h<B.getHeight() && this->b==B.getBreadth() && this->l==B.getLength()) return true;
            else return false;
        }

        //Overload operator << as specified
        //ostream& operator<<(ostream& out, Box& B)
        friend ostream & operator << (ostream &out, Box &B);  
}; 

ostream & operator << (ostream &out, Box &B){
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
            return out;
}
