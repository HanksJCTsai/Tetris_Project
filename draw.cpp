#include "draw.h"
/*
 	    0	1	2	3	4	5	6	7	8	9	A	B	C	D	E	F
U+250x	─	━	│	┃	┄	┅	┆	┇	┈	┉	┊	┋	┌	┍	┎	┏
U+251x	┐	┑	┒	┓	└	┕	┖	┗	┘	┙	┚	┛	├	┝	┞	┟
U+252x	┠	┡	┢	┣	┤	┥	┦	┧	┨	┩	┪	┫	┬	┭	┮	┯
U+253x	┰	┱	┲	┳	┴	┵	┶	┷	┸	┹	┺	┻	┼	┽	┾	┿
U+254x	╀	╁	╂	╃	╄	╅	╆	╇	╈	╉	╊	╋	╌	╍	╎	╏
U+255x	═	║	╒	╓	╔	╕	╖	╗	╘	╙	╚	╛	╜	╝	╞	╟
U+256x	╠	╡	╢	╣	╤	╥	╦	╧	╨	╩	╪	╫	╬	╭	╮	╯
U+257x	╰	╱	╲	╳	╴	╵	╶	╷	╸	╹	╺	╻	╼	╽	╾	╿
*/
namespace dw
{
    //         						0123456
	const std::u32string style1 = U" ┌┐└┘│─";
	const std::u32string style2 = U" ╔╗╚╝║═";
	const std::u32string style3 = U" ┏┓┗┛┃━";
	const std::u32string style4 = U" ╭╮╰╯│─";
	const std::u32string cur_style = style1;

	void window(int top, int left, int width, int hight, std::string title) {
		for(int r=0; r< hight; ++r)
		{
			tc::move_to((top+r), ut::blocktwocol(left));
			for (int c = 0; c < width; ++c)
			{
				if(r==0){ 					   //第一行
					if(c == 0){                	 //第一例
						std::cout<< ut::utf32_to_utf8({cur_style[0],cur_style[1]});
					}else if(c == (width -1)){   //最後一例
						std::cout<< ut::utf32_to_utf8({cur_style[2]});
					}else { 				     //其他例
						std::cout<< ut::utf32_to_utf8({cur_style[6],cur_style[6]});
					}
				} else if(r == (hight-1))      //最後一行
				{
 					if(c == 0){                  //第一例
						std::cout<< ut::utf32_to_utf8({cur_style[0],cur_style[3]});
					}else if(c == (width -1)){   //最後一例
						std::cout<< ut::utf32_to_utf8({cur_style[4]});
					}else { 				     //其他例
						std::cout<< ut::utf32_to_utf8({cur_style[6],cur_style[6]});
					}
				}else{			               //其他行
					if(c == 0){                  //第一例
						std::cout<< ut::utf32_to_utf8({cur_style[0],cur_style[5]});
					}else if(c == (width -1)){   //最後一例
						std::cout<< ut::utf32_to_utf8({cur_style[5]});
					}else { 				     //其他例
						std::cout<< ut::utf32_to_utf8({cur_style[0],cur_style[0]});
					}
				}
			}
		}
		tc::move_to(top,ut::blocktwocol(left) + (((width*2) - title.length())/2));
		std::cout<<title;
	}
} // namespace dw