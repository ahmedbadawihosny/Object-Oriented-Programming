#include <iostream>
using namespace std;

struct queue
{
  int arr[100];
  int size;

  queue()
  {
    size = 0;
  }

  void add_end(int num)
  {
    arr[size++] = num;
  }

  void add_front(int num)
  {
    for (int i = size - 1;i >= 0;--i)
    {
      arr[i+1] = arr[i];
    }
    arr[0] = num;
    size++;
  }

  int remove_value()
  {
    int remmove = arr[0];
    for (int i = 1; i< size;++i)
    {
      arr[i-1] = arr[i];
    }
    --size;
    return remmove;
  }

  void print_queue()
  {
    for (int i = 0;i < size;++i)
    {
      cout<<arr[i]<<" ";
    }
    cout<<"\n";
  }
};

int main()
{
  queue my_queue;
  my_queue.add_end(10);
  my_queue.add_end(20);
  my_queue.add_end(30);
  my_queue.print_queue();

  my_queue.add_front(1);
  my_queue.add_front(4);
  my_queue.print_queue();

  cout<<my_queue.remove_value();
  return 0;
}