Кидай все сюда потом разберемся
//////////////////////main///////////////

  cout << endl;/////////демонстрация работы.
  Queue B(A);
  B.print();
  cout << endl;
  Queue C;
  C=B;
  C.print();


////////////////////////////////////Man.h///////////////////////////////


  Man(const Man &m);//перегрузка конструктора копии
  Man operator=(Man& right);//перегрузка оператора =
 
//////////////////////////////////////Man.cpp//////////////////////////

Man::Man(const Man &m)//перегрузка конструктора копии
{
    this->value=m.value;
    this->next=m.next;
}


Man Man::operator=(Man& right)//перегрузка оператора =
{
    this->value=right.value;
    this->next=right.next;
    return *this;
}
/////////////////////////////////////////////////Queue.h////////////////////////////////

  Queue(const Queue &q);//перегрузка конструктора копии
  Queue operator=(Queue& right);//перегрузка оператора =
  
////////////////////////////////////////////Queue.cpp///////////////////////////////////

Queue::Queue(const Queue &q) //перегрузка конструктора копии
{
    this->count=q.count;
    this->head=q.head;
    this->tail=q.tail;
}

Queue Queue::operator=(Queue& right)//перегрузка оператора =
{
    this->count=right.count;
    this->head=right.head;
    this->tail=right.tail;
    return *this;
