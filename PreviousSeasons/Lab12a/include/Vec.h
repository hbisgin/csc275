#ifndef VEC_H
#define VEC_H

class Vector{
public:
    Vector():x(0), y(0){}
    Vector(int xx, int yy):x(xx), y(yy){}
    void setX(int xx){x=xx;}
    void setY(int yy){y=yy;}
    int getX()const {return x;}
    int getY()const {return y;}
    void display() const;
    const Vector operator + (const Vector &v2) const;

private:
    int x,y;

};

const Vector operator - (const Vector &v1, const Vector &v2);
const Vector operator - (const Vector &v1);
#endif // VEC_H
