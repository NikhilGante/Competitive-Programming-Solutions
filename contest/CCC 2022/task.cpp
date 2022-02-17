class _Task{

  std::function func;
  Task* task_ptr = nullptr;
  const char* name;

public:
  _Task(std::function func, const char* name):
    func(func), name(name)
  {}
  void start(){
    if(task_ptr == nullptr) task_ptr = new Task(func);
    else printf("%s's task start failed, already running\n", name);
  }
  void kill(){
    if(task_ptr == nullptr) printf("%s's task kill failed, already dead\n", name);
    else{
      task_ptr->remove(); // removes task from the scheduler
      delete task_ptr;  // deallocates the task object
      task_ptr = nullptr;
    } 
  }
  void rebind(std::function func){
    kill();
    this->func = func;
    start();
  }
};