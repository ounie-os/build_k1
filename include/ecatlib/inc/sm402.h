	////////////////////////////////////////////////////
	//Finite state 
	///////////////////////////////////////////////////
extern int hasset;//can1f(int ano);
extern void abs_init2(int ano);
#include "OD_0_0.h"
uint16_t cia402_state_machine(uint16_t status)
{
	uint16_t control_word=0;
	if( (status&0x004f) ==0x00){
		control_word = 0x0006;

	}else if( (status&0x004f) ==0x40){

		control_word = 0x0006;

	}else if( (status&0x006f) ==0x21){
		control_word = 0x0007;

	}else if( (status&0x006f) ==0x23){
		control_word = 0x000F;
	}else if( (status&0x006f) ==0x27)
	{	
		control_word=0x001F;
	}
	else if( (status&0x006f) ==0x41){
		control_word = 0x0006;
	}
	else{
		control_word = 0x0000;
	}
	return control_word;
}
uint32_t jjs_jon(uint32_t position_actual)
{
		// uint32_t position_actual=0;    
		static uint32_t counter;
		uint32_t pos_state = 0;
		uint32_t pos_inc[] = {10, 30, 60, 100, 150, 210, 280, 370, 500};
		switch (pos_state)
		{
			case 0: /* 正加速 */
			{
				position_actual += counter;
				if (counter > 190)
				{
					pos_state = 1;
					counter = 0;
				}
				break;
			}
			case 1: /* 匀速 */
			{
				position_actual += 190;
				if (counter > 5000)
				{
					pos_state = 2;
					counter = 0;
				}
				break;
			}
			case 2: /*  正减速 */
			{
				position_actual += (190 - counter);
				if (counter > 190)
				{
					pos_state = 3;
					counter = 0;
				}
				break;
			}
			
			case 3:
			{
				if (counter > 3000)
				{
					pos_state = 4;
					counter = 0;
				}
				break;	
			}
			
			case 4: /* 反加速 */
			{
				position_actual -= counter;
				if (counter > 190)
				{
					pos_state = 5;
					counter = 0;
				}
				break;
			}
			case 5: /* 反匀速 */
			{
				position_actual -= 190;
				if (counter > 5000)
				{
					pos_state = 6;
					counter = 0;
				}
				break;
			}
			case 6: /* 反减速 */
			{
				position_actual -= (190 - counter);
				if (counter > 190)
				{
					pos_state = 7;
					counter = 0;
				}
				break;			
			}
			case 7:
			{
				if (counter > 3000)
				{
					pos_state = 0;
					counter = 0;
				}
				break;
			}
		}
		return position_actual;
}

