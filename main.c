/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:42:46 by mmanley           #+#    #+#             */
/*   Updated: 2018/03/01 18:12:18 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int		main()
{
	short	shrt = 58, sht2 = 6659;
	int		i = 0, ex = -526, ex2 = 652, ex3 = -2569, ret = 0;
	long	lng = 56987456311999;
	long long	lngl = -99999999996, lngmax = 9223372036854775807, lngmin = -9223372036854775808;

	unsigned short	usht = 5845;
	unsigned int uex = 4000000000;
	unsigned long	ulng = 3500000000000001234;
	unsigned long long	ulngl = 8750000124875457865, umax = 18446744073709551615, utest = 18446744031709551615;

	char	c = 'A';
	char test = ex;
	char	*s1 = "\n___Salut le monde _% 011.215h16.25*.*h*.*d_%#15.12X___  LAST : %-15.5d+++\n", *s2 = "This is a sentence";
	char	*s3 = "TEST %lld %ld", *s4 = "_%-+*d_\n";
	char	*s5 = "_%20s_ petit test si possible\n", *s6 = "\n\n";

//ft_printf("|#		'# + - 0 15 L d'		: _%#0+---hh--hhh-++++++0015d_\n", ex2);

	nbr_cmp();
/*	ft_printf("_%0100.25s_\n", "Salut les gens");
	printf("_%0100.25s_\n", "Salut les gens");*/
/*
	ft_printf(s1, 10, 12, 45, 20, ex2, ex3, ex2);
	printf(s1, 10, 12, 45, 20, ex2, ex3, ex2);
	ft_printf(s6);
	ret = ft_printf(s5, s2);
	ret = printf(s5, s2);
	ft_printf(s6);
	ft_printf(s4, 5, 0);
	printf(s4, 5, 0);
	ft_printf(s6);
	ft_printf("TEST -> _%0*.*d_", 1, 0, 0);
	printf("\n RET = %#d\n\n", ret);
*/
	/*char	*str = "%lc";
	int		data = 1286;
//	int		data = 123456;
//
	int ch;

	char tab[20];
	int fd = -100;

	ft_bzero(tab, sizeof(tab));




	printf("%+ .20jd\n", MAX_INT *4);
	fflush(stdout);
	ft_printf("%+ .20jd\n", MAX_INT*4);
	ft_printf("%+ .20d\n", MIN_INT);
	ft_printf("%+ .20d\n", 0);
	printf("%+ .20d\n", 0);
	fflush(stdout);
	ft_printf("%+ .20d\n", 42);
	ft_printf("%+ .20d\n", -42);

	printf("%+ 30.0jd\n", MAX_INT *4);
	fflush(stdout);
	ft_printf("%+ 30.0jd\n", MAX_INT*4);
	ft_printf("%+ 30.0d\n", MIN_INT);
	ft_printf("%+ 30.0d\n", 42);
	ft_printf("%+ 30.0d\n", -42);
	ft_printf("1_%0 .d_\n", 0);
	   printf("1_%0 .d_\n", 0);
	fflush(stdout);

	ft_printf("2_%0 1.d_\n", 0);
	   printf("2_%0 1.d_\n", 0);
	fflush(stdout);

	ft_printf("3_%0 2.d_\n", 0);
	   printf("3_%0 2.d_\n", 0);
	fflush(stdout);

	ft_printf("4_%0 3.d_\n", 0);
	   printf("4_%0 3.d_\n", 0);
	fflush(stdout);

	ft_printf("5_%+-0 5.0jd_\n",0, 5,0,0);
	   printf("5_%+-0 5.0jd_\n",0, 5,0,0);
	fflush(stdout);
*/

//	ft_printf("%.5-.7+.l2 0hhhhhhhhhhhhh .*z42f*s", 50, 12,"bonjour");
//	ft_printf("%5d");
//	ft_printf("%5d");
//	ft_printf("%5d");
//	ft_printf("%5d");
//	ft_printf("%5d");
//	ft_printf("%5d");
//	ft_printf("%5d");
//	ft_printf("%5d");
//	ft_printf("%5d");
//	ft_printf("%5d");
/*	data = -3;
	while (data <= 270)
	{
		ft_putnbr(data);
		ft_putstr("\n");
		ft_putstr("printf \t\t>");
		printf(str, data);
		fflush(stdout);
		ft_putstr("<\nftprintf \t>");
		ft_printf(str, data);
		ft_putstr("<\n\n");
		data++;
		if (data== 10)
			data = 120;
		if (data == 130)
			data = 250;
//		ft_temporize(1);
	}


	str = "%c";
	data = -3;
	while (data <= 270)
	{
		ft_putnbr(data);
		ft_putstr("\n");
		ft_putstr("printf \t\t>");
		printf(str, data);
		fflush(stdout);
		ft_putstr("<\nftprintf \t>");
		ft_printf(str, data);
		ft_putstr("<\n\n");
		data++;
		if (data== 10)
			data = 120;
		if (data == 130)
			data = 250;
//		ft_temporize(1);
	}*/
/*
	printf("+-------------------------LET'S START THIS SHIT-------------------------->\n");
	printf("\n|*******************************NBRS 'D'*********************************|\n");
	printf("|#%2d		'pres 0'			: _%0.d_\n", i++, 0);
	printf("|#%2d		'pres 0'			: _%d_\n", i++, s1);
	printf("|#%2d		'pres 0'			: _%0d_\n", i++, 1);
	printf("|#%2d		'pres 0'			: _%4d_\n", i++, 123);
	printf("|#%2d		'pres 0'			: _%+++++10.15h-20.15hd__________\n", i++, 123457);
	printf("|#%2d		'pres 0'			: _%++0+++20hhd__________\n", i++, 123457);
	printf("|#%2d		'd'				: _%d_\n", i++, ex);
	printf("|#%2d		'D'				: _%D_\n", i++, ex);
	printf("|#%2d		'7 d'				: _%7d_\n", i++, ex);
	printf("|#%2d		'0 7 d'				: _%07d_\n", i++, ex);
	printf("|#%2d		'- 6 d'				: _%-6d_\n", i++, ex);
	printf("|#%2d		'     d'			: _%        d_\n", i++, ex);
	printf("|#%2d		'    -d'			: _%     -d_\n", i++, ex2);
	printf("|#%2d		'+ d'				: _%+d_\n", i++, ex);
	printf("|#%2d		'+ - 6 d'			: _%+-6d_\n", i++, ex);
	printf("|#%2d		'h d'				: _%hd_ \n", i++, shrt);
	printf("|#%2d		'hh d'				: _%hhllhhd_\n", i++, sht2);
	printf("|#%2d		'j d'				: _%jd_\n", i++, lng);
	printf("|#%2d		'l d'				: _%ld_\n", i++, lng);
	printf("|#%2d		'-526 l d'				: _%ld_\n", i++, ex);
	printf("|#%2d		'll d'				: _%lld_\n", i++, lngl);
	printf("|#%2d		'- + 15 . 6 hh d'		: _%+15.6-hhd_\n", i++, c);
	printf("|#%2d		'hhhd'				: _%hhhd_\n", i++, sht2);
	printf("|#%2d		'hh05d'				: _%hh05d_%c\n", i++, test, test);
	printf("|#%2d		'- # x'				: _%#0+-15d_\n", i++, ex2);
	printf("|#%2d		'# + - 0 15 L d'		: _%#0+---hh--hhh-++++++0015d_\n", i++, ex2);
	printf("|#%2d		'# 0 + - 15 d'			: _%#0+-15d_\n", i++, ex2);
	printf("|#%2d		'0 15 L d'			: _%015Ld_\n", i++, ex2);
	printf("|#%2d		'+ 15 b L d'			: _%+15bLd_\n", i++, ex2);
	printf("|#%2d		'+ 15  L d'			: _%+15Ld_\n", i++, ex2);
	printf("\n|*******************************NBRS 'U'*********************************|\n");
	printf("|#%2d		'u'				: _%u_\n", i++, uex);
	printf("|#%2d		'h u'				: _%hu_\n", i++, usht);
	printf("|#%2d		'hh u'				: _%hhu_\n", i++, usht);
	printf("|#%2d		'l u'				: _%lu_\n", i++, ulng);
	printf("|#%2d		'll u'				: _%llu_\n", i++, umax);
	printf("|#%2d		'j u'				: _%ju_\n", i++, umax);
	printf("|#%2d		'hh u'				: _%hhu_\n", i++, umax);
	printf("|#%2d		'h u'				: _%hu_\n", i++, umax);
	printf("|#%2d		'z h u'				: _%zu_\n", i++, umax);
	printf("|#%2d		'j h u'				: _%jhu_\n", i++, umax);
	printf("|#%2d		'll d'				: _%ju_\n", i++, lngl);
	printf("|#%2d		'n'				: _%n_\n", i++, ex3);
	printf("|#%2d		'pourcent'			: _% 010%_\n", i++);
	printf("\n|*******************************NBRS 'X/O'*******************************|\n");
	printf("|#%2d		'x %d'				: _%x_\n", i++, usht, usht);
	printf("|#%2d		'X %ld'			: _%X_\n", i++, lng, lng);
	printf("|#%2d		'X %ld'			: _%lX_\n", i++, lng, lng);
	printf("|#%2d		'X %ld'			: _%llX_\n", i++, lng, lngl);
	printf("|#%2d		'x %hd'				: _%o_\n", i++, usht, usht);
	printf("|#%2d		'x %ld'			: _%lo_\n", i++, ulng, ulng);
*/
/*
	printf("\n|*******************************STRS***********************************|\n");
	printf("|#%2d		'c'				: _%c_\n", i++, c);
	printf("|#%2d		'c'				: _%0c_\n", i++, c);
	printf("|#%2d		'10 c'				: _%10c_\n", i++, c);
	printf("|#%2d		'10 l c'			: _%10lc_\n", i++, (char)155);
	printf("|#%2d		' hh c'			: _%hhc_\n", i++, 1074);
	printf("|#%2d		' c'				: _% c_\n", i++, 1074);
	printf("|#%2d		'  c'				: _%#c_\n", i++, 125);
	printf("|#%2d		's'				: _%s_\n", i++, s2);
	printf("|#%2d		'0 50 s'			: _%025s_\n", i++, s2);
	printf("|#%2d		'# + 25 s'			: _%#+25s_\n", i++, s2);
	printf("|#%2d		'# + 25. s'			: _%#+025s_\n", i++, s2);
	printf("|#%2d		'25 hh s'			: _%25hhs_\n", i++, s2);
	printf("|#%2d		'# + 25 s'			: _%#+25lls_\n", i++, s2);
	printf("|#%2d		'- 25 + h s'			: _%-#++h25s_\n", i++, s2);
	printf("+-------------------------END THIS  SHIT BITCHS-------------------------->\n");
*/

/*
	printf("TRUE PRINTF : %s   %c_, pokh\n", s2);

	printf("_%+010.25hhd_\n", 12);
	printf("_%- .4hhd_\n", 12);
	printf("_%+010d_\n", -12);
	printf("_% s_\n", "-12");
	printf("_%20.15f_\n", 12.569);
	printf("_%20.15f_\n", 12.56984589);
	printf("_%-f_\n", 12.569845892222229);
	printf("_%-d_\n", 12.569845892222229);
	printf("_%f_\n", (int)12.569845892222229);
	printf("_%12-#+.5x_ \t% v_tdest_\n", 12);
	printf("_%10.4s_\n", "BONJOUR");
*/
/*
printf(" llc %hc\n********************************\n", 2015);
	ft_printf("Premier try _%+-lD_ comment _%d_a voir %#hhjzll50.45x 1_%i 2_%lli 3_%hi 4_%hu je peux ecrire tout ce que je veux est_ce vrai selon les conneries d'une taille chelou jdshfaiushgiuhsuhtvnuiuahguvhnuighurnagjarhguindfjghdfiugjiouhguojk uh ui uagh iuhg iunagnoun\n\n nhiuhnnhygr vvtyuiryuifukfyhjhjcjdlkiofdfds5gs456g4fs864g56f4g8a4768g4da56j4h86dg4j68adg4j8dg4h564adt68 4h86tda4 h68tda4 68h4dg68jh 4dg8j468t4ja56t4j8atd4j86dt4aj864gtdt 684j86dat4j68ag4j68468j4f68sg4j68fg4j68fs4j64g6j446jsj4sf68j468 46j84 s6j84sf 68j468yf s468yfs4 68sfy4k68 4fys68k4fy68 4fy68s468fs4k68fy47sk684sf58k4fys87k68fy4k68sfy4 68k4fy68k89fy4kj68f4y 68j4fy6j4f56j465f4k6fy4k68fy4k8f4yj864fy6j4f8j468j4fhd68j4 yf984j 6fs54j6y84j98 sf4j68f4 j84fyk894fy84f685k4jodshguinndsjagjhruighiufjhgfdh45f6h4df68h468df4h56df4hg687df68g564b68er4b68df4g68df4h684fd68h4gda56h4a89dg74ah56c4v56bz4684hf68z4h65gd4h89f7j894g56zh4 8g4h894d 89h498gd47h894fg8h4fj84fx8j4f6x8j4f8j4f864jfg89j4f8j4s89j4f864j89yd4fn89j47ry89du4y98 0489rs48hts4fj89s4ft89j4 f980j89fy0 4j89f4j65sf 4061h8940 68t1sh6s5t4jh89s4sj89s4j65f40j94j68f4 05n5f6x0g189f4h89y7t489j4sth156g1h089ts04h89t40h651d6510d5640h984st89h4t0hs8r40h56048940h89t04h89t4h84t56h015604h89rt4h98t4h068t4hs98r47h98rt4h84h6s4h98s048fs60 4hsy89fy4 j0j488 04j98fys4j 98f4068f 4084hjs9 0j84s98 j04t8j 40s98j4 09rt80j 894j 890f4j 9804j8 0f4j98 j4068f 04j8fy 04j98f 40jf894 j0f9yj0 4f98j0 48t6j 0f489j0 j48 04j800j4r8940j98rj40f684jfg0j54f98j07y9=r07j98sry4j68f498f07jry4j086sf456gf4n89y07j9=sr0748j4h5f604j98f0=j7rs980j40gf654j0 s684j89r07 j89sry 098  fkeiJFOIRWGRHTD4JH8T4AU40A8 4J89YR48J 40RJ8 40J684FA8 J04F68A4J068T4AJ8904TA8 J484J68A 4J68F4 J68465J1G654H6GZ15H3F1Z354H89T4S8H40 T6AJ4 4J098S4RTA8 40J89AY04J5G54GZ98H04 98T4SJ65S G0N8G4X89 A54 089TA4 9840 J4SY 4J65S498 J456S1J56 04J84SY8 4J68S4 J6511N5Z4H 84 8R48 0awh4 t8904j56fs 4065j40  804j84y0 86j4fhs5640 840sk8 56sk10h5 g1m654dg8 04 684j6yf4j68s4j651510js564 %d\n", lngmax +15, 456, 456, 56987, 123456, 47856, -569874, 42);
	//ft_printf("Premier try _%+-lD_ comment _%d_a voir %#hhjzll50.45x 1_%i 2_%lli 3_%hi 4_%hu tout \0 jodshguin %d\n", lngmax +15, 456, 456, 56987, 123456, 47856, -569874, 42);
	//ft_printf("Let's try it with a reasonable amout to count the effecting sizes _|_%ld_|_between the two first +_%x_+ gogolito _%X_", lng, 2563, 789456);
	printf("\nPrintf true _%ld_, %x, %X \0 fjhgiuhruigh %d\n",lng ,  2563, 789456, 42);
*/
	//ft_printf(s1, 18446744073708551615);
	//printf("Salut le world %+ 0+5256+.152+12hhh0h' d_\n\n",18446744073708551615);
	//printf("%c\n", '\0');
	//ft_printf(s1, 18446744073708551615, ex2);
	//printf("\n%llu\n_%+5852#+50x_\n",18446744073708551615, 18446744073708551615);
	/*
	ft_printf(s1, ex, ex2);
	printf("%hhd\n\n", ex, ex2);
	ft_printf(s3, lngl, lng);
	printf("%lld %ld\n", lngl, lng);
	*/
	return (0);
}
