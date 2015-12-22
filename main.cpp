#include"global.h"
int main()
{
	if((sourcefile=fopen("test","r"))==NULL)
	{
			cout << "file open error\n";
	}
	global_init();
	symbtable_new_level("main");
	parser_program();
	global_quadruple_display();

	//global_quadruple_display();
	basicblock_func_to_block();
	basicblock_print_all_blocks();
	/*if(!global_error_num)
	{
		optimazation_adr_alloc();
		symbtable_display();
		global_quadruple_display();
		generate_main();
		return 0;
	}*/
}
