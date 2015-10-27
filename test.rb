require 'minitest/autorun'
require "open3"

class TestExpand < Minitest::Test
  CFLAGS = "-std=c99 -Wall"

  def test_ctype
    `cc #{CFLAGS} ctype.c test.c -o ctype.out`
    stdout_str, stderr_str, status = Open3.capture3("./ctype.out")
    assert_equal "", stdout_str
    assert_equal 0, status.exitstatus
    assert_equal "", stderr_str
  end
end
