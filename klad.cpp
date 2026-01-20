#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	cout << "Format vvoda:\n";
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	int y = 0;
	cout<<"Stroki: ";
	cin >> a;
	cout<<"Stolbci: ";
	cin >> b;
	cout<<"Kolichestvo kladov: ";
	cin >> c;
	int* m = new int[c*2];
	int** n = new int* [a];
	for (int i = 0; i <=c-1; i++)
	{
		cout<<i+1<<"x= ";
		cin >> x;
		cout<<i+1<<"y= ";
		cin >> y;
		m[i * 2] = x;
		m[i * 2 + 1] = y;
	}
	for (int i = 0; i < a; i++)
	{
		n[i] = new int[b];
		for (int l = 0; l<b; l++)
		{
			n[i][l] = -1;
		}
	}
	for (int k = 0; k<c*2; k+=2)
	{
		n[m[k]-1][m[k+1]-1] = 0;
	}

	int g = 0;
	list<int> p;
	for (int k = 0; k<a*b; k++)
	{
		for (int i = 0; i<a; i++)
		{
			for (int l = 0; l<b; l++)
			{
				if (n[i][l]==0)
				{

				}
				else
				{
					switch (i)
					{
					case 0:
						switch (l)
						{
						case 0:
							if (n[i][l+1]!=-1)
							{
								p.push_back(n[i][l+1]);
								if (n[i][l+1]==0)
								{
									g=1;
								}
							}
							if (n[i+1][l]!=-1)
							{
								p.push_back(n[i+1][l]);
								if (n[i+1][l]==0)
								{
									g=1;
								}
							}
							if (p.size()==0 && g==0)
							{
								n[i][l] = -1;
							}
							else
							{
								if (*min_element(p.begin(),p.end())==9)
								{
									n[i][l] = -1;
								}
								else
								{
									n[i][l] = *min_element(p.begin(),p.end())+1;
								}
							}
							g=0;
							p.clear();
							break;
						default:
							if (l==b-1)
							{
								if (n[i][l-1]!=-1)
								{
									p.push_back(n[i][l-1]);
									if (n[i][l-1]==0)
									{
										g=1;
									}
								}
								if (n[i+1][l]!=-1)
								{
									p.push_back(n[i+1][l]);
									if (n[i+1][l]==0)
									{
										g=1;
									}
								}
								if (p.size()==0 && g==0)
								{
									n[i][l] = -1;
								}
								else
								{
									if (*min_element(p.begin(),p.end())==9)
									{
										n[i][l] = -1;
									}
									else
									{
										n[i][l] = *min_element(p.begin(),p.end())+1;
									}
								}
								g=0;
								p.clear();
							}
							else
							{
								if (n[i][l-1]>-1)
								{
									p.push_back(n[i][l-1]);
									if (n[i][l-1]==0)
									{
										g=1;
									}
								}
								if (n[i][l+1]>-1)
								{
									p.push_back(n[i][l+1]);
									if (n[i][l+1]==0)
									{
										g=1;
									}
								}
								if (n[i+1][l]>-1)
								{
									p.push_back(n[i+1][l]);
									if (n[i+1][l]==0)
									{
										g=1;
									}
								}
								if (p.size()==0 && g==0)
								{
									n[i][l] = -1;
								}
								else
								{
									if (*min_element(p.begin(),p.end())==9)
									{
										n[i][l] = -1;
									}
									else
									{
										n[i][l] = *min_element(p.begin(),p.end())+1;
									}
								}
								g=0;
								p.clear();
							}
							break;
						}
						break;
					default:
						switch (l)
						{
						case 0:
							if (i==a-1)
							{
								if (n[i][l+1]!=-1)
								{
									p.push_back(n[i][l+1]);
									if (n[i][l+1]==0)
									{
										g=1;
									}
								}
								if (n[i-1][l]!=-1)
								{
									p.push_back(n[i-1][l]);
									if (n[i-1][l]==0)
									{
										g=1;
									}
								}
								if (p.size()==0 && g==0)
								{
									n[i][l] = -1;
								}
								else
								{
									if (*min_element(p.begin(),p.end())==9)
									{
										n[i][l] = -1;
									}
									else
									{
										n[i][l] = *min_element(p.begin(),p.end())+1;
									}
								}
								g=0;
								p.clear();
							}
							else
							{
								if (n[i][l+1]!=-1)
								{
									p.push_back(n[i][l+1]);
									if (n[i][l+1]==0)
									{
										g=1;
									}
								}
								if (n[i-1][l]!=-1)
								{
									p.push_back(n[i-1][l]);
									if (n[i-1][l]==0)
									{
										g=1;
									}
								}
								if (n[i+1][l]!=-1)
								{
									p.push_back(n[i+1][l]);
									if (n[i+1][l]==0)
									{
										g=1;
									}
								}
								if (p.size()==0 && g==0)
								{
									n[i][l] = -1;
								}
								else
								{
									if (*min_element(p.begin(),p.end())==9)
									{
										n[i][l] = -1;
									}
									else
									{
										n[i][l] = *min_element(p.begin(),p.end())+1;
									}
								}
								g=0;
								p.clear();
							}
							break;
						default:
							if (i==a-1)
							{
								if (l==b-1)
								{
									if (n[i][l-1]!=-1)
									{
										p.push_back(n[i][l-1]);
										if (n[i][l-1]==0)
										{
											g=1;
										}
									}
									if (n[i-1][l]!=-1)
									{
										p.push_back(n[i-1][l]);
										if (n[i-1][l]==0)
										{
											g=1;
										}
									}
									if (p.size()==0 && g==0)
									{
										n[i][l] = -1;
									}
									else
									{
										if (*min_element(p.begin(),p.end())==9)
										{
											n[i][l] = -1;
										}
										else
										{
											n[i][l] = *min_element(p.begin(),p.end())+1;
										}
									}
									g=0;
									p.clear();
								}
								else
								{
									if (n[i][l-1]!=-1)
									{
										p.push_back(n[i][l-1]);
										if (n[i][l-1]==0)
										{
											g=1;
										}
									}
									if (n[i][l+1]!=-1)
									{
										p.push_back(n[i][l+1]);
										if (n[i][l+1]==0)
										{
											g=1;
										}
									}
									if (n[i-1][l]!=-1)
									{
										p.push_back(n[i-1][l]);
										if (n[i-1][l]==0)
										{
											g=1;
										}
									}
									if (p.size()==0 && g==0)
									{
										n[i][l] = -1;
									}
									else
									{
										if (*min_element(p.begin(),p.end())==9)
										{
											n[i][l] = -1;
										}
										else
										{
											n[i][l] = *min_element(p.begin(),p.end())+1;
										}
									}
									g=0;
									p.clear();
								}
							}
							else
							{
								if (l==b-1)
								{
									if (n[i][l-1]!=-1)
									{
										p.push_back(n[i][l-1]);
										if (n[i][l-1]==0)
										{
											g=1;
										}
									}
									if (n[i-1][l]!=-1)
									{
										p.push_back(n[i-1][l]);
										if (n[i-1][l]==0)
										{
											g=1;
										}
									}
									if (n[i+1][l]!=-1)
									{
										p.push_back(n[i+1][l]);
										if (n[i+1][l]==0)
										{
											g=1;
										}
									}
									if (p.size()==0 && g==0)
									{
										n[i][l] = -1;
									}
									else
									{
										if (*min_element(p.begin(),p.end())==9)
										{
											n[i][l] = -1;
										}
										else
										{
											n[i][l] = *min_element(p.begin(),p.end())+1;
										}
									}
									g=0;
									p.clear();
								}
								else
								{
									if (n[i][l-1]!=-1)
									{
										p.push_back(n[i][l-1]);
										if (n[i][l-1]==0)
										{
											g=1;
										}
									}
									if (n[i][l+1]!=-1)
									{
										p.push_back(n[i][l+1]);
										if (n[i][l+1]==0)
										{
											g=1;
										}
									}
									if (n[i-1][l]!=-1)
									{
										p.push_back(n[i-1][l]);
										if (n[i-1][l]==0)
										{
											g=1;
										}
									}
									if (n[i+1][l]!=-1)
									{
										p.push_back(n[i+1][l]);
										if (n[i+1][l]==0)
										{
											g=1;
										}
									}
									if (p.size()==0 && g==0)
									{
										n[i][l] = -1;
									}
									else
									{
										if (*min_element(p.begin(),p.end())==9)
										{
											n[i][l] = -1;
										}
										else
										{
											n[i][l] = *min_element(p.begin(),p.end())+1;
										}
									}
									g=0;
									p.clear();
								}
							}
							break;
						}
						break;
					}
				}
			}
		}
	}

	cout<<"\n";
	for (int i = 0; i < a; i++)
	{
		for (int l = 0; l<b; l++)
		{
			if (n[i][l] == -1)
			{
				cout<<" "<<n[i][l];
			}
			else
			{
				cout <<"  "<< n[i][l];
			}
		}
		cout << "\n";
	}
}
