/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:04:06 by mmanley           #+#    #+#             */
/*   Updated: 2018/03/07 18:11:09 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	nbr_cmp(void)
{
	short	shrt = 58, sht2 = 6659;
	int		i = 0, ex = -526, ex2 = 652, ex3 = -2569, ret = 0, fd = 0;
	long	lng = 56987456311999;
	long long	lngl = -99999999996, lngmax = 9223372036854775807, lngmin = -9223372036854775808;

	unsigned short	usht = 5845;
	unsigned int uex = 4000000000;
	unsigned long	ulng = 3500000000000001234;
	unsigned long long	ulngl = 8750000124875457865, umax = 18446744073709551615, utest = 18446744031709551615;

	char	c = 'A';
	char test = ex;
	char	*s1 = "___Salut le monde _% 011.215h16.25*.*h*.*d_%#15.12X___  LAST : %-15.5d+++\n", *s2 = "This is a sentence";
	char	*s3 = "TEST %lld %ld", *s4 = "_%-+*d_\n";
	char	*s5 = "_%20s_ petit test si possible\n", *s6 = "\n\n", *s7 = "___Salut le monde _% 011.215h16.25*.*h*.*d_%#15.12X___  LAST : %-15.5d+++ NEW LaSt : '%-26.15s'++==++\n";
	char	r1[50001];

	fd = open("text.txt", O_RDONLY);
	read(fd, r1, 50000);
	r1[50000] = '\0';
	setlocale(LC_ALL, "");
	printf("TITLE TO PARS THE RENDER\n");
	fflush(stdout);

		ft_printf("%i\n", 0);
		printf("%i\n", 0);
		fflush(stdout);
		ft_printf("%d, %d\n", 245, -952);
		printf("%d, %d\n", 245, -952);
		fflush(stdout);
		ft_printf("%+i %+i % i % i\n", 321, -321, 321, -321);
		printf("%+i %+i % i % i\n", 321, -321, 321, -321);
		fflush(stdout);
		ft_printf("%10i\n", 12);
		printf("%10i\n", 12);
		fflush(stdout);
		printf("_%+ jd_\n", MAX_INT *4);
		fflush(stdout);
		ft_printf("_%+ jd_\n", MAX_INT*4);
		ft_printf("%+ d\n", 0);
		printf("%+ d\n", 0);
		fflush(stdout);
		printf("%+ d\n", -42);
		fflush(stdout);
		ft_printf("%+ d\n", -42);
		printf("%+ 20jd\n", MAX_INT *4);
		fflush(stdout);
		ft_printf("%+ 20jd\n", MAX_INT*4);
		ft_printf("%+ 20d\n", MIN_INT);
		printf("%+ 20d\n", MIN_INT);
		fflush(stdout);
		ft_printf("%+ 20d\n", 0);
		printf("%+ 20d\n", 0);
		fflush(stdout);
		ft_printf("%+ 20d\n", 42);
		printf("%+ 20d\n", 42);
		fflush(stdout);
		ft_printf("%hu\n", usht);
		printf("%hu\n", usht);
		fflush(stdout);
		ft_printf("%hhu\n", usht);
		printf("%hhu\n", usht);
		fflush(stdout);
		ft_printf("%lu\n", ulng);
		printf("%lu\n", ulng);
		fflush(stdout);
		ft_printf("%llu\n", umax);
		printf("%llu\n", umax);
		fflush(stdout);
		ft_printf("%lx\n", umax);
		printf("%lx\n", umax);
		fflush(stdout);
		ft_printf("%hX\n", usht);
		printf("%hX\n", usht);
		fflush(stdout);
		ft_printf("%lx\n", -4294967296);
		printf("%lx\n", -4294967296);
		fflush(stdout);
		ft_printf("%ld\n", -4294967296);
		printf("%ld\n", -4294967296);
		fflush(stdout);
		printf("azerty %+030d qwerty\n", 1);
		fflush(stdout);
		ft_printf("azerty %+030d qwerty\n", 1);
		printf("azerty %+030d qwerty\n", -1);
		fflush(stdout);
		ft_printf("azerty %+030d qwerty\n", -1);
		ft_printf("_%#.0x_\n", 0);
		printf("_%#.x_\n", 0);
		fflush(stdout);
		ft_printf("_%05d_\n", 0);
		printf("_%05d_\n", 0);
		fflush(stdout);
		ft_printf("_%5.0d_\n", 0);
		printf("_%5.0d_\n", 0);
		fflush(stdout);
		ft_printf("_%+1.0d_\n", 0);
		printf("_%+1.0d_\n", 0);
		fflush(stdout);

		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		ft_printf("%.12d\n", 42);
		printf("%.12d\n", 42);
		fflush(stdout);
		ft_printf("%.4d\n", 42);
		printf("%.4d\n", 42);
		fflush(stdout);
		ft_printf("%.4d\n", 424242);
		printf("%.4d\n", 424242);
		fflush(stdout);
		printf("{%.20d}\n", 42);
		fflush(stdout);
		ft_printf("{%.20d}\n", 42);
		ft_printf("{%-.20d}\n", 42);
		printf("{%-.20d}\n", 42);
		fflush(stdout);
		ft_printf("%.d, %.0d\n", 0, 0);
		printf("%.d, %.0d\n", 0, 0);
		fflush(stdout);
		ft_printf("@moulitest: %.d %.0d\n", 42, 43);
		printf("@moulitest: %.d %.0d\n", 42, 43);
		fflush(stdout);
		ft_printf("%.10d\n", -42);
		printf("%.10d\n", -42);
		fflush(stdout);
		printf("%+ .0jd\n", MAX_INT *4);
		fflush(stdout);
		ft_printf("%+ .0jd\n", MAX_INT*4);
		ft_printf("%+ .0d\n", MIN_INT);
		printf("%+ .0d\n", MIN_INT);
		fflush(stdout);
		ft_printf("%+ .0d\n", 0);
		printf("%+ .0d\n", 0);
		fflush(stdout);
		ft_printf("%+ .0d\n", -42);
		printf("%+ .0d\n", -42);
		fflush(stdout);

		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		ft_printf("{%+4d}\n", -2147483648);
		printf("{%+4d}\n", -2147483648);
		fflush(stdout);
		ft_printf("{%+4d}\n", 2147483648);
		printf("{%+4d}\n", 2147483648);
		fflush(stdout);
		ft_printf("{%-10d}\n", 42);
		printf("{%-10d}\n", 42);
		fflush(stdout);
		ft_printf("{%010d}\n", -42);
		printf("{%010d}\n", -42);
		fflush(stdout);
		ft_printf("{%10d}\n", -42);
		printf("{%10d}\n", -42);
		fflush(stdout);
		ft_printf("{% 03d}\n", 0);
		printf("{% 03d}\n", 0);
		fflush(stdout);
		printf("{%0-3d}\n", 0);
		fflush(stdout);
		ft_printf("{%0-3d}\n", 0);
		printf("{%03d}\n", 0);
		fflush(stdout);
		ft_printf("{%03d}\n", 0);
		printf("{%020d}\n", 42);
		fflush(stdout);
		ft_printf("{%020d}\n", 42);
		ft_printf("{%-020d}\n", 42);
		printf("{%-020d}\n", 42);
		fflush(stdout);

		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		printf("%15.4d\n", 42);
		fflush(stdout);
		ft_printf("%15.4d\n", 42);
		printf("%15.4d\n", 424242);
		fflush(stdout);
		ft_printf("%15.4d\n", 424242);
		printf("%15.4d\n", 4);
		fflush(stdout);
		ft_printf("%15.4d\n", 4);
		printf("{%10.5d}\n", 9);
		fflush(stdout);
		ft_printf("{%10.5d}\n", 9);
		printf("{%03.2d}\n", 9);
		fflush(stdout);
		ft_printf("{%03.2d}\n", 9);
		printf("{%03.5d}\n", 9);
		fflush(stdout);
		ft_printf("{%03.5d}\n", 9);
		printf("{%03.10d}\n", 9);
		fflush(stdout);
		ft_printf("{%03.10d}\n", 9);
		printf("{%03.2d}\n", 0);
		fflush(stdout);
		ft_printf("{%03.2d}\n", 0);
		printf("{%020.8d}\n", 42);
		fflush(stdout);
		ft_printf("{%020.8d}\n", 42);
		printf("{%020.5d}\n", 42);
		fflush(stdout);
		ft_printf("{%020.5d}\n", 42);
		printf("{%20.5d}\n", 42);
		fflush(stdout);
		ft_printf("{%20.5d}\n", 42);
		printf("{%015.20d}\n", 42);
		fflush(stdout);
		ft_printf("{%015.20d}\n", 42);
		printf("{%-020.8d}\n", 42);
		fflush(stdout);
		ft_printf("{%-020.8d}\n", 42);
		printf("{%-020.5d}\n", 42);
		fflush(stdout);
		printf("{%-020.5d}\n", 42);
		fflush(stdout);
		ft_printf("{%-20.5d}\n", 42);
		printf("{%-20.5d}\n", 42);
		fflush(stdout);
		ft_printf("{%-015.20d}\n", 42);
		printf("{%-015.20d}\n", 42);
		fflush(stdout);
		ft_printf("% 10.5d\n", 4242);
		printf("% 10.5d\n", 4242);
		fflush(stdout);
		ft_printf("%+10.5d\n", 4242);
		printf("%+10.5d\n", 4242);
		fflush(stdout);
		ft_printf("%10.5d\n", -4242);
		printf("%10.5d\n", -4242);
		fflush(stdout);
		ft_printf("%03.2d\n", -1);
		printf("%03.2d\n", -1);
		fflush(stdout);
		ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
		printf("@moulitest: %5.d %5.0d\n", 0, 0);
		fflush(stdout);

		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		ft_printf("%.d\n", 0);
		printf("%.d\n", 0);
		fflush(stdout);
		ft_printf("%.0d\n", 0);
		printf("%.0d\n", 0);
		fflush(stdout);
		ft_printf("%.1d\n", 0);
		printf("%.1d\n", 0);
		fflush(stdout);
		ft_printf("%+.1d\n", 0);
		printf("%+.1d\n", 0);
		fflush(stdout);
		ft_printf("%05d\n", 0);
		printf("%05d\n", 0);
		fflush(stdout);
		ft_printf("%1d\n", 0);
		printf("%1d\n", 0);
		fflush(stdout);
		ft_printf("_%+1d_\n", 0);
		printf("_%+1d_\n", 0);
		fflush(stdout);
		ft_printf("%25d\n", 0);
		printf("%25d\n", 0);
		fflush(stdout);
		ft_printf("% .d\n", 0);
		printf("% .d\n", 0);
		fflush(stdout);
		ft_printf("%03.d\n", 0);
		printf("%03.d\n", 0);
		fflush(stdout);
		ft_printf("%+3.d\n", 0);
		printf("%+3.d\n", 0);
		fflush(stdout);
		ft_printf("%+-8.d\n", 0);
		printf("%+-8.d\n", 0);
		fflush(stdout);
		ft_printf("%1.0d\n", 0);
		printf("%1.0d\n", 0);
		fflush(stdout);
		ft_printf("%+1.0d\n", 0);
		printf("%+1.0d\n", 0);
		fflush(stdout);
		ft_printf("%+1.1d\n", 0);
		printf("%+1.1d\n", 0);
		fflush(stdout);
		ft_printf("%+.1d\n", 0);
		printf("%+.1d\n", 0);
		fflush(stdout);
		ft_printf("5_%+-0 5.0jd_\n",0, 5,0,0);
		printf("5_%+-0 5.0jd_\n",0, 5,0,0);
		fflush(stdout);
		ft_printf("_%+ 20d_\n", 0);
		printf("_%+ 20d_\n", 0);
		fflush(stdout);
		ft_printf("_%+ 20.0d_\n", 0);
		printf("_%+ 20.0d_\n", 0);
		fflush(stdout);
		printf("1_%1d_\n", 0);
		fflush(stdout);
		ft_printf("1_%1d_\n", 0);
		printf("2_%+1d_\n", 0);
		fflush(stdout);
		ft_printf("2_%+1d_\n", 0);
		printf("3_% 1d_\n", 0);
		fflush(stdout);
		ft_printf("3_% 1d_\n", 0);

		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		ft_printf("_%#-25.20u_\n", lngl);
		printf("_%#-25.20u_\n", lngl);
		fflush(stdout);
		ft_printf("_%25.20p_\n", s1);
		printf("_%25.20p_\n", s1);
		fflush(stdout);
		ft_printf("P TEST _%#-25.20p_\n", s1);
		printf("P TEST _%#-25.20p_\n", s1);
		fflush(stdout);
		ft_printf("_%#-.20p_\n", s1);
		printf("_%#-.20p_\n", s1);
		fflush(stdout);
		ft_printf("PB _%#10p_\n", s1);
		printf("PB _%#10p_\n", s1);
		fflush(stdout);
		ft_printf("PB0 _%#015.1p_\n", s1);
		printf("PB0 _%#015.1p_\n", s1);
		fflush(stdout);
		ft_printf("PB _%#015p_\n", s1);
		printf("PB _%#015p_\n", s1);
		fflush(stdout);
		ft_printf("PB2 _%#015.12p_\n", s1);
		printf("PB2 _%#015.12p_\n", s1);
		fflush(stdout);
		ft_printf("_%#-25.20x_\n", 1256);
		printf("_%#-25.20x_\n", 1256);
		fflush(stdout);
		ft_printf("_%#-25.20X_\n", 256398);
		printf("_%#-25.20X_\n", 256398);
		fflush(stdout);
		ft_printf("_%#-25.20lx_\n", 4294967296);
		printf("_%#-25.20lx_\n", 4294967296);
		fflush(stdout);
		ft_printf("_%#25.20lx_\n", -4294967296);
		printf("_%#25.20lx_\n", -4294967296);
		fflush(stdout);
		ft_printf("_% 5#o_\n", 2569);
		printf("_% 5#o_\n", 2569);
		fflush(stdout);
		ft_printf("_%#015X_\n", 1258);
		printf("_%#015X_\n", 1258);
		fflush(stdout);
		ft_printf("_%#015o_\n", 1258);
		printf("_%#015o_\n", 1258);
		fflush(stdout);
		ft_printf("_%12.6o_\n", 1258);
		printf("_%#12.6o_\n", 1258);
		fflush(stdout);

		/*printf("\n----------\nFUNKY SHIT\n----------\n");
		fflush(stdout);*/
		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		ft_printf(s1, 10, 12, 45, 20, ex2, ex3, ex2);
		printf(s1, 10, 12, 45, 20, ex2, ex3, ex2);
		fflush(stdout);
		ft_printf(s7, 10, 12, 45, 20, ex2, ex3, ex2, s5);
		printf(s7, 10, 12, 45, 20, ex2, ex3, ex2, s5);
		fflush(stdout);
		ft_printf(s5, s2);
		printf(s5, s2);
		fflush(stdout);
		ft_printf(s4, 5, 0);
		printf(s4, 5, 0);
		fflush(stdout);
		ft_printf("|#		'# + - 0 15 L d'		: _%#0+---hh--hhh-++++++0015d_\n", ex2);
		printf("|#		'# + - 0 15 L d'		: _%#0+---hh--hhh-++++++0015d_\n", ex2);
		fflush(stdout);
		ft_printf("|#		'pres 0'			: _%+++++10.15h-20.15hd__________\n", 123457);
		printf("|#		'pres 0'			: _%+++++10.15h-20.15hd__________\n", 123457);
		fflush(stdout);
		ft_printf("%s",r1);
		printf("%s",r1);
		fflush(stdout);
		ft_printf("JE TEST avec des commande non fini %010yd %d\n", 123, 15);
		printf("JE TEST avec des commande non fini %010yd %d\n", 123, 15);
		fflush(stdout);
		ft_printf("%s\n", "S+E TH- T8UtH");
		printf("%s\n", "S+E TH- T8UtH");
		fflush(stdout);

		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		ft_printf("_%s_\n", "Salut les gens");
		printf("_%s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%.5s_\n", "Salut les gens");
		printf("_%.5s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%010s_\n", "Salut les gens");
		printf("_%010s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%0100.25s_\n", "Salut les gens");
		printf("_%0100.25s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%0100-.25s_\n", "Salut les gens");
		printf("_%0100-.25s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%0100hh-.25s_\n", "Salut les gens");
		printf("_%0100hh-.25s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%.25s_\n", "Salut les gens");
		printf("_%.25s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%-.25s_\n", "Salut les gens");
		printf("_%-.25s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%+.25s_\n", "Salut les gens");
		printf("_%+.25s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%25s_\n", "Salut les gens");
		printf("_%25s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%.0s_\n", "Salut les gens");
		printf("_%.0s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%0.35s_\n", "Salut les gens");
		printf("_%0.35s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%.s_\n", "Salut les gens");
		printf("_%.s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%035s_\n", "Salut les gens");
		printf("_%035s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%035.5s_\n", "Salut les gens");
		printf("_%035.5s_\n", "Salut les gens");
		fflush(stdout);
		ft_printf("_%s_\n", NULL);
		printf("_%s_\n", NULL);
		fflush(stdout);
		ft_printf("_%10s_\n", NULL);
		printf("_%10s_\n", NULL);
		fflush(stdout);
		ft_printf("_%.2s_\n", NULL);
		printf("_%.2s_\n", NULL);
		fflush(stdout);
		ft_printf("_%010s_\n", NULL);
		printf("_%010s_\n", NULL);
		fflush(stdout);
		ft_printf("_%6.2s_\n", NULL);
		printf("_%6.2s_\n", NULL);
		fflush(stdout);
		ft_printf("_%-10s_\n", NULL);
		printf("_%-10s_\n", NULL);
		fflush(stdout);
		ft_printf("_%.2s_\n", NULL);
		printf("_%.2s_\n", NULL);
		fflush(stdout);
		ft_printf("_%-010s_\n", NULL);
		printf("_%-010s_\n", NULL);
		fflush(stdout);
		ft_printf("_%-6.2s_\n", NULL);
		printf("_%-6.2s_\n", NULL);
		fflush(stdout);
	/*	ft_printf("_%10c_\n", NULL);
		printf("_%10c_\n", NULL);
		fflush(stdout);*/

		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		ft_printf("_%ld_\n", 123456);
		printf("_%ld_\n", 123456);
		fflush(stdout);
		ft_printf("_%D_\n", 123456);
		printf("_%D_\n", 123456);
		fflush(stdout);
		ft_printf("_%d_\n", 123456);
		printf("_%d_\n", 123456);
		fflush(stdout);
		ft_printf("_%hD_\n", 123456);
		printf("_%hD_\n", 123456);
		fflush(stdout);
		ft_printf("_%hd_\n", 123456);
		printf("_%hd_\n", 123456);
		fflush(stdout);
		ft_printf("_%hhD_\n", 123456);
		printf("_%hhD_\n", 123456);
		fflush(stdout);
		ft_printf("TEST _%-+10d_ Ceci marche _%#o_ ou pas %2s\n", 569, 4569, "test");
		printf("TEST _%-+10d_ Ceci marche _%#o_ ou pas %2s\n", 569, 4569, "test");
		fflush(stdout);
		ft_printf("_%10.5s_\n", " 1 2 3 4 5 6 7 8 9");
		printf("_%10.5s_\n", " 1 2 3 4 5 6 7 8 9");
		fflush(stdout);
/*
		BONUS
*/
		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);

		ft_printf("%*.*d\n", 1, 0, 0);
		printf("%*.*d\n", 1, 0, 0);
		fflush(stdout);
		ft_printf("_%*.*d_\n", 1, 0, 0);
		printf("_%*.*d_\n", 1, 0, 0);
		fflush(stdout);
		ft_printf("_%+*.*d_\n", 1, 1, 0);
		printf("_%+*.*d_\n", 1, 1, 0);
		fflush(stdout);
		ft_printf("_%#0*x_\n", 15, 5);
		printf("_%#0*x_\n", 15, 5);
		fflush(stdout);

		printf("TITLE TO PARS THE RENDER\n");
		fflush(stdout);
}