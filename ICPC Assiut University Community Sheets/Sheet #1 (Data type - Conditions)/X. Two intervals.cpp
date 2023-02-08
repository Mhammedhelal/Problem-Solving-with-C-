int main()
{
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if ((l2 < l1 && r2 < l1) || (l2 > r1 && r2 > r1))
					cout << -1;
	else
	{
		int start, end;
		if (l1 > l2)
			start = l1;
		else
			start = l2;

		if (r1 > r2)
			end = r2;
		else 
			end = r1;

		cout << start << " " << end;
	}

	return 0;
}
