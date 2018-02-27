#include "Vector.hpp"

#include <utility>

//Double Capacity
void Vector::double_capacity() {
    //Allocate memory with double current capacity
    //Store new size of capacity
    this->capacity = capacity;
    //Iterate through old vector & copy values
    //into new Vector
    //Delete current vector
    //Copy new vector to old vector
    //Copy new capacity to old Capacity

    //Error
    if (there is error) {
      throw "Vector.double_capacity: Index error"
    }

    //No Error
}

//Default Constructor
Vector::Vector() :
    arr(new int[1]),
    length(0),
    capacity(1) {}

//Copy Constructor
Vector::Vector(const Vector &other) :
    arr(new int[other.capacity]),
    length(other.size()),
    capacity(other.capacity) {

    for(std::size_t i = 0; i < other.size(); i++) {
        this->arr[i] = other.arr[i];
    }
}

//Move Constructor
Vector::Vector(Vector&& other) {
    //Copy values into temp
    //Save temp
    //set old vector to null
}

//Destructor
Vector::~Vector() {
    delete [] Vector;
}

//Append
void Vector::append(int num) {
    //Check index out of bounds
    if (index > capacity) || index < 0) {
      throw "Vector.append: Index error";
    }

    //Checks capacity
    if ((length+1) > capacity) {
        double_capacity();
    }

    //Appends number to end of vector
    arr[length + 1] = num;
}

//Insert
void Vector::insert(int index, int num) {
    //Check index out of bounds
    if (index > length || index < 0) {
        throw "Vector.insert: Index error";
    }

    //Check to ensure there is enough capacity
    if((this->length + 1) >= this->capacity) {
        this->double_capacity();
    }

    //Iterate to index
    for (int i = this->lenth; i > index; --i) {
        arr[i] = arr[i - 1];
    }

    //Insert at index
    arr[index] = num;

    //Increment value
    length++;
}

//Remove
void Vector::remove(int index) {

}

int Vector::get(int index) {

}

//Returns length of Vector
std::size_t size() const {return length}

int& operator[](int index) {
    if(index > capacity || index < 0) {
        throw "Vector.operator: Index error";
    }


}
