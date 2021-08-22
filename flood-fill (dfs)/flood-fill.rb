def flood_fill(grid, has_visited)
    row = grid.size
    column = grid[0].size
    
    stack = []
    stack << [0, 0]

    while stack.size > 0 do
        current = stack.pop
        
        x = current[0]
        y = current[1]
        if x >= 0 && x < row && y >= 0 && y < column && !has_visited[x][y]
            has_visited[x][y] = true

            stack << [x-1, y]
            stack << [x, y+1]
            stack << [x+1, y]
            stack << [x, y-1]
        end
    end

    puts has_visited.inspect
end

def create_grid(row, column)
    grid = []
    (0...row).each do |i|
        grid << []
        (0...column).each do |j|
            grid[i] << 10*i + j
        end
    end
    grid
end

def create_flag(row, column)
    Array.new(row){Array.new(column){false}}
end

grid = create_grid(10, 20)
has_visited = create_flag(10, 20)
flood_fill(grid, has_visited)