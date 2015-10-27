require "rake/testtask"
require "rake/clean"

CLOBBER.include('**/*.out')

task :default => :test

desc "format code"
task :format do
  format_files = FileList["**/*.c", "**/**.h"].exclude(["deps/**/*"])
  format_files.each do |t|
    output = `clang-format-3.6 -style=llvm #{t}`

    File.open(t, "w") do |file|
      file.puts(output)
    end
  end
end

Rake::TestTask.new do |t|
  t.test_files = FileList["test.rb"]
end
