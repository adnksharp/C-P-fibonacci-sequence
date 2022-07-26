# Fibonacci sequence in C

```
        Sucesión de Fibonacci
Número: 8
f(8) = 21
```

Sucesión de Fibonacci en C usando una función recursiva.

```python
def ff(n):
    if n < 2: return n
    else: return ff(n-1) + ff(n-2)
```