#include "define.h"
#include "terminal.h"
#include "utils.h"
#include "draw.h"
#include "control.h"
#include "game.h"


void init(){
    gm::init();
    tc::hide_cursor();
    gm::start_listener();
}

void loop(){
    int i =1;
    while (gm::running){
        tc::clean_screen();
        dw::window(1,1,9,6,"Hide");
        dw::window(7,1,9,16,"Status");
        dw::window(1,10,12,22,"Tetris");
        dw::window(1,22,8,18,"Next");
        dw::window(19,22,8,4,"Info");

        tc::move_to(10,4);
        std::cout<<"FPS:"<<ut::fps();

        tc::move_to(gm::row, ut::blocktwocol(gm::col));
        tc::set_fore_color(15); 
        std::cout <<"BB";
        tc::reset_color();

        std::cout<<std::flush;
        std::this_thread::sleep_for(100ms);//s ms us ns for FPS:120 => 1000/120 = 8ms
    }
}

void exit(){
    tc::clean_screen();
    tc::move_to(1,1);
    tc::set_fore_color(9);
    std::cout<< "Bye!"<<std::endl;
    tc::show_cursor();
    tc::reset_color();
}

int main(){
    
    init();
    loop();
    exit();

    return 0;
}