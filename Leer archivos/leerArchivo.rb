time = Time.now.to_f
File.foreach("1M.txt") { |line| }
time = Time.now.to_f - time
puts time