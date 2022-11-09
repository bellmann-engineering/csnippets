// >= C++ 11 
#include <stdexcept>
#include <memory>

template<class T>
class Something
{
    private:
        int _size;
        int _count;

    public:
        void Do()
        {
            T* array = new T[_size];

            //...
            
            if(_count < 0)
                throw std::invalid_argument("Count zu klein");

            //...

            delete [] array;
        }

        void DoBetter()
        {
            std::unique_ptr<T> array = new T[_size];
            // oder
            //std::unique_ptr<T> array = std::make_unique<T>();
            // oder
            //auto array = std::make_unique<T>();

            //...
            
            if(_count < 0)
                throw std::invalid_argument("Count zu klein");

            //...

            // kein delete
            // wenn es aus dem scope läuft löscht der destruktor es
        }

};


int main()
{
    

    
    
}
