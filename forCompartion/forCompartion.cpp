// forCompartion.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


void fornest()
{
	std::ofstream of("fortest.txt", std::ios::trunc | std::ios::out);
	int* a;
	a = new int[3] { 299, 300, 601 };
	int* b;
	b = new int[2] { 0, 1 };
	int* c;
	c = new int[2] { 0, 1 };
	int* d;
	d = new int[2] { 1, 2 };
	int* e;
	e = new int[2] { 600, 601 };
	int* f;
	f = new int[2] { 0, 1 };
	int* g;
	g = new int[4] { 0, 1, 2, 3 };
	int* h;
	h = new int[10] { 0, 399, 400, 499, 500, 639, 640, 739, 740, 840 };
	int* i;
	i = new int[10] { 0, 399, 400, 499, 500, 639, 640, 739, 740, 840 };
	int* j;
	j = new int[3] { 0, 1, 2 };
	int* k;
	k = new int[2] { 1, 2 };
	int* l;
	l = new int[2] { 0, 1 };
	int* m;
	m = new int[12];

	for (int n = 0; n < 3; ++n)
	{
		m[0] = a[n];
		for (int o = 0; o < 2; ++o)
		{
			m[1] = b[o];
			for (int p = 0; p < 2; ++p)
			{
				m[2] = c[p];
				for (int q = 0; q < 2; ++q)
				{
					m[3] = d[q];
					for (int r = 0; r < 2; ++r)
					{
						m[4] = e[r];
						for (int s = 0; s < 2; ++s)
						{
							m[5] = f[s];
							for (int t = 0; t < 4; ++t)
							{
								m[6] = g[t];
								for (int u = 0; u < 10; ++u)
								{
									m[7] = h[u];
									for (int v = 0; v < 10; ++v)
									{
										m[8] = i[v];
										for (int w = 0; w < 3; ++w)
										{
											m[9] = j[w];
											for (int x = 0; x < 2; ++x)
											{
												m[10] = k[x];
												for (int y = 0; y < 2; ++y)
												{
													m[11] = l[y];
													for (int n = 0; n < 12; ++n)
													{
														of << m[n]<< " ";
													}
													of << "\n";
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

	}
	delete a, b, c, d, e, f, g, h, i, j, k, l, m;
	of.close();
}
void nofornest()
{
	const int value[12][10] = { { 299, 300, 601 }, 
						      { 0, 1 }, 
						      { 0, 1 }, 
						      { 1, 2 }, 
						      { 600, 601 }, 
						      { 0, 1 }, 
						      { 0, 1, 2, 3 }, 
						      { 0, 399, 400, 499, 500, 639, 640, 739, 740, 840 }, 
						      { 0, 399, 400, 499, 500, 639, 640, 739, 740, 840 }, 
						      { 0, 1, 2 }, 
						      { 1, 2 }, 
						      { 0, 1 } };
	std::ofstream of("nofortest.txt", std::ios::trunc | std::ios::out);
	const int digit[12] = {3,2,2,2,2,2,4,10,10,3,2,2};//从高到低的进位标记
	SpecialNumber spnum(12,digit);
	const int *spn;
	do{
		spn = spnum.getSpNum();
		for (int i = 0; i <12; ++i)
		{
			of << value[i][spn[i]]<<" ";
		}
		of << "\n";
	} while (++spnum);
	of.close();
}
int _tmain(int argc, _TCHAR* argv[])
{
	if (_tcscmp(argv[1], _T("-f")) == 0)
	{
		fornest();
	}
	else if (_tcscmp(argv[1], _T("-b")) == 0)
	{
		nofornest();
	}
	else if (_tcscmp(argv[1], _T("-h")) == 0)
	{
		std::wcout << "使用 -f 命令查看12层for循环时间，使用 -b 命令查看特殊数字实现的时间." << std::endl;
	}
	else
	{
		std::wcout << "无效的命令！" << std::endl;
	}
	std::cout << "程序运行时间： " << static_cast<double>(clock())/1000 << std::endl;
	return 0;
}

