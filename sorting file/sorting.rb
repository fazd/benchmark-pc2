v = []
File.open("vector105.txt", "r") do |f|
    f.each_line do |line|
        v.append(line.to_i)
    end
end
time = Time.now.to_f
v = v.sort
time = Time.now.to_f - time
puts time