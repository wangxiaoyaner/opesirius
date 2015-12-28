#include"global.h"
int main()
{
	char filename[100];
	printf("Enter the filename:");
	scanf("%s",filename);

	if((sourcefile=fopen(filename,"r"))==NULL)
	{
			cout << "file open error\n";
	}
	global_init();
	symbtable_new_level("main");
	parser_program();
	/*	symbtable_display();	*/

		global_quadruple_display();
	basicblock_func_to_block();
	cout << "after div block"<<endl;
	codes_to_codes();
//{	basicblock_print_all_blocks();}
/*	if(!global_error_num)
	{*/
		optimazation_adr_alloc();

		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		symbtable_display();
		bb_display_quad();
		generate_main();
	//}
}
