class add{
public:
    add (int x) : _x( x ) { }
    operator int() { return _x; }
    add operator() ( int y) { return add(_x + y); }
    friend bool operator == (const int& a, const add& b) { return a == b._x; }
    friend bool operator != (const add& a,const int b){ return a._x != b; }
private:
    int _x;
};