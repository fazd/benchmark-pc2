time = Time.now.to_f
file = File.open('10M.txt', 'w')
n = 10000*1000

for i in 1...n do
    s = "line"+(i.to_s)
    file.puts s
end
file.close
time = Time.now.to_f - time
puts time