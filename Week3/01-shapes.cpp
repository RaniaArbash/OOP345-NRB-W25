






#include <iostream>

class Shape {
public:
   virtual double volume() const = 0;
    virtual Shape* clone() = 0;
};
class Cube : public Shape {
   double len;
public:
   Cube(double);
   double volume() const;
    Shape* clone();
};
Cube::Cube(double l) : len{ l } {
}
Shape* Cube::clone(){
    return new Cube(*this);
}

double Cube::volume() const {
   return len * len * len;
}



class Sphere : public Shape {
   double rad;
public:
   Sphere(double);
   double volume() const;
    Shape* clone();
};

Sphere::Sphere(double r) : rad{ r } {
}

double Sphere::volume() const {
   return 4.18879 * rad * rad * rad;
}
Shape*  Sphere::clone() {
    return new Sphere(*this);
}


void displayVolume(const Shape* shape) {
   if (shape)
      std::cout << shape->volume() << std::endl;
   else
      std::cout << "error" << std::endl;
}


//Shape* copy(const Shape& original)
//{
//    // Shape* copy = new Cube or new Sphere ();
//    Shape* copy = original.clone();
//    return copy;
//}


Shape* select() {
   Shape* shape;
   double x;
   char c;
   std::cout << "s (sphere), c (cube) : ";
   std::cin >> c;
   if (c == 's') {
      std::cout << "dimension : ";
      std::cin >> x;
      shape = new Sphere(x);
   }
   else if (c == 'c') {
      std::cout << "dimension : ";
      std::cin >> x;
      shape = new Cube(x);
   }
   else
      shape = nullptr;
   return shape;
}

int main() {
    
    Shape* shape = select();
    Shape* clone = shape->clone();
    
   Shape* shape = select();
   displayVolume(shape);
   delete shape;
}
