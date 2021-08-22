def gcd(a, b)
    return a if b == 0
    return gcd(b, a%b)
end

def lcm(a, b)
    a / gcd(a, b) * b
end

puts lcm(8, 12)