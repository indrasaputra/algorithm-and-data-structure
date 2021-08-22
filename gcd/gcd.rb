def gcd_bits(a, b)
    while b != 0 do
        a %= b
        b ^= a
        a ^= b
        b ^= a
    end
    a
end

def gcd_loop(a, b)
    while b != 0 do
        tmp = b
        b = a%b
        a = tmp
    end
    a
end

def gcd_recursive(a, b)
    return a if b == 0
    return gcd_recursive(b, a%b)
end

puts gcd_bits(24, 66)
puts gcd_loop(24, 66)
puts gcd_recursive(24, 66)