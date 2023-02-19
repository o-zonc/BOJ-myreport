#include <iostream>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle(int width, int height) {
            this->set_height(height);
            this->set_width(width);
        }

        int get_width() const {
            return this->width;
        }
        int get_height() const {
            return this->height;
        }
        void set_width(int width) {
            if (0 < width && width <= 1000) {
                this->width = width;
            } else return;
        }
        void set_height(int height) {
            if (0 < height && height <= 2000) {
                this->height = height;
            } else return;
        }
        int area() const {
            return this->width * this->height;
        }
        int perimeter() const {
            return 2 * (this->width + this->height);
        }
        bool is_square() const {
            if (this->width == this->height) {
                return true;
            } else return false;
        }
};