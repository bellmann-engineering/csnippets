template<class T>
class MeinVektor
{
	public:
		MeinVektor(int capacity = 1) // def. param
		{
			m_size =0;
			m_capacity = capacity;
			m_data = new T[capacity];
		}
		
		~MeinVektor()
		{
			if(m_data != NULL)
				delete [] m_data;
		}
		
		T getAt(int index)
		{
			//check if index < size -> exception
			return m_data[index];			
		}
		
		void add(T item)
		{
			if(m_size >= m_capacity)
			{
				resize();				
			}
			
			m_data[m_size] = item;	
			m_size++;			
		}

	private:
		T* m_data; //pointer auf array von elementen 
		int m_size;
		int m_capacity;
		
		void resize()
		{
			int newCapacity = m_capacity * 2;
			T* newData = new T[newCapacity];
			
			for(int i=0; i<m_size; i++)
				newData[i] = m_data[i];
			
			delete m_data;
			m_data = newData;
			m_capacity = newCapacity;
		}
};
