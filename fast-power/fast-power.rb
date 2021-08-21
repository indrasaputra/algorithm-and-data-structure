def fast_power_with_modulo(base, power, modulo)
    return 1 if power == 0
    return base if power == 1

    result = fast_power_with_modulo(base, power/2, modulo)
    return (result * result % modulo) * base % modulo if power%2 == 1
    return result * result % modulo
end

def fast_power(base, power)
    return 1 if power == 0
    return base if power == 1

    result = fast_power(base, power/2)
    return result * result * base if power%2 == 1
    return result * result
end

puts fast_power_with_modulo(2, 100, 1000000007)
puts fast_power(2, 31)