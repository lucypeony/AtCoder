## RNG_10s

```c++
int x=A;
while(1){
    x-=B;
    if(x<0)
        break;
    if(x<=C) x+=D;
}
```

这一题本质上就是问这个程序段能不能无限执行下去。如果有break，那么输出false. 

这一题应该考虑对（B，D)求最大公约数，然后对gcd(B,D)进行求余，我当时写的时候只想着让A%B. 

```C++
if (A < B || D < B)
		cout << "No" << endl;
	else {
		long g = gcd(B, D);
		long worst = g - A % g;
		if (C >= B - worst) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
```



