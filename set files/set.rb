require 'set'
time = Time.now.to_f
v = Set.new
File.open("vector105.txt", "r") do |f|
    f.each_line do |line|
        v << (line.to_i)
    end
end
time = Time.now.to_f - time
puts time