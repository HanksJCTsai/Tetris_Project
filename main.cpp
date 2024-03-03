#include <iostream>
#include <thread>
#include <chrono>
#include "terminal.h"
#include "utils.h"

using namespace std::chrono_literals;



void init(){
    tc::hide_cursor();
}

void loop(){
    int i =1;
    while (true){
        tc::clean_screen();

        tc::move_to(1,1);
        std::cout<<"FPS:"<<ut::fps();

        tc::move_to((i++)%20,10);
        tc::set_fore_color(15); 
        std::cout<<"    ";
        tc::reset_color();
        std::cout<<std::flush;
        std::this_thread::sleep_for(100ms);//s ms us ns for FPS:120 => 1000/120 = 8ms
    }
}

void exit(){
    tc::show_cursor();
    tc::reset_color();
}

int main(){
    void init();
    void loop();
    void exit();
    return 0;
}