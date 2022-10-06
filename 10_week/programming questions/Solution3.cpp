#include <iostream>
class point { 
    public:
        point(int x = 0, int y = 0) : _px(new int(x)), _py(new int(x)) { } 
        point(const point& p) : _px(new int(*(p._px) * 2)), 
                                   _py(new int(*(p._py) * 2)) { }  
        point& operator=(const point& p) {   
        if (this != &p) { 
            delete _px;
            delete _py;
            _px = new int(*(p._px) * 3);
            _py = new int(*(p._py) * 3);
        } 
        return *this;
    }
    ~point() { delete _px; delete _py; } 
    point(point&& p) noexcept : _px(p._px), _py(p._py) {
      _px =  new int(*(p._px)*4);
      _py =  new int(*(p._py)*4);
      p._px = nullptr;
      p._py = nullptr;
      
        //code-segment-1
    }   
    point& operator=(point&& p) noexcept{
        //code-segment-2
      delete _px;
      delete _py;
      
      _px =  new int(*(p._px)*5);
      _py =  new int(*(p._py)*5);
      p._px = nullptr;
      p._py = nullptr;
      
    }
    friend std::ostream& operator<<(std::ostream& os, const point& p) { 
        std::cout << "(" << *(p._px) << ", " << *(p._py) << ")";
        return os;
    }
    friend std::istream& operator>>(std::istream& os, point& p) { 
        std::cin >> *(p._px) >> *(p._py);
        return os;
    }
    private:
        int *_px = nullptr, *_py = nullptr; 
};

int main(){
    point p1;
    std::cin >> p1;
    point p2 = p1;
    point p3;
    p3 = p1;
    std::cout << p1 << ", " << p2 << ", " << p3 << std::endl;
    
    point p4 = std::move(p1);
    std::cout << p4 << ", ";
    point p5;
    p5 = std::move(p4);
    std::cout << p5;
    return 0;
